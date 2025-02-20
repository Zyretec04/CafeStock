#include "DatabaseHandler.h"
#include <msclr/marshal_cppstd.h>
#include <libpq-fe.h>  // Added PostgreSQL Header
#include <iostream>

using namespace System;

DatabaseHandler::DatabaseHandler() {
    conn = nullptr;
}

DatabaseHandler::~DatabaseHandler() {
    if (conn) {
        PQfinish(conn);
    }
}

bool DatabaseHandler::connect() {
    // Replace with your Supabase Connection String
    //const char* conninfo = "postgresql://postgres:Cafe-A261.1@db.cefsumddrfcatzaswddb.supabase.co:5432/postgres?sslmode=verify-ca&sslrootcert=ca-certificate.crt";
    const char* conninfo = "postgresql://postgres.cefsumddrfcatzaswddb:Cafe-A261.1@aws-0-ap-southeast-1.pooler.supabase.com:5432/postgres";


    // Connect to PostgreSQL
    conn = PQconnectdb(conninfo);

    // Check if Connection is Successful
    if (PQstatus(conn) != CONNECTION_OK) {
        std::cerr << "Connection to database failed: " << PQerrorMessage(conn) << std::endl;
        MessageBox::Show("Failed to connect to Supabase.\n" + gcnew String(PQerrorMessage(conn)),
            "Database Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        PQfinish(conn);
        return false;
    }

    //MessageBox::Show("Connected to Supabase PostgreSQL successfully!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
    return true;
}

DataTable^ DatabaseHandler::getData(String^ tableName) {
    if (!conn || PQstatus(conn) != CONNECTION_OK) return nullptr;

    // Convert System::String^ to std::string
    std::string tableNameStr = msclr::interop::marshal_as<std::string>(tableName);
    std::string query = "SELECT * FROM \"" + tableNameStr + "\" LIMIT 5;";

    // Execute Query
    PGresult* res = PQexec(conn, query.c_str());

    // Check Query Status
    if (PQresultStatus(res) != PGRES_TUPLES_OK) {
        std::cerr << "Query failed: " << PQerrorMessage(conn) << std::endl;
        MessageBox::Show("Failed to fetch data.\n" + gcnew String(PQerrorMessage(conn)),
            "Database Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        PQclear(res);
        return nullptr;
    }

    // Store Results in DataTable
    DataTable^ dt = gcnew DataTable();
    int columns = PQnfields(res);
    int rows = PQntuples(res);

    for (int i = 0; i < columns; i++) {
        dt->Columns->Add(gcnew String(PQfname(res, i)));
    }

    for (int i = 0; i < rows; i++) {
        DataRow^ row = dt->NewRow();
        for (int j = 0; j < columns; j++) {
            row[j] = gcnew String(PQgetvalue(res, i, j));
        }
        dt->Rows->Add(row);
    }

    PQclear(res);
    return dt;
}

DataTable^ DatabaseHandler::executeQuery(String^ query, String^ username, String^ password) {
    if (!conn || PQstatus(conn) != CONNECTION_OK) return nullptr;

    // Convert System::String^ to std::string
    std::string queryStr = msclr::interop::marshal_as<std::string>(query);
    std::string usernameStr = msclr::interop::marshal_as<std::string>(username);
    std::string passwordStr = msclr::interop::marshal_as<std::string>(password);

    // Replace Placeholders
    size_t pos = queryStr.find("@username");
    if (pos != std::string::npos) queryStr.replace(pos, 9, "'" + usernameStr + "'");

    pos = queryStr.find("@password");
    if (pos != std::string::npos) queryStr.replace(pos, 9, "'" + passwordStr + "'");

    // Execute Query
    PGresult* res = PQexec(conn, queryStr.c_str());

    // Check Query Status
    ExecStatusType status = PQresultStatus(res);

    if (status == PGRES_TUPLES_OK) {
        // This is a SELECT query, return results in DataTable
        DataTable^ dt = gcnew DataTable();
        int columns = PQnfields(res);
        int rows = PQntuples(res);

        for (int i = 0; i < columns; i++) {
            dt->Columns->Add(gcnew String(PQfname(res, i)));
        }

        for (int i = 0; i < rows; i++) {
            DataRow^ row = dt->NewRow();
            for (int j = 0; j < columns; j++) {
                row[j] = gcnew String(PQgetvalue(res, i, j));
            }
            dt->Rows->Add(row);
        }

        PQclear(res);
        return dt;
    }
    else if (status == PGRES_COMMAND_OK) {
        // This is an INSERT/UPDATE/DELETE query, return nullptr
        PQclear(res);
        return nullptr;
    }
    else {
        // Query failed
        std::cerr << "Query failed: " << PQerrorMessage(conn) << std::endl;
        MessageBox::Show("Query execution failed.\n" + gcnew String(PQerrorMessage(conn)),
            "Database Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        PQclear(res);
        return nullptr;
    }
}


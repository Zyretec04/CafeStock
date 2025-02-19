#pragma once
#include <iostream>
#include <libpq-fe.h>
#include <vector>
#include <string>
#include <msclr/marshal_cppstd.h>

#undef DataObject
#undef IServiceProvider


using namespace System;
using namespace System::Data;
using namespace System::Windows::Forms;


public ref class DatabaseHandler {
private:
    PGconn* conn;

public:
    DatabaseHandler();
    ~DatabaseHandler();
    bool connect();
    DataTable^ getData(String^ tableName);

public:
    DataTable^ executeQuery(System::String^ query, System::String^ username, System::String^ password);

};



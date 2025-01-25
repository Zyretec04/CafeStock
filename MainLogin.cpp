#include "MainLogin.h"
using namespace System;
using namespace System::Windows::Forms;
void main(array<String^>^ args)
{
Application ::EnableVisualStyles();
Application::SetCompatibleTextRenderingDefault(false);
CafeStock::Menumain form;
Application::Run(% form);
}

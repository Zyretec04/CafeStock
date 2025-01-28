#include "MainLogin.h"
#include "Menumain.h" 
using namespace System;
using namespace System::Windows::Forms;
void main(array<String^>^ args)
{
Application ::EnableVisualStyles();
Application::SetCompatibleTextRenderingDefault(false);
CafeStock::MainLogin form;
Application::Run(% form);
}

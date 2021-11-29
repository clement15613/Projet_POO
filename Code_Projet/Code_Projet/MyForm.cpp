 #include "MyForm.h"
#include "statistique.h"
#include "Accueil.h"
#include "g_personnel.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void Main(array<String^>^ args) 
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    //WinformCDemo is your project name
    CodeProjet::MyForm form;
    CodeProjet::Accueil form1;
    CodeProjet::g_personnel form2;
   // Application::Run(% form);
    Application::Run(% form2);
}



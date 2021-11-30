
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
    CodeProjet::statistique stats;

    CodeProjet::Accueil Accueil;
    CodeProjet::g_personnel g_pers;
   // Application::Run(% form);
    Application::Run(% stats);
}


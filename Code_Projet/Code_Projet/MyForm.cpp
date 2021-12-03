
 #include "MyForm.h"

#include "statistique.h"
#include "Accueil.h"
#include "Personnel.h"
#include "Commande.h"
#include "Article.h"
#include "Client.h"
#include "MonCompte.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void Main(array<String^>^ args) 
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    //WinformCDemo is your project name
    CodeProjet::MyForm form;
    CodeProjet::statistique stat;
    CodeProjet::Accueil Accueil;
    CodeProjet::Personnel perso;
    CodeProjet::Commande cmd;
    CodeProjet::Article article;
    CodeProjet::Client client;
    CodeProjet::MonCompte Compte;
   // Application::Run(% form);
    Application::Run(% client);
}


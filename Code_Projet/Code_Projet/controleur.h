#pragma once
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


ref class Controleur
{
private: 
	bool state = true;
public : 
	void mdp(TextBox^);
	void afficher_datagridView(DataGridView^);
};


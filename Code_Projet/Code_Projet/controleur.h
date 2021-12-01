#pragma once


using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Windows::Forms::DataVisualization::Charting;


ref class Controleur
{
private: 
	bool state = true;
	bool Visible = true;
	bool Invisible = false;
public : 
	void mdp(TextBox^);
	void afficher_datagridView(DataGridView^);
	void afficher_top(Chart^,String^);
	void afficher_chiffre_affaireMois(Chart^,String^);
	void afficher_label_sql(Label^, String^);
	void gestion_panel(Panel^, Panel^, Panel^, Panel^, bool);



	void afficher_form(String^, int pan);
};
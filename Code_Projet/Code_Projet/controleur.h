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
	String^ valeurTVA;
	String^ ValeurRemise;
	String^ ValeurMarge;
	String^ ValeurDemarque;
public : 
	void mdp(TextBox^);
	void mdp_label(Label^,Label^);
	void afficher_datagridView(DataGridView^);
	void afficher_top(Chart^,String^);
	void afficher_chiffre_affaireMois(Chart^,String^);
	void afficher_label_sql(Label^, String^);
	void gestion_panel(Panel^, Panel^, Panel^, Panel^, bool);
	void afficher_form(String^);
	void affichage_text_box(ComboBox^, TextBox^);
	void btnafficher_chiffre_affaire(ComboBox^, Button^, MaskedTextBox^ , Label^);
	void CalculAndrecupereValeurCommercialeStock(TextBox^, TextBox^, TextBox^, TextBox^, ComboBox^, ComboBox^, ComboBox^, ComboBox^, CheckBox^, CheckBox^, CheckBox^, CheckBox^,Label^);
	void changeFore(TextBox^);
	void afficher_label_moncompte(Label^,Label^,Label^,Label^,Label^,Label^,Label^,Label^);
	void UpdateMonCompte(Label^, Label^, Label^, Label^, Label^, Label^, Label^, Label^,TextBox^, TextBox^, TextBox^, TextBox^, TextBox^, TextBox^, TextBox^, TextBox^);

};


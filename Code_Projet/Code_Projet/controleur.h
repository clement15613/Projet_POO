#pragma once
#include "pch.h"

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
	
	MapAdresse^ mAdresse;
	MapArticle^ mArticle;
	MapClient^ mClient;
	MapCommande^ mCommande;
	MapComposer^ mComposer;
	MapCorrespond^ mCorrespond;
	MapFacturer^ mFacturer;
	MapLivrer^ mLivrer;
	MapPayment^ mPayment;
	MapPersonnel^ mPersonnel;
	MapVille^ mVille;

	Connexion^ maCNX;
	SqlDataReader^ reader;
	

public : 
	Controleur();
	void mdp(TextBox^);
	void afficher_datagridView(DataGridView^);
	void afficher_top(Chart^,String^);
	void afficher_chiffre_affaireMois(Chart^,String^);
	void afficher_label_sql(Label^, String^);
	void gestion_panel(Panel^, Panel^, Panel^, Panel^, bool);
	void afficher_form(String^);

	void affichage_text_box(ComboBox^, TextBox^);
	void btnafficher_chiffre_affaire(ComboBox^, Button^, MaskedTextBox^ , Label^);
	void CalculAndrecupereValeurCommercialeStock(TextBox^, TextBox^, TextBox^, TextBox^, ComboBox^, ComboBox^, ComboBox^, ComboBox^, CheckBox^, CheckBox^, CheckBox^, CheckBox^,Label^);
	void CnxComboBox_BDD(ComboBox^, String^);

	void afficher_form(String^, int pan);

	void ajouterPersonnel(TextBox^,TextBox^,DateTimePicker^, TextBox^, TextBox^, TextBox^, TextBox^, TextBox^,ComboBox^, TextBox^);
	void supprimerPersonnel(ComboBox^);
	void afficherModifierPersonnel(ComboBox^, TextBox^, TextBox^, DateTimePicker^, TextBox^, TextBox^, TextBox^, TextBox^, TextBox^, ComboBox^, TextBox^);
	void getIdPersonnelModifier(ComboBox^);
	void modifierPersonnel(TextBox^, TextBox^, DateTimePicker^, TextBox^, TextBox^, TextBox^, TextBox^, TextBox^, ComboBox^, TextBox^);
	void afficherPersonnel(DataGridView^, ComboBox^, ComboBox^, ComboBox^, ComboBox^, DateTimePicker^);
};


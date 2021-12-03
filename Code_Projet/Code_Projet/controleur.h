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
	

	String^ valeurTVA;
	String^ ValeurRemise;
	String^ ValeurMarge;
	String^ ValeurDemarque;
public : 
	Controleur();
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
	void CnxComboBox_BDD(ComboBox^, String^);
	void ajouterPersonnel(TextBox^,TextBox^,DateTimePicker^, TextBox^, TextBox^, TextBox^, TextBox^, TextBox^,ComboBox^, TextBox^);
	void supprimerPersonnel(ComboBox^);
	void afficherModifierPersonnel(ComboBox^, TextBox^, TextBox^, DateTimePicker^, TextBox^, TextBox^, TextBox^, TextBox^, TextBox^, ComboBox^, TextBox^);
	void getIdPersonnelModifier(ComboBox^);
	void modifierPersonnel(TextBox^, TextBox^, DateTimePicker^, TextBox^, TextBox^, TextBox^, TextBox^, TextBox^, ComboBox^, TextBox^);
	void afficherPersonnel(DataGridView^);
	void ajouterArticle(TextBox^, TextBox^, TextBox^, TextBox^, TextBox^, TextBox^, TextBox^);
	void AfficherArticle(ComboBox^, ComboBox^, ComboBox^,DataGridView^, NumericUpDown^);
	void afficher_datagridView_commande(DataGridView^);
	void modifierArticle(TextBox^,TextBox^, TextBox^, TextBox^, TextBox^,TextBox^,TextBox^, ComboBox^);
	void afficherModifierArticle(TextBox^, TextBox^, TextBox^, TextBox^, TextBox^, TextBox^, TextBox^,ComboBox^);
	void supprimerArticle(ComboBox^);
	void ajouterClient(TextBox^, TextBox^, TextBox^, TextBox^, TextBox^, ComboBox^,DateTimePicker^,DateTimePicker^);
	void afficherClient(ComboBox^,ComboBox^,ComboBox^,DateTimePicker^,DateTimePicker^,DataGridView^);
	void afficherModifierClient(TextBox^, TextBox^, TextBox^, TextBox^, TextBox^, ComboBox^, ComboBox^, DateTimePicker^, DateTimePicker^);
	void getIdClientModifier(ComboBox^ monCB);
	void UpdateModifierClient(ComboBox^, TextBox^, TextBox^, TextBox^, TextBox^, TextBox^, ComboBox^, DateTimePicker^, DateTimePicker^);
};


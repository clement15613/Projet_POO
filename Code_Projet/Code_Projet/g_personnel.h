#pragma once
#include "controleur.h"
#include <string>

namespace CodeProjet {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de g_personnel
	/// </summary>
	public ref class g_personnel : public System::Windows::Forms::Form
	{
	public:
		g_personnel(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~g_personnel()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox_modif_pers;

		   
	protected:
		
	protected:











	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ btnGestionstock;
	private: System::Windows::Forms::Button^ btnGEstionCommande;
	private: System::Windows::Forms::Button^ btnMonProfil;
	private: System::Windows::Forms::Button^ btnGestionClients;
	private: System::Windows::Forms::Button^ btnGestionStatistique;
	private: System::Windows::Forms::Button^ btnGestionPersonnel;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ btn_cree_pers;

		//Controleur^ GB1;
	private: System::Windows::Forms::Button^ btn_sup_pers;

	private: System::Windows::Forms::Button^ btn_aff_pers;

	private: System::Windows::Forms::Button^ btn_modif_pers;

		//Controleur^ GB2;














	private:
	public: System::Windows::Forms::Panel^ panel_modif;



		   //Controleur^ GB1;

		  // Controleur^ GB1;
























	private: System::Windows::Forms::Label^ label33;
public: System::Windows::Forms::Panel^ panel_aff;
private:
private: System::Windows::Forms::TextBox^ textBox8;
public:
private: System::Windows::Forms::TextBox^ textBox6;
private: System::Windows::Forms::TextBox^ textBox7;
private: System::Windows::Forms::TextBox^ textBox9;
private: System::Windows::Forms::TextBox^ textBox10;
private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::Label^ label14;
public: System::Windows::Forms::Panel^ panel_sup;
private:

private:

public:
private: System::Windows::Forms::Label^ label10;












private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel2;
private: System::Windows::Forms::Label^ label30;
private: System::Windows::Forms::TextBox^ textBox21;
private: System::Windows::Forms::Label^ label31;
private: System::Windows::Forms::TextBox^ textBox22;
private: System::Windows::Forms::TextBox^ textBox24;
private: System::Windows::Forms::Label^ label32;
private: System::Windows::Forms::TextBox^ textBox25;
private: System::Windows::Forms::Label^ label42;
private: System::Windows::Forms::Label^ label38;
private: System::Windows::Forms::Label^ label41;
private: System::Windows::Forms::TextBox^ textBox30;
private: System::Windows::Forms::Label^ label40;
private: System::Windows::Forms::Label^ label39;
private: System::Windows::Forms::DateTimePicker^ dateTimePicker5;












private: System::Windows::Forms::Panel^ panel3;
private: System::Windows::Forms::Label^ label44;
private: System::Windows::Forms::TextBox^ textBox1;
private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::TextBox^ textBox2;
private: System::Windows::Forms::TextBox^ textBox3;
private: System::Windows::Forms::Label^ label3;
private: System::Windows::Forms::TextBox^ textBox4;
private: System::Windows::Forms::Label^ label4;
private: System::Windows::Forms::TextBox^ textBox5;
private: System::Windows::Forms::Label^ label24;
private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
private: System::Windows::Forms::Label^ label25;
private: System::Windows::Forms::Label^ label26;
private: System::Windows::Forms::Label^ label43;
private: System::Windows::Forms::ComboBox^ comboBox1;
private: System::Windows::Forms::Label^ label28;
private: System::Windows::Forms::Button^ button5;
private: System::Windows::Forms::Button^ button4;
private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::ComboBox^ comboBox3;
private: System::Windows::Forms::Label^ label11;
private: System::Windows::Forms::Button^ button2;
private: System::Windows::Forms::Panel^ panel4;
private: System::Windows::Forms::Button^ button1;
private: System::Windows::Forms::Label^ label12;
private: System::Windows::Forms::TextBox^ textBox11;
private: System::Windows::Forms::Label^ label13;
private: System::Windows::Forms::TextBox^ textBox12;
private: System::Windows::Forms::TextBox^ textBox13;
private: System::Windows::Forms::Label^ label15;
private: System::Windows::Forms::TextBox^ textBox14;
private: System::Windows::Forms::Label^ label16;
private: System::Windows::Forms::TextBox^ textBox15;
private: System::Windows::Forms::Label^ label34;
private: System::Windows::Forms::DateTimePicker^ dateTimePicker2;
private: System::Windows::Forms::Label^ label35;
private: System::Windows::Forms::Label^ label36;
private: System::Windows::Forms::Button^ button6;
private: System::Windows::Forms::Label^ label27;
private: System::Windows::Forms::ComboBox^ comboBox2;
private: System::Windows::Forms::Label^ label29;
private: System::Windows::Forms::Label^ label17;
private: System::Windows::Forms::Label^ label18;
private: System::Windows::Forms::DateTimePicker^ dateTimePicker4;
private: System::Windows::Forms::Label^ label19;
private: System::Windows::Forms::TextBox^ textBox20;
private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::TextBox^ textBox19;
private: System::Windows::Forms::Label^ label21;
private: System::Windows::Forms::TextBox^ textBox18;
private: System::Windows::Forms::Label^ label23;
private: System::Windows::Forms::TextBox^ textBox17;
private: System::Windows::Forms::Label^ label22;
private: System::Windows::Forms::TextBox^ textBox16;
public: System::Windows::Forms::Panel^ panel_cree;
private:
private: System::Windows::Forms::Button^ button3;
public:






























































	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->flowLayoutPanel2 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->btnGestionstock = (gcnew System::Windows::Forms::Button());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->btnGEstionCommande = (gcnew System::Windows::Forms::Button());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->btnMonProfil = (gcnew System::Windows::Forms::Button());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->btnGestionClients = (gcnew System::Windows::Forms::Button());
			this->textBox24 = (gcnew System::Windows::Forms::TextBox());
			this->btnGestionStatistique = (gcnew System::Windows::Forms::Button());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->btnGestionPersonnel = (gcnew System::Windows::Forms::Button());
			this->textBox25 = (gcnew System::Windows::Forms::TextBox());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->textBox30 = (gcnew System::Windows::Forms::TextBox());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker5 = (gcnew System::Windows::Forms::DateTimePicker());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->btn_sup_pers = (gcnew System::Windows::Forms::Button());
			this->btn_aff_pers = (gcnew System::Windows::Forms::Button());
			this->btn_modif_pers = (gcnew System::Windows::Forms::Button());
			this->btn_cree_pers = (gcnew System::Windows::Forms::Button());
			this->panel_modif = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->panel_aff = (gcnew System::Windows::Forms::Panel());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->panel_sup = (gcnew System::Windows::Forms::Panel());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker4 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->panel_cree = (gcnew System::Windows::Forms::Panel());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel_modif->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel_aff->SuspendLayout();
			this->panel_sup->SuspendLayout();
			this->panel_cree->SuspendLayout();
			this->panel4->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->flowLayoutPanel2);
			this->panel1->Controls->Add(this->label30);
			this->panel1->Controls->Add(this->btnGestionstock);
			this->panel1->Controls->Add(this->textBox21);
			this->panel1->Controls->Add(this->btnGEstionCommande);
			this->panel1->Controls->Add(this->label31);
			this->panel1->Controls->Add(this->btnMonProfil);
			this->panel1->Controls->Add(this->textBox22);
			this->panel1->Controls->Add(this->btnGestionClients);
			this->panel1->Controls->Add(this->textBox24);
			this->panel1->Controls->Add(this->btnGestionStatistique);
			this->panel1->Controls->Add(this->label32);
			this->panel1->Controls->Add(this->btnGestionPersonnel);
			this->panel1->Controls->Add(this->textBox25);
			this->panel1->Controls->Add(this->label42);
			this->panel1->Controls->Add(this->label38);
			this->panel1->Controls->Add(this->label41);
			this->panel1->Controls->Add(this->textBox30);
			this->panel1->Controls->Add(this->label40);
			this->panel1->Controls->Add(this->label39);
			this->panel1->Controls->Add(this->dateTimePicker5);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1518, 97);
			this->panel1->TabIndex = 2;
			// 
			// flowLayoutPanel2
			// 
			this->flowLayoutPanel2->Location = System::Drawing::Point(223, 97);
			this->flowLayoutPanel2->Name = L"flowLayoutPanel2";
			this->flowLayoutPanel2->Size = System::Drawing::Size(936, 572);
			this->flowLayoutPanel2->TabIndex = 54;
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.25F));
			this->label30->Location = System::Drawing::Point(223, 672);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(331, 25);
			this->label30->TabIndex = 53;
			this->label30->Text = L"Quel profil voulez vous modifier \?";
			// 
			// btnGestionstock
			// 
			this->btnGestionstock->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->btnGestionstock->AutoSize = true;
			this->btnGestionstock->CausesValidation = false;
			this->btnGestionstock->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnGestionstock->Location = System::Drawing::Point(848, 22);
			this->btnGestionstock->Name = L"btnGestionstock";
			this->btnGestionstock->Size = System::Drawing::Size(175, 49);
			this->btnGestionstock->TabIndex = 13;
			this->btnGestionstock->Text = L"Gestion stock";
			this->btnGestionstock->UseVisualStyleBackColor = true;
			// 
			// textBox21
			// 
			this->textBox21->Location = System::Drawing::Point(223, 700);
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(638, 20);
			this->textBox21->TabIndex = 52;
			// 
			// btnGEstionCommande
			// 
			this->btnGEstionCommande->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->btnGEstionCommande->AutoSize = true;
			this->btnGEstionCommande->CausesValidation = false;
			this->btnGEstionCommande->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnGEstionCommande->Location = System::Drawing::Point(675, 22);
			this->btnGEstionCommande->Name = L"btnGEstionCommande";
			this->btnGEstionCommande->Size = System::Drawing::Size(175, 49);
			this->btnGEstionCommande->TabIndex = 9;
			this->btnGEstionCommande->Text = L"Gestion Commande";
			this->btnGEstionCommande->UseVisualStyleBackColor = true;
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->label31->Location = System::Drawing::Point(223, 723);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(61, 24);
			this->label31->TabIndex = 41;
			this->label31->Text = L"Nom :";
			// 
			// btnMonProfil
			// 
			this->btnMonProfil->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->btnMonProfil->AutoSize = true;
			this->btnMonProfil->CausesValidation = false;
			this->btnMonProfil->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnMonProfil->Location = System::Drawing::Point(1194, 22);
			this->btnMonProfil->Name = L"btnMonProfil";
			this->btnMonProfil->Size = System::Drawing::Size(175, 49);
			this->btnMonProfil->TabIndex = 12;
			this->btnMonProfil->Text = L"Profil";
			this->btnMonProfil->UseVisualStyleBackColor = true;
			// 
			// textBox22
			// 
			this->textBox22->Location = System::Drawing::Point(223, 750);
			this->textBox22->Name = L"textBox22";
			this->textBox22->Size = System::Drawing::Size(638, 20);
			this->textBox22->TabIndex = 51;
			// 
			// btnGestionClients
			// 
			this->btnGestionClients->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->btnGestionClients->AutoSize = true;
			this->btnGestionClients->CausesValidation = false;
			this->btnGestionClients->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnGestionClients->Location = System::Drawing::Point(502, 22);
			this->btnGestionClients->Name = L"btnGestionClients";
			this->btnGestionClients->Size = System::Drawing::Size(175, 49);
			this->btnGestionClients->TabIndex = 8;
			this->btnGestionClients->Text = L"Gestion Clients";
			this->btnGestionClients->UseVisualStyleBackColor = true;
			// 
			// textBox24
			// 
			this->textBox24->Location = System::Drawing::Point(223, 776);
			this->textBox24->Name = L"textBox24";
			this->textBox24->Size = System::Drawing::Size(638, 20);
			this->textBox24->TabIndex = 50;
			// 
			// btnGestionStatistique
			// 
			this->btnGestionStatistique->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->btnGestionStatistique->AutoSize = true;
			this->btnGestionStatistique->CausesValidation = false;
			this->btnGestionStatistique->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnGestionStatistique->Location = System::Drawing::Point(1021, 22);
			this->btnGestionStatistique->Name = L"btnGestionStatistique";
			this->btnGestionStatistique->Size = System::Drawing::Size(175, 49);
			this->btnGestionStatistique->TabIndex = 11;
			this->btnGestionStatistique->Text = L"Gestion Statistique";
			this->btnGestionStatistique->UseVisualStyleBackColor = true;
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->label32->Location = System::Drawing::Point(223, 799);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(133, 24);
			this->label32->TabIndex = 42;
			this->label32->Text = L"Mot de passe :";
			// 
			// btnGestionPersonnel
			// 
			this->btnGestionPersonnel->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->btnGestionPersonnel->AutoSize = true;
			this->btnGestionPersonnel->CausesValidation = false;
			this->btnGestionPersonnel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnGestionPersonnel->Location = System::Drawing::Point(329, 22);
			this->btnGestionPersonnel->Name = L"btnGestionPersonnel";
			this->btnGestionPersonnel->Size = System::Drawing::Size(175, 49);
			this->btnGestionPersonnel->TabIndex = 10;
			this->btnGestionPersonnel->Text = L"Gestion Personnel";
			this->btnGestionPersonnel->UseVisualStyleBackColor = true;
			// 
			// textBox25
			// 
			this->textBox25->Location = System::Drawing::Point(223, 826);
			this->textBox25->Name = L"textBox25";
			this->textBox25->Size = System::Drawing::Size(638, 20);
			this->textBox25->TabIndex = 49;
			// 
			// label42
			// 
			this->label42->AccessibleName = L"";
			this->label42->AutoSize = true;
			this->label42->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label42->Location = System::Drawing::Point(223, 973);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(183, 18);
			this->label42->TabIndex = 40;
			this->label42->Text = L"Modifier un Personnel :";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->label38->Location = System::Drawing::Point(223, 849);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(159, 24);
			this->label38->TabIndex = 43;
			this->label38->Text = L"Nom d\'utilisateur :";
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->label41->Location = System::Drawing::Point(316, 949);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(259, 24);
			this->label41->TabIndex = 46;
			this->label41->Text = L"Cofirmation de Mot de passe :";
			// 
			// textBox30
			// 
			this->textBox30->Location = System::Drawing::Point(223, 876);
			this->textBox30->Name = L"textBox30";
			this->textBox30->Size = System::Drawing::Size(638, 20);
			this->textBox30->TabIndex = 48;
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->label40->Location = System::Drawing::Point(223, 949);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(87, 24);
			this->label40->TabIndex = 45;
			this->label40->Text = L"Prénom :";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->label39->Location = System::Drawing::Point(223, 899);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(169, 24);
			this->label39->TabIndex = 44;
			this->label39->Text = L"Date d\'embauche :";
			// 
			// dateTimePicker5
			// 
			this->dateTimePicker5->Location = System::Drawing::Point(223, 926);
			this->dateTimePicker5->Name = L"dateTimePicker5";
			this->dateTimePicker5->Size = System::Drawing::Size(678, 20);
			this->dateTimePicker5->TabIndex = 47;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->btn_sup_pers);
			this->panel2->Controls->Add(this->btn_aff_pers);
			this->panel2->Controls->Add(this->btn_modif_pers);
			this->panel2->Controls->Add(this->btn_cree_pers);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel2->Location = System::Drawing::Point(0, 97);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(180, 844);
			this->panel2->TabIndex = 3;
			// 
			// btn_sup_pers
			// 
			this->btn_sup_pers->Location = System::Drawing::Point(12, 290);
			this->btn_sup_pers->Name = L"btn_sup_pers";
			this->btn_sup_pers->Size = System::Drawing::Size(146, 82);
			this->btn_sup_pers->TabIndex = 3;
			this->btn_sup_pers->Text = L"Supprimer un Personnel";
			this->btn_sup_pers->UseVisualStyleBackColor = true;
			this->btn_sup_pers->Click += gcnew System::EventHandler(this, &g_personnel::btn_sup_pers_Click);
			// 
			// btn_aff_pers
			// 
			this->btn_aff_pers->Location = System::Drawing::Point(12, 26);
			this->btn_aff_pers->Name = L"btn_aff_pers";
			this->btn_aff_pers->Size = System::Drawing::Size(146, 82);
			this->btn_aff_pers->TabIndex = 2;
			this->btn_aff_pers->Text = L"Afficher un Personnel";
			this->btn_aff_pers->UseVisualStyleBackColor = true;
			this->btn_aff_pers->Click += gcnew System::EventHandler(this, &g_personnel::btn_aff_pers_Click);
			// 
			// btn_modif_pers
			// 
			this->btn_modif_pers->Location = System::Drawing::Point(12, 114);
			this->btn_modif_pers->Name = L"btn_modif_pers";
			this->btn_modif_pers->Size = System::Drawing::Size(146, 82);
			this->btn_modif_pers->TabIndex = 1;
			this->btn_modif_pers->Text = L"Modifier un Personnel";
			this->btn_modif_pers->UseVisualStyleBackColor = true;
			this->btn_modif_pers->Click += gcnew System::EventHandler(this, &g_personnel::btn_modif_pers_Click);
			// 
			// btn_cree_pers
			// 
			this->btn_cree_pers->Location = System::Drawing::Point(12, 202);
			this->btn_cree_pers->Name = L"btn_cree_pers";
			this->btn_cree_pers->Size = System::Drawing::Size(146, 82);
			this->btn_cree_pers->TabIndex = 0;
			this->btn_cree_pers->Text = L"Créer un Personnel";
			this->btn_cree_pers->UseVisualStyleBackColor = true;
			this->btn_cree_pers->Click += gcnew System::EventHandler(this, &g_personnel::btn_cree_pers_Click);
			// 
			// panel_modif
			// 
			this->panel_modif->Controls->Add(this->button5);
			this->panel_modif->Controls->Add(this->panel3);
			this->panel_modif->Controls->Add(this->label43);
			this->panel_modif->Controls->Add(this->comboBox1);
			this->panel_modif->Controls->Add(this->label28);
			this->panel_modif->Controls->Add(this->label33);
			this->panel_modif->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel_modif->Location = System::Drawing::Point(0, 0);
			this->panel_modif->Name = L"panel_modif";
			this->panel_modif->Size = System::Drawing::Size(1518, 941);
			this->panel_modif->TabIndex = 27;
			this->panel_modif->Visible = false;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->button4);
			this->panel3->Controls->Add(this->label44);
			this->panel3->Controls->Add(this->textBox1);
			this->panel3->Controls->Add(this->label1);
			this->panel3->Controls->Add(this->textBox2);
			this->panel3->Controls->Add(this->textBox3);
			this->panel3->Controls->Add(this->label3);
			this->panel3->Controls->Add(this->textBox4);
			this->panel3->Controls->Add(this->label4);
			this->panel3->Controls->Add(this->textBox5);
			this->panel3->Controls->Add(this->label24);
			this->panel3->Controls->Add(this->dateTimePicker1);
			this->panel3->Controls->Add(this->label25);
			this->panel3->Controls->Add(this->label26);
			this->panel3->Location = System::Drawing::Point(290, 319);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(956, 527);
			this->panel3->TabIndex = 42;
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.25F));
			this->label44->Location = System::Drawing::Point(271, 62);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(367, 25);
			this->label44->TabIndex = 54;
			this->label44->Text = L"Quel données voulez vous modifier \?";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(720, 144);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(160, 20);
			this->textBox1->TabIndex = 53;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->label1->Location = System::Drawing::Point(258, 139);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(61, 24);
			this->label1->TabIndex = 42;
			this->label1->Text = L"Nom :";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(720, 248);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(160, 20);
			this->textBox2->TabIndex = 52;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(325, 348);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(160, 20);
			this->textBox3->TabIndex = 51;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->label3->Location = System::Drawing::Point(186, 243);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(133, 24);
			this->label3->TabIndex = 43;
			this->label3->Text = L"Mot de passe :";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(326, 248);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(160, 20);
			this->textBox4->TabIndex = 50;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->label4->Location = System::Drawing::Point(555, 243);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(159, 24);
			this->label4->TabIndex = 44;
			this->label4->Text = L"Nom d\'utilisateur :";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(326, 142);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(160, 20);
			this->textBox5->TabIndex = 49;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->label24->Location = System::Drawing::Point(545, 343);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(169, 24);
			this->label24->TabIndex = 45;
			this->label24->Text = L"Date d\'embauche :";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(720, 349);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker1->TabIndex = 48;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->label25->Location = System::Drawing::Point(627, 137);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(87, 24);
			this->label25->TabIndex = 46;
			this->label25->Text = L"Prénom :";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->label26->Location = System::Drawing::Point(60, 345);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(259, 24);
			this->label26->TabIndex = 47;
			this->label26->Text = L"Cofirmation de Mot de passe :";
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Location = System::Drawing::Point(762, 193);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(71, 13);
			this->label43->TabIndex = 40;
			this->label43->Text = L"(prénom nom)";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(854, 171);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(225, 21);
			this->comboBox1->TabIndex = 39;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.25F));
			this->label28->Location = System::Drawing::Point(517, 168);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(331, 25);
			this->label28->TabIndex = 38;
			this->label28->Text = L"Quel profil voulez vous modifier \?";
			// 
			// label33
			// 
			this->label33->AccessibleName = L"";
			this->label33->AutoSize = true;
			this->label33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label33->Location = System::Drawing::Point(201, 115);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(183, 18);
			this->label33->TabIndex = 25;
			this->label33->Text = L"Modifier un Personnel :";
			// 
			// panel_aff
			// 
			this->panel_aff->Controls->Add(this->label2);
			this->panel_aff->Controls->Add(this->comboBox3);
			this->panel_aff->Controls->Add(this->label11);
			this->panel_aff->Controls->Add(this->button2);
			this->panel_aff->Controls->Add(this->textBox8);
			this->panel_aff->Controls->Add(this->textBox6);
			this->panel_aff->Controls->Add(this->textBox7);
			this->panel_aff->Controls->Add(this->textBox9);
			this->panel_aff->Controls->Add(this->textBox10);
			this->panel_aff->Controls->Add(this->label5);
			this->panel_aff->Controls->Add(this->label6);
			this->panel_aff->Controls->Add(this->label7);
			this->panel_aff->Controls->Add(this->label8);
			this->panel_aff->Controls->Add(this->label9);
			this->panel_aff->Controls->Add(this->label14);
			this->panel_aff->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel_aff->Location = System::Drawing::Point(0, 0);
			this->panel_aff->Name = L"panel_aff";
			this->panel_aff->Size = System::Drawing::Size(1518, 941);
			this->panel_aff->TabIndex = 50;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(1041, 645);
			this->textBox8->Name = L"textBox8";
			this->textBox8->ReadOnly = true;
			this->textBox8->Size = System::Drawing::Size(160, 20);
			this->textBox8->TabIndex = 50;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(1041, 454);
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(160, 20);
			this->textBox6->TabIndex = 49;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(1041, 555);
			this->textBox7->Name = L"textBox7";
			this->textBox7->ReadOnly = true;
			this->textBox7->Size = System::Drawing::Size(160, 20);
			this->textBox7->TabIndex = 48;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(544, 554);
			this->textBox9->Name = L"textBox9";
			this->textBox9->ReadOnly = true;
			this->textBox9->Size = System::Drawing::Size(160, 20);
			this->textBox9->TabIndex = 46;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(544, 448);
			this->textBox10->Name = L"textBox10";
			this->textBox10->ReadOnly = true;
			this->textBox10->Size = System::Drawing::Size(160, 20);
			this->textBox10->TabIndex = 45;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->label5->Location = System::Drawing::Point(948, 447);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(87, 24);
			this->label5->TabIndex = 42;
			this->label5->Text = L"Prénom :";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->label6->Location = System::Drawing::Point(866, 643);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(169, 24);
			this->label6->TabIndex = 41;
			this->label6->Text = L"Date d\'embauche :";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->label7->Location = System::Drawing::Point(876, 550);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(159, 24);
			this->label7->TabIndex = 40;
			this->label7->Text = L"Nom d\'utilisateur :";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->label8->Location = System::Drawing::Point(404, 549);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(133, 24);
			this->label8->TabIndex = 39;
			this->label8->Text = L"Mot de passe :";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->label9->Location = System::Drawing::Point(476, 445);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(61, 24);
			this->label9->TabIndex = 38;
			this->label9->Text = L"Nom :";
			// 
			// label14
			// 
			this->label14->AccessibleName = L"";
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(213, 122);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(179, 18);
			this->label14->TabIndex = 25;
			this->label14->Text = L"Afficher un Personnel :";
			// 
			// panel_sup
			// 
			this->panel_sup->Controls->Add(this->panel4);
			this->panel_sup->Controls->Add(this->button6);
			this->panel_sup->Controls->Add(this->label27);
			this->panel_sup->Controls->Add(this->comboBox2);
			this->panel_sup->Controls->Add(this->label29);
			this->panel_sup->Controls->Add(this->label10);
			this->panel_sup->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel_sup->Location = System::Drawing::Point(0, 0);
			this->panel_sup->Name = L"panel_sup";
			this->panel_sup->Size = System::Drawing::Size(1518, 941);
			this->panel_sup->TabIndex = 27;
			this->panel_sup->Visible = false;
			// 
			// label10
			// 
			this->label10->AccessibleName = L"";
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(196, 113);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(199, 18);
			this->label10->TabIndex = 0;
			this->label10->Text = L"Supprimer un Personnel :";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->label17->Location = System::Drawing::Point(368, 468);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(259, 24);
			this->label17->TabIndex = 6;
			this->label17->Text = L"Cofirmation de Mot de passe :";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->label18->Location = System::Drawing::Point(935, 260);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(87, 24);
			this->label18->TabIndex = 5;
			this->label18->Text = L"Prénom :";
			// 
			// dateTimePicker4
			// 
			this->dateTimePicker4->Location = System::Drawing::Point(1028, 472);
			this->dateTimePicker4->Name = L"dateTimePicker4";
			this->dateTimePicker4->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker4->TabIndex = 7;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->label19->Location = System::Drawing::Point(853, 466);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(169, 24);
			this->label19->TabIndex = 4;
			this->label19->Text = L"Date d\'embauche :";
			// 
			// textBox20
			// 
			this->textBox20->Location = System::Drawing::Point(634, 265);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(160, 20);
			this->textBox20->TabIndex = 8;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->label20->Location = System::Drawing::Point(863, 363);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(159, 24);
			this->label20->TabIndex = 3;
			this->label20->Text = L"Nom d\'utilisateur :";
			// 
			// textBox19
			// 
			this->textBox19->Location = System::Drawing::Point(634, 371);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(160, 20);
			this->textBox19->TabIndex = 9;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->label21->Location = System::Drawing::Point(494, 366);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(133, 24);
			this->label21->TabIndex = 2;
			this->label21->Text = L"Mot de passe :";
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(633, 471);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(160, 20);
			this->textBox18->TabIndex = 10;
			// 
			// label23
			// 
			this->label23->AccessibleName = L"";
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(196, 129);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(164, 18);
			this->label23->TabIndex = 0;
			this->label23->Text = L"Créer un Personnel :";
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(1028, 368);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(160, 20);
			this->textBox17->TabIndex = 11;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->label22->Location = System::Drawing::Point(566, 262);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(61, 24);
			this->label22->TabIndex = 1;
			this->label22->Text = L"Nom :";
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(1028, 267);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(160, 20);
			this->textBox16->TabIndex = 12;
			// 
			// panel_cree
			// 
			this->panel_cree->Controls->Add(this->button3);
			this->panel_cree->Controls->Add(this->textBox16);
			this->panel_cree->Controls->Add(this->label22);
			this->panel_cree->Controls->Add(this->textBox17);
			this->panel_cree->Controls->Add(this->label23);
			this->panel_cree->Controls->Add(this->textBox18);
			this->panel_cree->Controls->Add(this->label21);
			this->panel_cree->Controls->Add(this->textBox19);
			this->panel_cree->Controls->Add(this->label20);
			this->panel_cree->Controls->Add(this->textBox20);
			this->panel_cree->Controls->Add(this->label19);
			this->panel_cree->Controls->Add(this->dateTimePicker4);
			this->panel_cree->Controls->Add(this->label18);
			this->panel_cree->Controls->Add(this->label17);
			this->panel_cree->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel_cree->Location = System::Drawing::Point(0, 0);
			this->panel_cree->Name = L"panel_cree";
			this->panel_cree->Size = System::Drawing::Size(1518, 941);
			this->panel_cree->TabIndex = 26;
			this->panel_cree->Visible = false;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(787, 207);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(71, 13);
			this->label27->TabIndex = 43;
			this->label27->Text = L"(prénom nom)";
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(891, 186);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(225, 21);
			this->comboBox2->TabIndex = 42;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.25F));
			this->label29->Location = System::Drawing::Point(542, 182);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(343, 25);
			this->label29->TabIndex = 41;
			this->label29->Text = L"Quel profil voulez vous supprimé \?";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(718, 265);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(146, 82);
			this->button2->TabIndex = 51;
			this->button2->Text = L"Afficher le Personnel";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(784, 558);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(146, 82);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Créer le Personnel";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(428, 442);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(146, 82);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Modifier le Personnel";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(715, 231);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(146, 82);
			this->button5->TabIndex = 55;
			this->button5->Text = L"Suivant";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(755, 247);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(146, 82);
			this->button6->TabIndex = 59;
			this->button6->Text = L"Suivant";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.25F));
			this->label11->Location = System::Drawing::Point(490, 184);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(326, 25);
			this->label11->TabIndex = 56;
			this->label11->Text = L"Quel profil voulez vous afficher \?";
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(827, 187);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(225, 21);
			this->comboBox3->TabIndex = 57;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(735, 209);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(71, 13);
			this->label2->TabIndex = 58;
			this->label2->Text = L"(prénom nom)";
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->button1);
			this->panel4->Controls->Add(this->label12);
			this->panel4->Controls->Add(this->textBox11);
			this->panel4->Controls->Add(this->label13);
			this->panel4->Controls->Add(this->textBox12);
			this->panel4->Controls->Add(this->textBox13);
			this->panel4->Controls->Add(this->label15);
			this->panel4->Controls->Add(this->textBox14);
			this->panel4->Controls->Add(this->label16);
			this->panel4->Controls->Add(this->textBox15);
			this->panel4->Controls->Add(this->label34);
			this->panel4->Controls->Add(this->dateTimePicker2);
			this->panel4->Controls->Add(this->label35);
			this->panel4->Controls->Add(this->label36);
			this->panel4->Location = System::Drawing::Point(341, 346);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(956, 527);
			this->panel4->TabIndex = 60;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(397, 430);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(146, 82);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Supprimer le Personnel";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.25F));
			this->label12->Location = System::Drawing::Point(271, 62);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(401, 25);
			this->label12->TabIndex = 54;
			this->label12->Text = L"Confirmation du personnel a supprimer \?";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(720, 144);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(160, 20);
			this->textBox11->TabIndex = 53;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->label13->Location = System::Drawing::Point(258, 139);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(61, 24);
			this->label13->TabIndex = 42;
			this->label13->Text = L"Nom :";
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(720, 248);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(160, 20);
			this->textBox12->TabIndex = 52;
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(325, 348);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(160, 20);
			this->textBox13->TabIndex = 51;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->label15->Location = System::Drawing::Point(186, 243);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(133, 24);
			this->label15->TabIndex = 43;
			this->label15->Text = L"Mot de passe :";
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(326, 248);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(160, 20);
			this->textBox14->TabIndex = 50;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->label16->Location = System::Drawing::Point(555, 243);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(159, 24);
			this->label16->TabIndex = 44;
			this->label16->Text = L"Nom d\'utilisateur :";
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(326, 142);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(160, 20);
			this->textBox15->TabIndex = 49;
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->label34->Location = System::Drawing::Point(545, 343);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(169, 24);
			this->label34->TabIndex = 45;
			this->label34->Text = L"Date d\'embauche :";
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Location = System::Drawing::Point(720, 349);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker2->TabIndex = 48;
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->label35->Location = System::Drawing::Point(627, 137);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(87, 24);
			this->label35->TabIndex = 46;
			this->label35->Text = L"Prénom :";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->label36->Location = System::Drawing::Point(60, 345);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(259, 24);
			this->label36->TabIndex = 47;
			this->label36->Text = L"Cofirmation de Mot de passe :";
			// 
			// g_personnel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1518, 941);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel_sup);
			this->Controls->Add(this->panel_aff);
			this->Controls->Add(this->panel_cree);
			this->Controls->Add(this->panel_modif);
			this->Name = L"g_personnel";
			this->Text = L"g_personnel";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel_modif->ResumeLayout(false);
			this->panel_modif->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel_aff->ResumeLayout(false);
			this->panel_aff->PerformLayout();
			this->panel_sup->ResumeLayout(false);
			this->panel_sup->PerformLayout();
			this->panel_cree->ResumeLayout(false);
			this->panel_cree->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	//GB1 = gcnew Controleur;
	//GB2 = gcnew Controleur;
}

private: System::Void btn_cree_pers_Click(System::Object^ sender, System::EventArgs^ e) {
	
	//GB2->masquer_panel(panel4);
	//GB1->afficher_panel(panel3);
	panel_cree->Visible = true;
	panel_modif->Visible = false;
	panel_aff->Visible = false;
	panel_sup -> Visible = false;
}
private: System::Void btn_modif_pers_Click(System::Object^ sender, System::EventArgs^ e) {

	//GB2->masquer_panel(panel3);
	//GB1->afficher_panel(panel4);
	panel_cree->Visible = false;
	panel_modif->Visible = true;
	panel_aff->Visible = false;
	panel_sup->Visible = false;
}

private: System::Void btn_aff_pers_Click(System::Object^ sender, System::EventArgs^ e) {
	panel_aff->Visible = true;
	panel_cree->Visible = false;
	panel_modif->Visible = false;
	panel_sup->Visible = false;
}


private: System::Void btn_sup_pers_Click(System::Object^ sender, System::EventArgs^ e) {
	panel_aff->Visible = false;
	panel_cree->Visible = false;
	panel_modif->Visible = false;
	panel_sup->Visible = true;
}
};
}

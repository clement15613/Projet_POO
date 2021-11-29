#pragma once
#include "controleur.h"

namespace CodeProjet {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	

	/// <summary>
	/// Description résumée de statistique
	/// </summary>
	public ref class statistique : public System::Windows::Forms::Form
	{
	public:
		statistique(void)
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
		~statistique()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnGestionClients;
	private: System::Windows::Forms::Button^ btnGEstionCommande;
	protected:

	protected:

	private: System::Windows::Forms::Button^ btnGestionPersonnel;
	private: System::Windows::Forms::Button^ btnGestionstock;
	private: System::Windows::Forms::Button^ btnMonProfil;





	private: System::Windows::Forms::Button^ btnGestionStatistique;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart_topPlusVendu;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart_topMoinsVendu;
	private: System::Windows::Forms::Label^ label_panierMoyen;

	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label_chiffre_daffaire;



	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label_prix_panier_moyen;
	private: System::Windows::Forms::Label^ label_prix_chiffre_affaire;


	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label_articleSeuil;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ label_prix_stock;
	private: System::Windows::Forms::Label^ label_valeur_stock_actuel;



	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Label^ label_valeur_achat_stock;
	private: System::Windows::Forms::Label^ label_ValeurAchat;


	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::ComboBox^ comboBoxTVA;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Label^ label_demarqueInconnu;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label_remiseCommerciale;
	private: System::Windows::Forms::ComboBox^ comboBox_margeCommerciale;
	private: System::Windows::Forms::Label^ label_margeCommerciale;
	private: System::Windows::Forms::Label^ label_TVA;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label_valeur_stock_precedent;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart_chiffreAffaire;

	private: System::Windows::Forms::Panel^ panel9;



		   Controleur^ moncontroleur1;













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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea10 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend10 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series10 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea11 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend11 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series11 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea12 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend12 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series12 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::DataPoint^ dataPoint7 = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint(1,
				10000));
			System::Windows::Forms::DataVisualization::Charting::DataPoint^ dataPoint8 = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint(9000,
				2019));
			System::Windows::Forms::DataVisualization::Charting::Title^ title4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			this->btnGestionClients = (gcnew System::Windows::Forms::Button());
			this->btnGEstionCommande = (gcnew System::Windows::Forms::Button());
			this->btnGestionPersonnel = (gcnew System::Windows::Forms::Button());
			this->btnGestionstock = (gcnew System::Windows::Forms::Button());
			this->btnMonProfil = (gcnew System::Windows::Forms::Button());
			this->btnGestionStatistique = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->chart_topPlusVendu = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart_topMoinsVendu = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->label_panierMoyen = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label_prix_panier_moyen = (gcnew System::Windows::Forms::Label());
			this->label_chiffre_daffaire = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label_prix_chiffre_affaire = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label_articleSeuil = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label_prix_stock = (gcnew System::Windows::Forms::Label());
			this->label_valeur_stock_actuel = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label_valeur_achat_stock = (gcnew System::Windows::Forms::Label());
			this->label_ValeurAchat = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label_valeur_stock_precedent = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label_demarqueInconnu = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label_remiseCommerciale = (gcnew System::Windows::Forms::Label());
			this->comboBox_margeCommerciale = (gcnew System::Windows::Forms::ComboBox());
			this->label_margeCommerciale = (gcnew System::Windows::Forms::Label());
			this->label_TVA = (gcnew System::Windows::Forms::Label());
			this->comboBoxTVA = (gcnew System::Windows::Forms::ComboBox());
			this->chart_chiffreAffaire = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart_topPlusVendu))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart_topMoinsVendu))->BeginInit();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel4->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart_chiffreAffaire))->BeginInit();
			this->panel9->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnGestionClients
			// 
			this->btnGestionClients->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->btnGestionClients->AutoSize = true;
			this->btnGestionClients->CausesValidation = false;
			this->btnGestionClients->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnGestionClients->Location = System::Drawing::Point(588, 32);
			this->btnGestionClients->Name = L"btnGestionClients";
			this->btnGestionClients->Size = System::Drawing::Size(175, 49);
			this->btnGestionClients->TabIndex = 1;
			this->btnGestionClients->Text = L"Gestion Clients";
			this->btnGestionClients->UseVisualStyleBackColor = true;
			this->btnGestionClients->Click += gcnew System::EventHandler(this, &statistique::btnGestionClients_Click);
			// 
			// btnGEstionCommande
			// 
			this->btnGEstionCommande->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->btnGEstionCommande->AutoSize = true;
			this->btnGEstionCommande->CausesValidation = false;
			this->btnGEstionCommande->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnGEstionCommande->Location = System::Drawing::Point(761, 32);
			this->btnGEstionCommande->Name = L"btnGEstionCommande";
			this->btnGEstionCommande->Size = System::Drawing::Size(175, 49);
			this->btnGEstionCommande->TabIndex = 2;
			this->btnGEstionCommande->Text = L"Gestion Commande";
			this->btnGEstionCommande->UseVisualStyleBackColor = true;
			this->btnGEstionCommande->Click += gcnew System::EventHandler(this, &statistique::btnGEstionCommande_Click);
			// 
			// btnGestionPersonnel
			// 
			this->btnGestionPersonnel->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->btnGestionPersonnel->AutoSize = true;
			this->btnGestionPersonnel->CausesValidation = false;
			this->btnGestionPersonnel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnGestionPersonnel->Location = System::Drawing::Point(415, 32);
			this->btnGestionPersonnel->Name = L"btnGestionPersonnel";
			this->btnGestionPersonnel->Size = System::Drawing::Size(175, 49);
			this->btnGestionPersonnel->TabIndex = 4;
			this->btnGestionPersonnel->Text = L"Gestion Personnel";
			this->btnGestionPersonnel->UseVisualStyleBackColor = true;
			this->btnGestionPersonnel->Click += gcnew System::EventHandler(this, &statistique::btnGestionPersonnel_Click);
			// 
			// btnGestionstock
			// 
			this->btnGestionstock->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->btnGestionstock->AutoSize = true;
			this->btnGestionstock->CausesValidation = false;
			this->btnGestionstock->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnGestionstock->Location = System::Drawing::Point(934, 32);
			this->btnGestionstock->Name = L"btnGestionstock";
			this->btnGestionstock->Size = System::Drawing::Size(175, 49);
			this->btnGestionstock->TabIndex = 7;
			this->btnGestionstock->Text = L"Gestion stock";
			this->btnGestionstock->UseVisualStyleBackColor = true;
			this->btnGestionstock->Click += gcnew System::EventHandler(this, &statistique::btnGestionstock_Click);
			// 
			// btnMonProfil
			// 
			this->btnMonProfil->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->btnMonProfil->AutoSize = true;
			this->btnMonProfil->CausesValidation = false;
			this->btnMonProfil->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnMonProfil->Location = System::Drawing::Point(1280, 32);
			this->btnMonProfil->Name = L"btnMonProfil";
			this->btnMonProfil->Size = System::Drawing::Size(175, 49);
			this->btnMonProfil->TabIndex = 6;
			this->btnMonProfil->Text = L"Profil";
			this->btnMonProfil->UseVisualStyleBackColor = true;
			this->btnMonProfil->Click += gcnew System::EventHandler(this, &statistique::btnMonProfil_Click);
			// 
			// btnGestionStatistique
			// 
			this->btnGestionStatistique->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->btnGestionStatistique->AutoSize = true;
			this->btnGestionStatistique->CausesValidation = false;
			this->btnGestionStatistique->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnGestionStatistique->Location = System::Drawing::Point(1107, 32);
			this->btnGestionStatistique->Name = L"btnGestionStatistique";
			this->btnGestionStatistique->Size = System::Drawing::Size(175, 49);
			this->btnGestionStatistique->TabIndex = 5;
			this->btnGestionStatistique->Text = L"Gestion Statistique";
			this->btnGestionStatistique->UseVisualStyleBackColor = true;
			this->btnGestionStatistique->Click += gcnew System::EventHandler(this, &statistique::btnGestionStatistique_Click);
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel1->AutoSize = true;
			this->panel1->Controls->Add(this->btnGestionPersonnel);
			this->panel1->Controls->Add(this->btnGestionstock);
			this->panel1->Controls->Add(this->btnGestionClients);
			this->panel1->Controls->Add(this->btnMonProfil);
			this->panel1->Controls->Add(this->btnGEstionCommande);
			this->panel1->Controls->Add(this->btnGestionStatistique);
			this->panel1->Location = System::Drawing::Point(12, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1880, 114);
			this->panel1->TabIndex = 8;
			// 
			// chart_topPlusVendu
			// 
			chartArea10->Name = L"ChartArea1";
			this->chart_topPlusVendu->ChartAreas->Add(chartArea10);
			legend10->Name = L"Legend1";
			this->chart_topPlusVendu->Legends->Add(legend10);
			this->chart_topPlusVendu->Location = System::Drawing::Point(1315, 153);
			this->chart_topPlusVendu->Name = L"chart_topPlusVendu";
			series10->ChartArea = L"ChartArea1";
			series10->Legend = L"Legend1";
			series10->Name = L"2020";
			this->chart_topPlusVendu->Series->Add(series10);
			this->chart_topPlusVendu->Size = System::Drawing::Size(558, 345);
			this->chart_topPlusVendu->TabIndex = 9;
			this->chart_topPlusVendu->Text = L"chart_topPlusVendu";

			// 
			// chart_topMoinsVendu
			// 
			chartArea11->Name = L"ChartArea1";
			this->chart_topMoinsVendu->ChartAreas->Add(chartArea11);
			legend11->Name = L"Legend1";
			this->chart_topMoinsVendu->Legends->Add(legend11);
			this->chart_topMoinsVendu->Location = System::Drawing::Point(1315, 530);
			this->chart_topMoinsVendu->Name = L"chart_topMoinsVendu";
			series11->ChartArea = L"ChartArea1";
			series11->Legend = L"Legend1";
			series11->Name = L"Series1";
			this->chart_topMoinsVendu->Series->Add(series11);
			this->chart_topMoinsVendu->Size = System::Drawing::Size(558, 345);
			this->chart_topMoinsVendu->TabIndex = 10;
			this->chart_topMoinsVendu->Text = L"chart_topMoinsVendu";
			// 
			// label_panierMoyen
			// 
			this->label_panierMoyen->AutoSize = true;
			this->label_panierMoyen->Font = (gcnew System::Drawing::Font(L"Century", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_panierMoyen->Location = System::Drawing::Point(3, 15);
			this->label_panierMoyen->Name = L"label_panierMoyen";
			this->label_panierMoyen->Size = System::Drawing::Size(334, 20);
			this->label_panierMoyen->TabIndex = 11;
			this->label_panierMoyen->Text = L"Montant du panier moyen après remise";
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->label_prix_panier_moyen);
			this->panel2->Controls->Add(this->label_panierMoyen);
			this->panel2->Font = (gcnew System::Drawing::Font(L"Century", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel2->Location = System::Drawing::Point(12, 153);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(341, 103);
			this->panel2->TabIndex = 13;
			// 
			// label_prix_panier_moyen
			// 
			this->label_prix_panier_moyen->AutoSize = true;
			this->label_prix_panier_moyen->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_prix_panier_moyen->Location = System::Drawing::Point(123, 54);
			this->label_prix_panier_moyen->Name = L"label_prix_panier_moyen";
			this->label_prix_panier_moyen->Size = System::Drawing::Size(90, 25);
			this->label_prix_panier_moyen->TabIndex = 12;
			this->label_prix_panier_moyen->Text = L"99999 €";
			// 
			// label_chiffre_daffaire
			// 
			this->label_chiffre_daffaire->AutoSize = true;
			this->label_chiffre_daffaire->Font = (gcnew System::Drawing::Font(L"Century", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_chiffre_daffaire->Location = System::Drawing::Point(162, 19);
			this->label_chiffre_daffaire->Name = L"label_chiffre_daffaire";
			this->label_chiffre_daffaire->Size = System::Drawing::Size(281, 23);
			this->label_chiffre_daffaire->TabIndex = 13;
			this->label_chiffre_daffaire->Text = L"Chiffre d\'affaire sur le mois";
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->label_prix_chiffre_affaire);
			this->panel3->Controls->Add(this->label_chiffre_daffaire);
			this->panel3->Location = System::Drawing::Point(12, 262);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(582, 160);
			this->panel3->TabIndex = 14;
			// 
			// label_prix_chiffre_affaire
			// 
			this->label_prix_chiffre_affaire->AutoSize = true;
			this->label_prix_chiffre_affaire->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_prix_chiffre_affaire->Location = System::Drawing::Point(233, 71);
			this->label_prix_chiffre_affaire->Name = L"label_prix_chiffre_affaire";
			this->label_prix_chiffre_affaire->Size = System::Drawing::Size(134, 37);
			this->label_prix_chiffre_affaire->TabIndex = 13;
			this->label_prix_chiffre_affaire->Text = L"99999 €";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ButtonFace;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(8, 62);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->dataGridView1->Size = System::Drawing::Size(386, 449);
			this->dataGridView1->TabIndex = 15;
			// 
			// label_articleSeuil
			// 
			this->label_articleSeuil->Font = (gcnew System::Drawing::Font(L"Century", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_articleSeuil->Location = System::Drawing::Point(3, 10);
			this->label_articleSeuil->Name = L"label_articleSeuil";
			this->label_articleSeuil->Size = System::Drawing::Size(391, 49);
			this->label_articleSeuil->TabIndex = 16;
			this->label_articleSeuil->Text = L"Liste des articles sous le seuil \r\nde réapprovisionnement\r\n";
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->label_prix_stock);
			this->panel4->Controls->Add(this->label_valeur_stock_actuel);
			this->panel4->Location = System::Drawing::Point(17, 181);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(233, 85);
			this->panel4->TabIndex = 15;
			// 
			// label_prix_stock
			// 
			this->label_prix_stock->AutoSize = true;
			this->label_prix_stock->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_prix_stock->Location = System::Drawing::Point(101, 52);
			this->label_prix_stock->Name = L"label_prix_stock";
			this->label_prix_stock->Size = System::Drawing::Size(90, 25);
			this->label_prix_stock->TabIndex = 13;
			this->label_prix_stock->Text = L"99999 €";
			// 
			// label_valeur_stock_actuel
			// 
			this->label_valeur_stock_actuel->AutoSize = true;
			this->label_valeur_stock_actuel->Font = (gcnew System::Drawing::Font(L"Century", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_valeur_stock_actuel->Location = System::Drawing::Point(5, 12);
			this->label_valeur_stock_actuel->Name = L"label_valeur_stock_actuel";
			this->label_valeur_stock_actuel->Size = System::Drawing::Size(224, 40);
			this->label_valeur_stock_actuel->TabIndex = 13;
			this->label_valeur_stock_actuel->Text = L"Valeur commerciale du stock \r\nactuel";
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->label_valeur_achat_stock);
			this->panel5->Controls->Add(this->label_ValeurAchat);
			this->panel5->Location = System::Drawing::Point(359, 153);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(235, 103);
			this->panel5->TabIndex = 16;
			// 
			// label_valeur_achat_stock
			// 
			this->label_valeur_achat_stock->AutoSize = true;
			this->label_valeur_achat_stock->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_valeur_achat_stock->Location = System::Drawing::Point(74, 55);
			this->label_valeur_achat_stock->Name = L"label_valeur_achat_stock";
			this->label_valeur_achat_stock->Size = System::Drawing::Size(90, 25);
			this->label_valeur_achat_stock->TabIndex = 13;
			this->label_valeur_achat_stock->Text = L"99999 €";
			// 
			// label_ValeurAchat
			// 
			this->label_ValeurAchat->AutoSize = true;
			this->label_ValeurAchat->Font = (gcnew System::Drawing::Font(L"Century", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_ValeurAchat->Location = System::Drawing::Point(24, 15);
			this->label_ValeurAchat->Name = L"label_ValeurAchat";
			this->label_ValeurAchat->Size = System::Drawing::Size(204, 20);
			this->label_ValeurAchat->TabIndex = 13;
			this->label_ValeurAchat->Text = L"Valeur d\'achat du stock\r\n";
			// 
			// panel6
			// 
			this->panel6->Controls->Add(this->label_articleSeuil);
			this->panel6->Controls->Add(this->dataGridView1);
			this->panel6->Location = System::Drawing::Point(12, 428);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(397, 591);
			this->panel6->TabIndex = 17;
			// 
			// panel7
			// 
			this->panel7->Controls->Add(this->panel8);
			this->panel7->Controls->Add(this->comboBox2);
			this->panel7->Controls->Add(this->label_demarqueInconnu);
			this->panel7->Controls->Add(this->comboBox1);
			this->panel7->Controls->Add(this->panel4);
			this->panel7->Controls->Add(this->label_remiseCommerciale);
			this->panel7->Controls->Add(this->comboBox_margeCommerciale);
			this->panel7->Controls->Add(this->label_margeCommerciale);
			this->panel7->Controls->Add(this->label_TVA);
			this->panel7->Controls->Add(this->comboBoxTVA);
			this->panel7->Location = System::Drawing::Point(641, 153);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(668, 269);
			this->panel7->TabIndex = 18;
			// 
			// panel8
			// 
			this->panel8->Controls->Add(this->label1);
			this->panel8->Controls->Add(this->label_valeur_stock_precedent);
			this->panel8->Location = System::Drawing::Point(351, 181);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(245, 85);
			this->panel8->TabIndex = 16;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(120, 52);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(90, 25);
			this->label1->TabIndex = 13;
			this->label1->Text = L"99999 €";
			// 
			// label_valeur_stock_precedent
			// 
			this->label_valeur_stock_precedent->AutoSize = true;
			this->label_valeur_stock_precedent->Font = (gcnew System::Drawing::Font(L"Century", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_valeur_stock_precedent->Location = System::Drawing::Point(21, 12);
			this->label_valeur_stock_precedent->Name = L"label_valeur_stock_precedent";
			this->label_valeur_stock_precedent->Size = System::Drawing::Size(220, 40);
			this->label_valeur_stock_precedent->TabIndex = 13;
			this->label_valeur_stock_precedent->Text = L"Valeur commerciale du stock\r\n actuel";
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Aucun", L"2%", L"3%", L"5%" });
			this->comboBox2->Location = System::Drawing::Point(393, 142);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(162, 21);
			this->comboBox2->TabIndex = 7;
			this->comboBox2->Text = L"Aucun";
			// 
			// label_demarqueInconnu
			// 
			this->label_demarqueInconnu->AutoSize = true;
			this->label_demarqueInconnu->Font = (gcnew System::Drawing::Font(L"Century", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_demarqueInconnu->Location = System::Drawing::Point(369, 97);
			this->label_demarqueInconnu->Name = L"label_demarqueInconnu";
			this->label_demarqueInconnu->Size = System::Drawing::Size(284, 20);
			this->label_demarqueInconnu->TabIndex = 6;
			this->label_demarqueInconnu->Text = L"Montant de la démarque inconnu";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Aucun", L"5%", L"6%" });
			this->comboBox1->Location = System::Drawing::Point(393, 54);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(162, 21);
			this->comboBox1->TabIndex = 5;
			this->comboBox1->Text = L"Aucun";
			// 
			// label_remiseCommerciale
			// 
			this->label_remiseCommerciale->AutoSize = true;
			this->label_remiseCommerciale->Font = (gcnew System::Drawing::Font(L"Century", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_remiseCommerciale->Location = System::Drawing::Point(365, 16);
			this->label_remiseCommerciale->Name = L"label_remiseCommerciale";
			this->label_remiseCommerciale->Size = System::Drawing::Size(293, 20);
			this->label_remiseCommerciale->TabIndex = 4;
			this->label_remiseCommerciale->Text = L"Montant de la remise commerciale";
			// 
			// comboBox_margeCommerciale
			// 
			this->comboBox_margeCommerciale->FormattingEnabled = true;
			this->comboBox_margeCommerciale->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Aucun", L"5%", L"10%", L"15%" });
			this->comboBox_margeCommerciale->Location = System::Drawing::Point(46, 142);
			this->comboBox_margeCommerciale->Name = L"comboBox_margeCommerciale";
			this->comboBox_margeCommerciale->Size = System::Drawing::Size(162, 21);
			this->comboBox_margeCommerciale->TabIndex = 3;
			this->comboBox_margeCommerciale->Text = L"Aucun";
			// 
			// label_margeCommerciale
			// 
			this->label_margeCommerciale->AutoSize = true;
			this->label_margeCommerciale->Font = (gcnew System::Drawing::Font(L"Century", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_margeCommerciale->Location = System::Drawing::Point(22, 97);
			this->label_margeCommerciale->Name = L"label_margeCommerciale";
			this->label_margeCommerciale->Size = System::Drawing::Size(290, 20);
			this->label_margeCommerciale->TabIndex = 2;
			this->label_margeCommerciale->Text = L"Montant de la marge commerciale";
			// 
			// label_TVA
			// 
			this->label_TVA->AutoSize = true;
			this->label_TVA->Font = (gcnew System::Drawing::Font(L"Century", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_TVA->Location = System::Drawing::Point(22, 16);
			this->label_TVA->Name = L"label_TVA";
			this->label_TVA->Size = System::Drawing::Size(168, 20);
			this->label_TVA->TabIndex = 1;
			this->label_TVA->Text = L"Montant de la TVA";
			// 
			// comboBoxTVA
			// 
			this->comboBoxTVA->FormattingEnabled = true;
			this->comboBoxTVA->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Aucun", L"10%", L"20%", L"30%" });
			this->comboBoxTVA->Location = System::Drawing::Point(46, 55);
			this->comboBoxTVA->Name = L"comboBoxTVA";
			this->comboBoxTVA->Size = System::Drawing::Size(162, 21);
			this->comboBoxTVA->TabIndex = 0;
			this->comboBoxTVA->Text = L"Aucun";
			// 
			// chart_chiffreAffaire
			// 
			chartArea12->Name = L"ChartArea1";
			this->chart_chiffreAffaire->ChartAreas->Add(chartArea12);
			legend12->Name = L"Legend1";
			this->chart_chiffreAffaire->Legends->Add(legend12);
			this->chart_chiffreAffaire->Location = System::Drawing::Point(12, 25);
			this->chart_chiffreAffaire->Name = L"chart_chiffreAffaire";
			series12->ChartArea = L"ChartArea1";
			series12->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series12->CustomProperties = L"IsXAxisQuantitative=True, EmptyPointValue=Zero";
			series12->EmptyPointStyle->AxisLabel = L"mois";
			series12->IsXValueIndexed = true;
			series12->Legend = L"Legend1";
			series12->LegendText = L"2010";
			series12->Name = L"Series1";
			dataPoint7->AxisLabel = L"";
			series12->Points->Add(dataPoint7);
			series12->Points->Add(dataPoint8);
			series12->XValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::String;
			this->chart_chiffreAffaire->Series->Add(series12);
			this->chart_chiffreAffaire->Size = System::Drawing::Size(842, 464);
			this->chart_chiffreAffaire->TabIndex = 19;
			this->chart_chiffreAffaire->Tag = L"Graphique du chiifre d\'affaire";
			this->chart_chiffreAffaire->Text = L"Graphique du chiifre d\'affaire";
			title4->Name = L"Chiffre d\'affaire";
			title4->Text = L"Graphique de l\'evolution du chiffre d\'affaire";
			this->chart_chiffreAffaire->Titles->Add(title4);
			// 
			// panel9
			// 
			this->panel9->Controls->Add(this->chart_chiffreAffaire);
			this->panel9->Location = System::Drawing::Point(415, 428);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(857, 492);
			this->panel9->TabIndex = 20;
			// 
			// statistique
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(1904, 1041);
			this->Controls->Add(this->panel9);
			this->Controls->Add(this->panel7);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->chart_topMoinsVendu);
			this->Controls->Add(this->chart_topPlusVendu);
			this->Controls->Add(this->panel1);
			this->Name = L"statistique";
			this->Text = L"statistique";
			this->Load += gcnew System::EventHandler(this, &statistique::statistique_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart_topPlusVendu))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart_topMoinsVendu))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart_chiffreAffaire))->EndInit();
			this->panel9->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void statistique_Load(System::Object^ sender, System::EventArgs^ e) 
{
	moncontroleur1 = gcnew Controleur;
	moncontroleur1->afficher_datagridView(dataGridView1);
}

private: System::Void btnGestionStatistique_Click(System::Object^ sender, System::EventArgs^ e) 
{
	
}
private: System::Void btnGestionPersonnel_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnGestionClients_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnGEstionCommande_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnGestionstock_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnMonProfil_Click(System::Object^ sender, System::EventArgs^ e) {
}




};
}

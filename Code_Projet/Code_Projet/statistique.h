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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Title^ title1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			this->btnGestionClients = (gcnew System::Windows::Forms::Button());
			this->btnGEstionCommande = (gcnew System::Windows::Forms::Button());
			this->btnGestionPersonnel = (gcnew System::Windows::Forms::Button());
			this->btnGestionstock = (gcnew System::Windows::Forms::Button());
			this->btnMonProfil = (gcnew System::Windows::Forms::Button());
			this->btnGestionStatistique = (gcnew System::Windows::Forms::Button());
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
			this->btnGestionClients->Location = System::Drawing::Point(0, 0);
			this->btnGestionClients->Name = L"btnGestionClients";
			this->btnGestionClients->Size = System::Drawing::Size(75, 23);
			this->btnGestionClients->TabIndex = 0;
			// 
			// btnGEstionCommande
			// 
			this->btnGEstionCommande->Location = System::Drawing::Point(0, 0);
			this->btnGEstionCommande->Name = L"btnGEstionCommande";
			this->btnGEstionCommande->Size = System::Drawing::Size(75, 23);
			this->btnGEstionCommande->TabIndex = 0;
			// 
			// btnGestionPersonnel
			// 
			this->btnGestionPersonnel->Location = System::Drawing::Point(0, 0);
			this->btnGestionPersonnel->Name = L"btnGestionPersonnel";
			this->btnGestionPersonnel->Size = System::Drawing::Size(75, 23);
			this->btnGestionPersonnel->TabIndex = 0;
			// 
			// btnGestionstock
			// 
			this->btnGestionstock->Location = System::Drawing::Point(0, 0);
			this->btnGestionstock->Name = L"btnGestionstock";
			this->btnGestionstock->Size = System::Drawing::Size(75, 23);
			this->btnGestionstock->TabIndex = 0;
			// 
			// btnMonProfil
			// 
			this->btnMonProfil->Location = System::Drawing::Point(0, 0);
			this->btnMonProfil->Name = L"btnMonProfil";
			this->btnMonProfil->Size = System::Drawing::Size(75, 23);
			this->btnMonProfil->TabIndex = 0;
			// 
			// btnGestionStatistique
			// 
			this->btnGestionStatistique->Location = System::Drawing::Point(0, 0);
			this->btnGestionStatistique->Name = L"btnGestionStatistique";
			this->btnGestionStatistique->Size = System::Drawing::Size(75, 23);
			this->btnGestionStatistique->TabIndex = 0;
			// 
			// chart_topPlusVendu
			// 
			chartArea1->AxisX->MajorGrid->Enabled = false;
			chartArea1->Name = L"ChartAreaTOP";
			this->chart_topPlusVendu->ChartAreas->Add(chartArea1);
			legend1->Enabled = false;
			legend1->Name = L"Legend1";
			this->chart_topPlusVendu->Legends->Add(legend1);
			this->chart_topPlusVendu->Location = System::Drawing::Point(1315, 153);
			this->chart_topPlusVendu->Name = L"chart_topPlusVendu";
			series1->ChartArea = L"ChartAreaTOP";
			series1->IsVisibleInLegend = false;
			series1->Legend = L"Legend1";
			series1->Name = L"series1";
			series1->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::BrightPastel;
			series1->YValuesPerPoint = 4;
			this->chart_topPlusVendu->Series->Add(series1);
			this->chart_topPlusVendu->Size = System::Drawing::Size(558, 345);
			this->chart_topPlusVendu->TabIndex = 10;
			this->chart_topPlusVendu->Text = L"chart_topPlusVendu";
			// 
			// chart_topMoinsVendu
			// 
			chartArea2->Name = L"ChartArea1";
			this->chart_topMoinsVendu->ChartAreas->Add(chartArea2);
			legend2->Enabled = false;
			legend2->Name = L"Legend1";
			this->chart_topMoinsVendu->Legends->Add(legend2);
			this->chart_topMoinsVendu->Location = System::Drawing::Point(1315, 530);
			this->chart_topMoinsVendu->Name = L"chart_topMoinsVendu";
			series2->ChartArea = L"ChartArea1";
			series2->Legend = L"Legend1";
			series2->Name = L"series1";
			this->chart_topMoinsVendu->Series->Add(series2);
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
			this->label_prix_chiffre_affaire->Font = (gcnew System::Drawing::Font(L"Century", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_prix_chiffre_affaire->Location = System::Drawing::Point(233, 71);
			this->label_prix_chiffre_affaire->Name = L"label_prix_chiffre_affaire";
			this->label_prix_chiffre_affaire->Size = System::Drawing::Size(134, 38);
			this->label_prix_chiffre_affaire->TabIndex = 13;
			this->label_prix_chiffre_affaire->Text = L"99999 €";
			this->label_prix_chiffre_affaire->TextAlign = System::Drawing::ContentAlignment::TopCenter;
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
			this->panel4->Location = System::Drawing::Point(373, 172);
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
			this->label_valeur_stock_actuel->Location = System::Drawing::Point(3, 12);
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
			this->panel8->Location = System::Drawing::Point(14, 172);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(257, 85);
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
			this->label_valeur_stock_precedent->Location = System::Drawing::Point(8, 12);
			this->label_valeur_stock_precedent->Name = L"label_valeur_stock_precedent";
			this->label_valeur_stock_precedent->Size = System::Drawing::Size(220, 40);
			this->label_valeur_stock_precedent->TabIndex = 13;
			this->label_valeur_stock_precedent->Text = L"Valeur commerciale du stock\r\n précédent";
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
			chartArea3->Name = L"ChartArea1";
			this->chart_chiffreAffaire->ChartAreas->Add(chartArea3);
			legend3->Name = L"Legend1";
			this->chart_chiffreAffaire->Legends->Add(legend3);
			this->chart_chiffreAffaire->Location = System::Drawing::Point(12, 25);
			this->chart_chiffreAffaire->Name = L"chart_chiffreAffaire";
			this->chart_chiffreAffaire->Size = System::Drawing::Size(842, 464);
			this->chart_chiffreAffaire->TabIndex = 100;
			this->chart_chiffreAffaire->Tag = L"Graphique du chiifre d\'affaire";
			this->chart_chiffreAffaire->Text = L"Graphique du chiifre d\'affaire";
			title1->Name = L"Chiffre d\'affaire";
			title1->Text = L"Graphique de l\'evolution du chiffre d\'affaire";
			this->chart_chiffreAffaire->Titles->Add(title1);
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
			this->Name = L"statistique";
			this->Text = L"statistique";
			this->Load += gcnew System::EventHandler(this, &statistique::statistique_Load);
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

		}
#pragma endregion

private: System::Void statistique_Load(System::Object^ sender, System::EventArgs^ e) 
{

	moncontroleur1 = gcnew Controleur;
	moncontroleur1->afficher_datagridView(dataGridView1);
	moncontroleur1->afficher_top(chart_topPlusVendu, "select TOP 10 nom_article,quantite from Composer inner join Article on Composer.id_article = Article.id_article order by quantite desc");
	moncontroleur1->afficher_top(chart_topMoinsVendu, "select TOP 10 nom_article,quantite from Composer inner join Article on Composer.id_article = Article.id_article order by quantite ASC");
	moncontroleur1->afficher_chiffre_affaireMois(chart_chiffreAffaire,"2019");
	moncontroleur1->afficher_chiffre_affaireMois(chart_chiffreAffaire, "2020");
	moncontroleur1->afficher_label_sql(label_prix_chiffre_affaire, "select SUM(quantite * prix_HT) as total from Payment inner join Composer on Payment.id_commande = Composer.id_commande inner join Article on Composer.id_article=Article.id_article where month(date_payment) = 3 group by month(date_payment)");

}
};
}

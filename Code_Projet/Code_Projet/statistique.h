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
	private: System::Windows::Forms::Label^ label_prix_stock_actuel;

	private: System::Windows::Forms::Label^ label_valeur_stock_actuel;



	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Label^ label_valeur_achat_stock;
	private: System::Windows::Forms::Label^ label_ValeurAchat;


	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::ComboBox^ comboBoxTVA;
	private: System::Windows::Forms::ComboBox^ comboBoxDemarque;

	private: System::Windows::Forms::Label^ label_demarqueInconnu;
	private: System::Windows::Forms::ComboBox^ comboBoxRemise;

	private: System::Windows::Forms::Label^ label_remiseCommerciale;
	private: System::Windows::Forms::ComboBox^ comboBox_margeCommerciale;
	private: System::Windows::Forms::Label^ label_margeCommerciale;
	private: System::Windows::Forms::Label^ label_TVA;



	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart_chiffreAffaire;

	private: System::Windows::Forms::Panel^ panel9;



		   Controleur^ moncontroleur1;
	private: System::Windows::Forms::CheckBox^ checkBoxRemise;

	private: System::Windows::Forms::CheckBox^ checkBoxDemarque;

	private: System::Windows::Forms::CheckBox^ checkBoxMarge;

	private: System::Windows::Forms::CheckBox^ checkBoxTVA;
	private: System::Windows::Forms::TextBox^ textBoxTVA;

	private: System::Windows::Forms::ComboBox^ comboBoxMoisChiffreAffaire;


	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ personnelToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ afficherUnPersonnelToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ajouterUnPersonnelToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ modifierUnPersonnelToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ supprimerUnPersonnelToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ clientToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ afficherUnClientToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ajouterUnClientToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ modifierUnClientToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ supprimerUnClientToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ commandeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ afficherLesCommandesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ajouterUneCommandeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ modifierUneCommandeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ supprimeruneCommandeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ stockToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ afficherLeStockToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ajouterUnArticleToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ modifierUnArticleToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ supprimerUnArticleToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ statistiqueToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ monCompteToolStripMenuItem;
private: System::Windows::Forms::Button^ btnAfficher_Affaire;
private: System::Windows::Forms::MaskedTextBox^ maskedTextBoxAnnee;
private: System::Windows::Forms::TextBox^ textBoxRemise;
private: System::Windows::Forms::TextBox^ textBoxDemarque;
private: System::Windows::Forms::TextBox^ textBoxMarge;
private: System::Windows::Forms::Button^ buttonAfficherValeurStock;
















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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea7 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend7 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea8 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend8 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series6 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea9 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend9 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Title^ title3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
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
			this->maskedTextBoxAnnee = (gcnew System::Windows::Forms::MaskedTextBox());
			this->btnAfficher_Affaire = (gcnew System::Windows::Forms::Button());
			this->comboBoxMoisChiffreAffaire = (gcnew System::Windows::Forms::ComboBox());
			this->label_prix_chiffre_affaire = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label_articleSeuil = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label_prix_stock_actuel = (gcnew System::Windows::Forms::Label());
			this->label_valeur_stock_actuel = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label_valeur_achat_stock = (gcnew System::Windows::Forms::Label());
			this->label_ValeurAchat = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->textBoxDemarque = (gcnew System::Windows::Forms::TextBox());
			this->textBoxMarge = (gcnew System::Windows::Forms::TextBox());
			this->textBoxRemise = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTVA = (gcnew System::Windows::Forms::TextBox());
			this->checkBoxRemise = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxDemarque = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxMarge = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxTVA = (gcnew System::Windows::Forms::CheckBox());
			this->comboBoxDemarque = (gcnew System::Windows::Forms::ComboBox());
			this->label_demarqueInconnu = (gcnew System::Windows::Forms::Label());
			this->comboBoxRemise = (gcnew System::Windows::Forms::ComboBox());
			this->label_remiseCommerciale = (gcnew System::Windows::Forms::Label());
			this->comboBox_margeCommerciale = (gcnew System::Windows::Forms::ComboBox());
			this->label_margeCommerciale = (gcnew System::Windows::Forms::Label());
			this->label_TVA = (gcnew System::Windows::Forms::Label());
			this->comboBoxTVA = (gcnew System::Windows::Forms::ComboBox());
			this->chart_chiffreAffaire = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->personnelToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->afficherUnPersonnelToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ajouterUnPersonnelToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->modifierUnPersonnelToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->supprimerUnPersonnelToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clientToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->afficherUnClientToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ajouterUnClientToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->modifierUnClientToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->supprimerUnClientToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->commandeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->afficherLesCommandesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ajouterUneCommandeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->modifierUneCommandeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->supprimeruneCommandeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->stockToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->afficherLeStockToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ajouterUnArticleToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->modifierUnArticleToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->supprimerUnArticleToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->statistiqueToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->monCompteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->buttonAfficherValeurStock = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart_topPlusVendu))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart_topMoinsVendu))->BeginInit();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel4->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart_chiffreAffaire))->BeginInit();
			this->panel9->SuspendLayout();
			this->menuStrip1->SuspendLayout();
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
			chartArea7->AxisX->MajorGrid->Enabled = false;
			chartArea7->Name = L"ChartAreaTOP";
			this->chart_topPlusVendu->ChartAreas->Add(chartArea7);
			legend7->Enabled = false;
			legend7->Name = L"Legend1";
			this->chart_topPlusVendu->Legends->Add(legend7);
			this->chart_topPlusVendu->Location = System::Drawing::Point(1315, 153);
			this->chart_topPlusVendu->Name = L"chart_topPlusVendu";
			series5->ChartArea = L"ChartAreaTOP";
			series5->IsVisibleInLegend = false;
			series5->Legend = L"Legend1";
			series5->Name = L"series1";
			series5->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::BrightPastel;
			series5->YValuesPerPoint = 4;
			this->chart_topPlusVendu->Series->Add(series5);
			this->chart_topPlusVendu->Size = System::Drawing::Size(558, 345);
			this->chart_topPlusVendu->TabIndex = 10;
			this->chart_topPlusVendu->Text = L"chart_topPlusVendu";
			// 
			// chart_topMoinsVendu
			// 
			chartArea8->Name = L"ChartArea1";
			this->chart_topMoinsVendu->ChartAreas->Add(chartArea8);
			legend8->Enabled = false;
			legend8->Name = L"Legend1";
			this->chart_topMoinsVendu->Legends->Add(legend8);
			this->chart_topMoinsVendu->Location = System::Drawing::Point(1315, 530);
			this->chart_topMoinsVendu->Name = L"chart_topMoinsVendu";
			this->chart_topMoinsVendu->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Excel;
			series6->ChartArea = L"ChartArea1";
			series6->Legend = L"Legend1";
			series6->Name = L"series1";
			this->chart_topMoinsVendu->Series->Add(series6);
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
			this->label_chiffre_daffaire->Location = System::Drawing::Point(16, 15);
			this->label_chiffre_daffaire->Name = L"label_chiffre_daffaire";
			this->label_chiffre_daffaire->Size = System::Drawing::Size(281, 23);
			this->label_chiffre_daffaire->TabIndex = 13;
			this->label_chiffre_daffaire->Text = L"Chiffre d\'affaire sur le mois";
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->maskedTextBoxAnnee);
			this->panel3->Controls->Add(this->btnAfficher_Affaire);
			this->panel3->Controls->Add(this->comboBoxMoisChiffreAffaire);
			this->panel3->Controls->Add(this->label_prix_chiffre_affaire);
			this->panel3->Controls->Add(this->label_chiffre_daffaire);
			this->panel3->Location = System::Drawing::Point(12, 262);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(633, 160);
			this->panel3->TabIndex = 14;
			// 
			// maskedTextBoxAnnee
			// 
			this->maskedTextBoxAnnee->Location = System::Drawing::Point(375, 63);
			this->maskedTextBoxAnnee->Mask = L"0000";
			this->maskedTextBoxAnnee->Name = L"maskedTextBoxAnnee";
			this->maskedTextBoxAnnee->Size = System::Drawing::Size(162, 20);
			this->maskedTextBoxAnnee->TabIndex = 25;
			// 
			// btnAfficher_Affaire
			// 
			this->btnAfficher_Affaire->Location = System::Drawing::Point(379, 103);
			this->btnAfficher_Affaire->Name = L"btnAfficher_Affaire";
			this->btnAfficher_Affaire->Size = System::Drawing::Size(157, 36);
			this->btnAfficher_Affaire->TabIndex = 24;
			this->btnAfficher_Affaire->Text = L"Afficher";
			this->btnAfficher_Affaire->UseVisualStyleBackColor = true;
			this->btnAfficher_Affaire->Click += gcnew System::EventHandler(this, &statistique::btnAfficher_Affaire_Click);
			// 
			// comboBoxMoisChiffreAffaire
			// 
			this->comboBoxMoisChiffreAffaire->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxMoisChiffreAffaire->FormattingEnabled = true;
			this->comboBoxMoisChiffreAffaire->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"Janvier ", L"Février", L"Mars",
					L"Avril ", L"Mai", L"Juin ", L"Juillet", L"Août", L"Septembre ", L"Octobre", L"Novembre", L"Décembre"
			});
			this->comboBoxMoisChiffreAffaire->Location = System::Drawing::Point(375, 20);
			this->comboBoxMoisChiffreAffaire->Name = L"comboBoxMoisChiffreAffaire";
			this->comboBoxMoisChiffreAffaire->Size = System::Drawing::Size(162, 21);
			this->comboBoxMoisChiffreAffaire->TabIndex = 22;
			// 
			// label_prix_chiffre_affaire
			// 
			this->label_prix_chiffre_affaire->AutoSize = true;
			this->label_prix_chiffre_affaire->Font = (gcnew System::Drawing::Font(L"Century", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_prix_chiffre_affaire->Location = System::Drawing::Point(79, 75);
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
			this->dataGridView1->ReadOnly = true;
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
			this->panel4->Controls->Add(this->label_prix_stock_actuel);
			this->panel4->Controls->Add(this->label_valeur_stock_actuel);
			this->panel4->Location = System::Drawing::Point(373, 172);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(233, 85);
			this->panel4->TabIndex = 15;
			// 
			// label_prix_stock_actuel
			// 
			this->label_prix_stock_actuel->AutoSize = true;
			this->label_prix_stock_actuel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_prix_stock_actuel->Location = System::Drawing::Point(101, 52);
			this->label_prix_stock_actuel->Name = L"label_prix_stock_actuel";
			this->label_prix_stock_actuel->Size = System::Drawing::Size(90, 25);
			this->label_prix_stock_actuel->TabIndex = 13;
			this->label_prix_stock_actuel->Text = L"99999 €";
			// 
			// label_valeur_stock_actuel
			// 
			this->label_valeur_stock_actuel->AutoSize = true;
			this->label_valeur_stock_actuel->Font = (gcnew System::Drawing::Font(L"Century", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_valeur_stock_actuel->Location = System::Drawing::Point(3, 12);
			this->label_valeur_stock_actuel->Name = L"label_valeur_stock_actuel";
			this->label_valeur_stock_actuel->Size = System::Drawing::Size(224, 20);
			this->label_valeur_stock_actuel->TabIndex = 13;
			this->label_valeur_stock_actuel->Text = L"Valeur commerciale du stock ";
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->label_valeur_achat_stock);
			this->panel5->Controls->Add(this->label_ValeurAchat);
			this->panel5->Location = System::Drawing::Point(359, 153);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(286, 103);
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
			this->panel7->Controls->Add(this->buttonAfficherValeurStock);
			this->panel7->Controls->Add(this->textBoxDemarque);
			this->panel7->Controls->Add(this->textBoxMarge);
			this->panel7->Controls->Add(this->textBoxRemise);
			this->panel7->Controls->Add(this->textBoxTVA);
			this->panel7->Controls->Add(this->checkBoxRemise);
			this->panel7->Controls->Add(this->checkBoxDemarque);
			this->panel7->Controls->Add(this->checkBoxMarge);
			this->panel7->Controls->Add(this->checkBoxTVA);
			this->panel7->Controls->Add(this->comboBoxDemarque);
			this->panel7->Controls->Add(this->label_demarqueInconnu);
			this->panel7->Controls->Add(this->comboBoxRemise);
			this->panel7->Controls->Add(this->panel4);
			this->panel7->Controls->Add(this->label_remiseCommerciale);
			this->panel7->Controls->Add(this->comboBox_margeCommerciale);
			this->panel7->Controls->Add(this->label_margeCommerciale);
			this->panel7->Controls->Add(this->label_TVA);
			this->panel7->Controls->Add(this->comboBoxTVA);
			this->panel7->Location = System::Drawing::Point(651, 153);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(658, 269);
			this->panel7->TabIndex = 18;
			// 
			// textBoxDemarque
			// 
			this->textBoxDemarque->Enabled = false;
			this->textBoxDemarque->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxDemarque->ForeColor = System::Drawing::Color::Gray;
			this->textBoxDemarque->Location = System::Drawing::Point(393, 140);
			this->textBoxDemarque->Multiline = true;
			this->textBoxDemarque->Name = L"textBoxDemarque";
			this->textBoxDemarque->Size = System::Drawing::Size(162, 23);
			this->textBoxDemarque->TabIndex = 24;
			this->textBoxDemarque->Text = L"valeur..";
			this->textBoxDemarque->Visible = false;
			this->textBoxDemarque->TextChanged += gcnew System::EventHandler(this, &statistique::textBoxDemarque_TextChanged);
			// 
			// textBoxMarge
			// 
			this->textBoxMarge->Enabled = false;
			this->textBoxMarge->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxMarge->ForeColor = System::Drawing::Color::Gray;
			this->textBoxMarge->Location = System::Drawing::Point(46, 140);
			this->textBoxMarge->Multiline = true;
			this->textBoxMarge->Name = L"textBoxMarge";
			this->textBoxMarge->Size = System::Drawing::Size(162, 23);
			this->textBoxMarge->TabIndex = 23;
			this->textBoxMarge->Text = L"valeur..";
			this->textBoxMarge->Visible = false;
			// 
			// textBoxRemise
			// 
			this->textBoxRemise->Enabled = false;
			this->textBoxRemise->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxRemise->ForeColor = System::Drawing::Color::Gray;
			this->textBoxRemise->Location = System::Drawing::Point(393, 54);
			this->textBoxRemise->Multiline = true;
			this->textBoxRemise->Name = L"textBoxRemise";
			this->textBoxRemise->Size = System::Drawing::Size(162, 23);
			this->textBoxRemise->TabIndex = 22;
			this->textBoxRemise->Text = L"valeur..";
			this->textBoxRemise->Visible = false;
			this->textBoxRemise->TextChanged += gcnew System::EventHandler(this, &statistique::textBoxRemise_TextChanged);
			// 
			// textBoxTVA
			// 
			this->textBoxTVA->Enabled = false;
			this->textBoxTVA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxTVA->ForeColor = System::Drawing::Color::Gray;
			this->textBoxTVA->Location = System::Drawing::Point(46, 55);
			this->textBoxTVA->Multiline = true;
			this->textBoxTVA->Name = L"textBoxTVA";
			this->textBoxTVA->Size = System::Drawing::Size(162, 21);
			this->textBoxTVA->TabIndex = 21;
			this->textBoxTVA->Text = L"valeur..";
			this->textBoxTVA->Visible = false;
			// 
			// checkBoxRemise
			// 
			this->checkBoxRemise->Location = System::Drawing::Point(561, 53);
			this->checkBoxRemise->Name = L"checkBoxRemise";
			this->checkBoxRemise->Size = System::Drawing::Size(98, 25);
			this->checkBoxRemise->TabIndex = 20;
			this->checkBoxRemise->Text = L"Autre valeur";
			this->checkBoxRemise->UseVisualStyleBackColor = true;
			// 
			// checkBoxDemarque
			// 
			this->checkBoxDemarque->Location = System::Drawing::Point(561, 142);
			this->checkBoxDemarque->Name = L"checkBoxDemarque";
			this->checkBoxDemarque->Size = System::Drawing::Size(98, 25);
			this->checkBoxDemarque->TabIndex = 19;
			this->checkBoxDemarque->Text = L"Autre valeur";
			this->checkBoxDemarque->UseVisualStyleBackColor = true;
			// 
			// checkBoxMarge
			// 
			this->checkBoxMarge->Location = System::Drawing::Point(214, 141);
			this->checkBoxMarge->Name = L"checkBoxMarge";
			this->checkBoxMarge->Size = System::Drawing::Size(98, 25);
			this->checkBoxMarge->TabIndex = 18;
			this->checkBoxMarge->Text = L"Autre valeur";
			this->checkBoxMarge->UseVisualStyleBackColor = true;
			this->checkBoxMarge->CheckedChanged += gcnew System::EventHandler(this, &statistique::checkBoxMarge_CheckedChanged);
			// 
			// checkBoxTVA
			// 
			this->checkBoxTVA->Location = System::Drawing::Point(214, 54);
			this->checkBoxTVA->Name = L"checkBoxTVA";
			this->checkBoxTVA->Size = System::Drawing::Size(98, 25);
			this->checkBoxTVA->TabIndex = 17;
			this->checkBoxTVA->Text = L"Autre valeur";
			this->checkBoxTVA->UseVisualStyleBackColor = true;
			this->checkBoxTVA->CheckedChanged += gcnew System::EventHandler(this, &statistique::checkBoxTVA_CheckedChanged);
			// 
			// comboBoxDemarque
			// 
			this->comboBoxDemarque->FormattingEnabled = true;
			this->comboBoxDemarque->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Aucun", L"2%", L"3%", L"5%" });
			this->comboBoxDemarque->Location = System::Drawing::Point(393, 142);
			this->comboBoxDemarque->Name = L"comboBoxDemarque";
			this->comboBoxDemarque->Size = System::Drawing::Size(162, 21);
			this->comboBoxDemarque->TabIndex = 7;
			this->comboBoxDemarque->Text = L"Aucun";
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
			// comboBoxRemise
			// 
			this->comboBoxRemise->FormattingEnabled = true;
			this->comboBoxRemise->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Aucun", L"5%", L"6%" });
			this->comboBoxRemise->Location = System::Drawing::Point(393, 54);
			this->comboBoxRemise->Name = L"comboBoxRemise";
			this->comboBoxRemise->Size = System::Drawing::Size(162, 21);
			this->comboBoxRemise->TabIndex = 5;
			this->comboBoxRemise->Text = L"Aucun";
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
			chartArea9->Name = L"ChartArea1";
			this->chart_chiffreAffaire->ChartAreas->Add(chartArea9);
			legend9->Name = L"Legend1";
			this->chart_chiffreAffaire->Legends->Add(legend9);
			this->chart_chiffreAffaire->Location = System::Drawing::Point(12, 25);
			this->chart_chiffreAffaire->Name = L"chart_chiffreAffaire";
			this->chart_chiffreAffaire->Size = System::Drawing::Size(842, 464);
			this->chart_chiffreAffaire->TabIndex = 100;
			this->chart_chiffreAffaire->Tag = L"Graphique du chiifre d\'affaire";
			this->chart_chiffreAffaire->Text = L"Graphique du chiifre d\'affaire";
			title3->Name = L"Chiffre d\'affaire";
			title3->Text = L"Graphique de l\'evolution du chiffre d\'affaire";
			this->chart_chiffreAffaire->Titles->Add(title3);
			// 
			// panel9
			// 
			this->panel9->Controls->Add(this->chart_chiffreAffaire);
			this->panel9->Location = System::Drawing::Point(415, 428);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(857, 492);
			this->panel9->TabIndex = 20;
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->menuStrip1->Dock = System::Windows::Forms::DockStyle::None;
			this->menuStrip1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20, System::Drawing::FontStyle::Bold));
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->personnelToolStripMenuItem,
					this->clientToolStripMenuItem, this->commandeToolStripMenuItem, this->stockToolStripMenuItem, this->statistiqueToolStripMenuItem,
					this->monCompteToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(484, 27);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(909, 45);
			this->menuStrip1->TabIndex = 21;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// personnelToolStripMenuItem
			// 
			this->personnelToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->afficherUnPersonnelToolStripMenuItem,
					this->ajouterUnPersonnelToolStripMenuItem, this->modifierUnPersonnelToolStripMenuItem, this->supprimerUnPersonnelToolStripMenuItem
			});
			this->personnelToolStripMenuItem->Name = L"personnelToolStripMenuItem";
			this->personnelToolStripMenuItem->Size = System::Drawing::Size(155, 41);
			this->personnelToolStripMenuItem->Text = L"Personnel";
			// 
			// afficherUnPersonnelToolStripMenuItem
			// 
			this->afficherUnPersonnelToolStripMenuItem->BackColor = System::Drawing::Color::LightGray;
			this->afficherUnPersonnelToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->afficherUnPersonnelToolStripMenuItem->Name = L"afficherUnPersonnelToolStripMenuItem";
			this->afficherUnPersonnelToolStripMenuItem->Size = System::Drawing::Size(256, 26);
			this->afficherUnPersonnelToolStripMenuItem->Text = L"Afficher le personnel";
			// 
			// ajouterUnPersonnelToolStripMenuItem
			// 
			this->ajouterUnPersonnelToolStripMenuItem->BackColor = System::Drawing::Color::LightGray;
			this->ajouterUnPersonnelToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->ajouterUnPersonnelToolStripMenuItem->Name = L"ajouterUnPersonnelToolStripMenuItem";
			this->ajouterUnPersonnelToolStripMenuItem->Size = System::Drawing::Size(256, 26);
			this->ajouterUnPersonnelToolStripMenuItem->Text = L"Ajouter un personnel";
			// 
			// modifierUnPersonnelToolStripMenuItem
			// 
			this->modifierUnPersonnelToolStripMenuItem->BackColor = System::Drawing::Color::LightGray;
			this->modifierUnPersonnelToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->modifierUnPersonnelToolStripMenuItem->Name = L"modifierUnPersonnelToolStripMenuItem";
			this->modifierUnPersonnelToolStripMenuItem->Size = System::Drawing::Size(256, 26);
			this->modifierUnPersonnelToolStripMenuItem->Text = L"Modifier un personnel";
			// 
			// supprimerUnPersonnelToolStripMenuItem
			// 
			this->supprimerUnPersonnelToolStripMenuItem->BackColor = System::Drawing::Color::LightGray;
			this->supprimerUnPersonnelToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->supprimerUnPersonnelToolStripMenuItem->Name = L"supprimerUnPersonnelToolStripMenuItem";
			this->supprimerUnPersonnelToolStripMenuItem->Size = System::Drawing::Size(256, 26);
			this->supprimerUnPersonnelToolStripMenuItem->Text = L"Supprimer un personnel";
			// 
			// clientToolStripMenuItem
			// 
			this->clientToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->afficherUnClientToolStripMenuItem,
					this->ajouterUnClientToolStripMenuItem, this->modifierUnClientToolStripMenuItem, this->supprimerUnClientToolStripMenuItem
			});
			this->clientToolStripMenuItem->Name = L"clientToolStripMenuItem";
			this->clientToolStripMenuItem->Size = System::Drawing::Size(104, 41);
			this->clientToolStripMenuItem->Text = L"Client";
			// 
			// afficherUnClientToolStripMenuItem
			// 
			this->afficherUnClientToolStripMenuItem->BackColor = System::Drawing::Color::LightGray;
			this->afficherUnClientToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->afficherUnClientToolStripMenuItem->Name = L"afficherUnClientToolStripMenuItem";
			this->afficherUnClientToolStripMenuItem->Size = System::Drawing::Size(228, 26);
			this->afficherUnClientToolStripMenuItem->Text = L"Afficher les clients";
			// 
			// ajouterUnClientToolStripMenuItem
			// 
			this->ajouterUnClientToolStripMenuItem->BackColor = System::Drawing::Color::LightGray;
			this->ajouterUnClientToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->ajouterUnClientToolStripMenuItem->Name = L"ajouterUnClientToolStripMenuItem";
			this->ajouterUnClientToolStripMenuItem->Size = System::Drawing::Size(228, 26);
			this->ajouterUnClientToolStripMenuItem->Text = L"Ajouter un client ";
			// 
			// modifierUnClientToolStripMenuItem
			// 
			this->modifierUnClientToolStripMenuItem->BackColor = System::Drawing::Color::LightGray;
			this->modifierUnClientToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->modifierUnClientToolStripMenuItem->Name = L"modifierUnClientToolStripMenuItem";
			this->modifierUnClientToolStripMenuItem->Size = System::Drawing::Size(228, 26);
			this->modifierUnClientToolStripMenuItem->Text = L"Modifier un client ";
			// 
			// supprimerUnClientToolStripMenuItem
			// 
			this->supprimerUnClientToolStripMenuItem->BackColor = System::Drawing::Color::LightGray;
			this->supprimerUnClientToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->supprimerUnClientToolStripMenuItem->Name = L"supprimerUnClientToolStripMenuItem";
			this->supprimerUnClientToolStripMenuItem->Size = System::Drawing::Size(228, 26);
			this->supprimerUnClientToolStripMenuItem->Text = L"Supprimer un client ";
			// 
			// commandeToolStripMenuItem
			// 
			this->commandeToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->afficherLesCommandesToolStripMenuItem,
					this->ajouterUneCommandeToolStripMenuItem, this->modifierUneCommandeToolStripMenuItem, this->supprimeruneCommandeToolStripMenuItem
			});
			this->commandeToolStripMenuItem->Name = L"commandeToolStripMenuItem";
			this->commandeToolStripMenuItem->Size = System::Drawing::Size(176, 41);
			this->commandeToolStripMenuItem->Text = L"Commande";
			// 
			// afficherLesCommandesToolStripMenuItem
			// 
			this->afficherLesCommandesToolStripMenuItem->BackColor = System::Drawing::Color::LightGray;
			this->afficherLesCommandesToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->afficherLesCommandesToolStripMenuItem->Name = L"afficherLesCommandesToolStripMenuItem";
			this->afficherLesCommandesToolStripMenuItem->Size = System::Drawing::Size(273, 26);
			this->afficherLesCommandesToolStripMenuItem->Text = L"Afficher les commandes";
			// 
			// ajouterUneCommandeToolStripMenuItem
			// 
			this->ajouterUneCommandeToolStripMenuItem->BackColor = System::Drawing::Color::LightGray;
			this->ajouterUneCommandeToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->ajouterUneCommandeToolStripMenuItem->Name = L"ajouterUneCommandeToolStripMenuItem";
			this->ajouterUneCommandeToolStripMenuItem->Size = System::Drawing::Size(273, 26);
			this->ajouterUneCommandeToolStripMenuItem->Text = L"Ajouter une commande";
			// 
			// modifierUneCommandeToolStripMenuItem
			// 
			this->modifierUneCommandeToolStripMenuItem->BackColor = System::Drawing::Color::LightGray;
			this->modifierUneCommandeToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->modifierUneCommandeToolStripMenuItem->Name = L"modifierUneCommandeToolStripMenuItem";
			this->modifierUneCommandeToolStripMenuItem->Size = System::Drawing::Size(273, 26);
			this->modifierUneCommandeToolStripMenuItem->Text = L"Modifier une commande";
			// 
			// supprimeruneCommandeToolStripMenuItem
			// 
			this->supprimeruneCommandeToolStripMenuItem->BackColor = System::Drawing::Color::LightGray;
			this->supprimeruneCommandeToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->supprimeruneCommandeToolStripMenuItem->Name = L"supprimeruneCommandeToolStripMenuItem";
			this->supprimeruneCommandeToolStripMenuItem->Size = System::Drawing::Size(273, 26);
			this->supprimeruneCommandeToolStripMenuItem->Text = L"Supprimer une commande";
			// 
			// stockToolStripMenuItem
			// 
			this->stockToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->afficherLeStockToolStripMenuItem,
					this->ajouterUnArticleToolStripMenuItem, this->modifierUnArticleToolStripMenuItem, this->supprimerUnArticleToolStripMenuItem
			});
			this->stockToolStripMenuItem->Name = L"stockToolStripMenuItem";
			this->stockToolStripMenuItem->Size = System::Drawing::Size(99, 41);
			this->stockToolStripMenuItem->Text = L"Stock";
			// 
			// afficherLeStockToolStripMenuItem
			// 
			this->afficherLeStockToolStripMenuItem->BackColor = System::Drawing::Color::LightGray;
			this->afficherLeStockToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->afficherLeStockToolStripMenuItem->Name = L"afficherLeStockToolStripMenuItem";
			this->afficherLeStockToolStripMenuItem->Size = System::Drawing::Size(229, 26);
			this->afficherLeStockToolStripMenuItem->Text = L"Afficher le stock";
			// 
			// ajouterUnArticleToolStripMenuItem
			// 
			this->ajouterUnArticleToolStripMenuItem->BackColor = System::Drawing::Color::LightGray;
			this->ajouterUnArticleToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->ajouterUnArticleToolStripMenuItem->Name = L"ajouterUnArticleToolStripMenuItem";
			this->ajouterUnArticleToolStripMenuItem->Size = System::Drawing::Size(229, 26);
			this->ajouterUnArticleToolStripMenuItem->Text = L"Ajouter un article";
			// 
			// modifierUnArticleToolStripMenuItem
			// 
			this->modifierUnArticleToolStripMenuItem->BackColor = System::Drawing::Color::LightGray;
			this->modifierUnArticleToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->modifierUnArticleToolStripMenuItem->Name = L"modifierUnArticleToolStripMenuItem";
			this->modifierUnArticleToolStripMenuItem->Size = System::Drawing::Size(229, 26);
			this->modifierUnArticleToolStripMenuItem->Text = L"Modifier un article";
			// 
			// supprimerUnArticleToolStripMenuItem
			// 
			this->supprimerUnArticleToolStripMenuItem->BackColor = System::Drawing::Color::LightGray;
			this->supprimerUnArticleToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->supprimerUnArticleToolStripMenuItem->Name = L"supprimerUnArticleToolStripMenuItem";
			this->supprimerUnArticleToolStripMenuItem->Size = System::Drawing::Size(229, 26);
			this->supprimerUnArticleToolStripMenuItem->Text = L"Supprimer un article";
			// 
			// statistiqueToolStripMenuItem
			// 
			this->statistiqueToolStripMenuItem->Name = L"statistiqueToolStripMenuItem";
			this->statistiqueToolStripMenuItem->Size = System::Drawing::Size(167, 41);
			this->statistiqueToolStripMenuItem->Text = L"Statistique";
			// 
			// monCompteToolStripMenuItem
			// 
			this->monCompteToolStripMenuItem->Name = L"monCompteToolStripMenuItem";
			this->monCompteToolStripMenuItem->Size = System::Drawing::Size(200, 41);
			this->monCompteToolStripMenuItem->Text = L"Mon compte ";
			// 
			// buttonAfficherValeurStock
			// 
			this->buttonAfficherValeurStock->Location = System::Drawing::Point(38, 197);
			this->buttonAfficherValeurStock->Name = L"buttonAfficherValeurStock";
			this->buttonAfficherValeurStock->Size = System::Drawing::Size(241, 50);
			this->buttonAfficherValeurStock->TabIndex = 25;
			this->buttonAfficherValeurStock->Text = L"Calculer";
			this->buttonAfficherValeurStock->UseVisualStyleBackColor = true;
			this->buttonAfficherValeurStock->Click += gcnew System::EventHandler(this, &statistique::buttonAfficherValeurStock_Click);
			// 
			// statistique
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(1904, 1041);
			this->Controls->Add(this->menuStrip1);
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart_chiffreAffaire))->EndInit();
			this->panel9->ResumeLayout(false);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

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
	moncontroleur1->afficher_label_sql(label_prix_panier_moyen, "select AVG(quantite * prix_HT) as prix from Article inner join Composer on Article.id_article = Composer.id_article");
	moncontroleur1->afficher_label_sql(label_valeur_achat_stock, "select SUM(prix_HT*stock) as prix_stock from Article");
}





private: System::Void btnAfficher_Affaire_Click(System::Object^ sender, System::EventArgs^ e)
{
	moncontroleur1->btnafficher_chiffre_affaire(comboBoxMoisChiffreAffaire, btnAfficher_Affaire, maskedTextBoxAnnee, label_prix_chiffre_affaire);
}



private: System::Void checkBoxMarge_CheckedChanged(System::Object^ sender, System::EventArgs^ e) 
{
	moncontroleur1->affichage_text_box(comboBox_margeCommerciale, textBoxMarge);
}
private: System::Void textBoxRemise_TextChanged(System::Object^ sender, System::EventArgs^ e) 
{
	moncontroleur1->affichage_text_box(comboBoxRemise, textBoxRemise);
}
private: System::Void textBoxDemarque_TextChanged(System::Object^ sender, System::EventArgs^ e) 
{
	moncontroleur1->affichage_text_box(comboBoxDemarque, textBoxDemarque);
}
private: System::Void checkBoxTVA_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	moncontroleur1->affichage_text_box(comboBoxTVA, textBoxTVA);
}

private: System::Void buttonAfficherValeurStock_Click(System::Object^ sender, System::EventArgs^ e) 
{
	moncontroleur1->CalculAndrecupereValeurCommercialeStock(textBoxTVA, textBoxRemise, textBoxMarge, textBoxDemarque, comboBoxTVA, comboBoxRemise, comboBox_margeCommerciale, comboBoxDemarque, checkBoxTVA, checkBoxRemise, checkBoxMarge, checkBoxDemarque,label_valeur_stock_actuel);
}
};
}

#pragma once
#include "Controleur.h"


namespace CodeProjet {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de Client
	/// </summary>
	public ref class Client : public System::Windows::Forms::Form
	{
	public:
		Client(void)
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
		~Client()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
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
	private: System::Windows::Forms::Button^ BtnLabelSupprimerClient;

	private: System::Windows::Forms::Button^ BtnLabelModifierClient;

	private: System::Windows::Forms::Button^ BtnLabelRechercherClient;

	private: System::Windows::Forms::Button^ BtnLabelAjouterClient;

	private: System::Windows::Forms::Panel^ PanelSupprimerClient;
	private: System::Windows::Forms::Label^ LNomPrenomSupprimer;
	private: System::Windows::Forms::ComboBox^ comboBox1NomPrenomSupprimer;
	private: System::Windows::Forms::Label^ LQuestionSupprimer;
	private: System::Windows::Forms::Button^ BtnSupprimerClient;
	private: System::Windows::Forms::Panel^ PanelModifierClient;

	private: System::Windows::Forms::Label^ LDatePremierAchatModiifer;
	private: System::Windows::Forms::DateTimePicker^ dateTimePickerPremierAchatModifier;
	private: System::Windows::Forms::Button^ BtnModifierClient;

	private: System::Windows::Forms::Label^ LVilleModifier;
	private: System::Windows::Forms::ComboBox^ BoxVilleModifier;
	private: System::Windows::Forms::Label^ LNomRueModifier;
	private: System::Windows::Forms::Label^ LNumVoieModifier;
	private: System::Windows::Forms::Label^ LComplementModifier;
	private: System::Windows::Forms::Label^ LPrenomModifier;
	private: System::Windows::Forms::Label^ LDateNaissanceModifier;
	private: System::Windows::Forms::Label^ LNomModifier;
	private: System::Windows::Forms::TextBox^ TBComplementModifier;
	private: System::Windows::Forms::TextBox^ TBNomRueModifier;
	private: System::Windows::Forms::TextBox^ TBNumRueModifier;
	private: System::Windows::Forms::DateTimePicker^ dateTimePickerNaissanceModifier;

	private: System::Windows::Forms::TextBox^ TBPrenomModifier;
	private: System::Windows::Forms::TextBox^ TBNomModifier;
	private: System::Windows::Forms::Panel^ PanelAjouterClient;
	private: System::Windows::Forms::Label^ LPremierAchatAjouter;
	private: System::Windows::Forms::DateTimePicker^ dateTimePickerPremierAchatAjouter;
	private: System::Windows::Forms::Button^ BtnAjouter;
	private: System::Windows::Forms::Label^ LVilleAjouter;
	private: System::Windows::Forms::ComboBox^ comboBoxVilleAjouter;
	private: System::Windows::Forms::Label^ LNomRueAjouter;
	private: System::Windows::Forms::Label^ LNumVoieAjouter;
	private: System::Windows::Forms::Label^ LComplementAjouter;
	private: System::Windows::Forms::Label^ LPrenomAjouter;
	private: System::Windows::Forms::Label^ LDateNaissanceAjouter;
	private: System::Windows::Forms::Label^ LNomAjouter;
	private: System::Windows::Forms::TextBox^ TBComplementAjouter;
	private: System::Windows::Forms::TextBox^ TBNomRueAjouter;
	private: System::Windows::Forms::TextBox^ TBNumVoieAjouter;
	private: System::Windows::Forms::DateTimePicker^ dateTimePickerNaissanceAjouter;
	private: System::Windows::Forms::TextBox^ TBPrenomAjouter;
	private: System::Windows::Forms::TextBox^ TBNomAjouter;
	private: System::Windows::Forms::Panel^ PanelAfficherClient;

	private: System::Windows::Forms::Label^ LDatePremierAchatAfficher;
	private: System::Windows::Forms::DateTimePicker^ dateTimePickerPremierAchatAfficher;
	private: System::Windows::Forms::Button^ BtnRechercherClient;
	private: System::Windows::Forms::Label^ LVilleAfficher;
	private: System::Windows::Forms::Label^ LPrenomAfficher;
	private: System::Windows::Forms::Label^ LNomAfficher;
	private: System::Windows::Forms::Label^ LDateNaissanceAfficher;
	private: System::Windows::Forms::ComboBox^ comboBoxVilleAfficher;
	private: System::Windows::Forms::ComboBox^ comboBoxPrenomAfficher;
	private: System::Windows::Forms::ComboBox^ BoxNomAfficher;
	private: System::Windows::Forms::DateTimePicker^ dateTimePickerDateNaissanceAfficher;
	private: System::Windows::Forms::Label^ LQuestionAfficher;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
		   Controleur^ moncontroleur;

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
			this->BtnLabelSupprimerClient = (gcnew System::Windows::Forms::Button());
			this->BtnLabelModifierClient = (gcnew System::Windows::Forms::Button());
			this->BtnLabelRechercherClient = (gcnew System::Windows::Forms::Button());
			this->BtnLabelAjouterClient = (gcnew System::Windows::Forms::Button());
			this->PanelSupprimerClient = (gcnew System::Windows::Forms::Panel());
			this->LNomPrenomSupprimer = (gcnew System::Windows::Forms::Label());
			this->comboBox1NomPrenomSupprimer = (gcnew System::Windows::Forms::ComboBox());
			this->LQuestionSupprimer = (gcnew System::Windows::Forms::Label());
			this->BtnSupprimerClient = (gcnew System::Windows::Forms::Button());
			this->PanelModifierClient = (gcnew System::Windows::Forms::Panel());
			this->LDatePremierAchatModiifer = (gcnew System::Windows::Forms::Label());
			this->dateTimePickerPremierAchatModifier = (gcnew System::Windows::Forms::DateTimePicker());
			this->BtnModifierClient = (gcnew System::Windows::Forms::Button());
			this->LVilleModifier = (gcnew System::Windows::Forms::Label());
			this->BoxVilleModifier = (gcnew System::Windows::Forms::ComboBox());
			this->LNomRueModifier = (gcnew System::Windows::Forms::Label());
			this->LNumVoieModifier = (gcnew System::Windows::Forms::Label());
			this->LComplementModifier = (gcnew System::Windows::Forms::Label());
			this->LPrenomModifier = (gcnew System::Windows::Forms::Label());
			this->LDateNaissanceModifier = (gcnew System::Windows::Forms::Label());
			this->LNomModifier = (gcnew System::Windows::Forms::Label());
			this->TBComplementModifier = (gcnew System::Windows::Forms::TextBox());
			this->TBNomRueModifier = (gcnew System::Windows::Forms::TextBox());
			this->TBNumRueModifier = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePickerNaissanceModifier = (gcnew System::Windows::Forms::DateTimePicker());
			this->TBPrenomModifier = (gcnew System::Windows::Forms::TextBox());
			this->TBNomModifier = (gcnew System::Windows::Forms::TextBox());
			this->PanelAjouterClient = (gcnew System::Windows::Forms::Panel());
			this->LPremierAchatAjouter = (gcnew System::Windows::Forms::Label());
			this->dateTimePickerPremierAchatAjouter = (gcnew System::Windows::Forms::DateTimePicker());
			this->BtnAjouter = (gcnew System::Windows::Forms::Button());
			this->LVilleAjouter = (gcnew System::Windows::Forms::Label());
			this->comboBoxVilleAjouter = (gcnew System::Windows::Forms::ComboBox());
			this->LNomRueAjouter = (gcnew System::Windows::Forms::Label());
			this->LNumVoieAjouter = (gcnew System::Windows::Forms::Label());
			this->LComplementAjouter = (gcnew System::Windows::Forms::Label());
			this->LPrenomAjouter = (gcnew System::Windows::Forms::Label());
			this->LDateNaissanceAjouter = (gcnew System::Windows::Forms::Label());
			this->LNomAjouter = (gcnew System::Windows::Forms::Label());
			this->TBComplementAjouter = (gcnew System::Windows::Forms::TextBox());
			this->TBNomRueAjouter = (gcnew System::Windows::Forms::TextBox());
			this->TBNumVoieAjouter = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePickerNaissanceAjouter = (gcnew System::Windows::Forms::DateTimePicker());
			this->TBPrenomAjouter = (gcnew System::Windows::Forms::TextBox());
			this->TBNomAjouter = (gcnew System::Windows::Forms::TextBox());
			this->PanelAfficherClient = (gcnew System::Windows::Forms::Panel());
			this->LDatePremierAchatAfficher = (gcnew System::Windows::Forms::Label());
			this->dateTimePickerPremierAchatAfficher = (gcnew System::Windows::Forms::DateTimePicker());
			this->BtnRechercherClient = (gcnew System::Windows::Forms::Button());
			this->LVilleAfficher = (gcnew System::Windows::Forms::Label());
			this->LPrenomAfficher = (gcnew System::Windows::Forms::Label());
			this->LNomAfficher = (gcnew System::Windows::Forms::Label());
			this->LDateNaissanceAfficher = (gcnew System::Windows::Forms::Label());
			this->comboBoxVilleAfficher = (gcnew System::Windows::Forms::ComboBox());
			this->comboBoxPrenomAfficher = (gcnew System::Windows::Forms::ComboBox());
			this->BoxNomAfficher = (gcnew System::Windows::Forms::ComboBox());
			this->dateTimePickerDateNaissanceAfficher = (gcnew System::Windows::Forms::DateTimePicker());
			this->LQuestionAfficher = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->menuStrip1->SuspendLayout();
			this->PanelSupprimerClient->SuspendLayout();
			this->PanelModifierClient->SuspendLayout();
			this->PanelAjouterClient->SuspendLayout();
			this->PanelAfficherClient->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
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
			this->menuStrip1->Location = System::Drawing::Point(144, 9);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(909, 45);
			this->menuStrip1->TabIndex = 6;
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
			this->afficherUnPersonnelToolStripMenuItem->Click += gcnew System::EventHandler(this, &Client::afficherUnPersonnelToolStripMenuItem_Click);
			// 
			// ajouterUnPersonnelToolStripMenuItem
			// 
			this->ajouterUnPersonnelToolStripMenuItem->BackColor = System::Drawing::Color::LightGray;
			this->ajouterUnPersonnelToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->ajouterUnPersonnelToolStripMenuItem->Name = L"ajouterUnPersonnelToolStripMenuItem";
			this->ajouterUnPersonnelToolStripMenuItem->Size = System::Drawing::Size(256, 26);
			this->ajouterUnPersonnelToolStripMenuItem->Text = L"Ajouter un personnel";
			this->ajouterUnPersonnelToolStripMenuItem->Click += gcnew System::EventHandler(this, &Client::ajouterUnPersonnelToolStripMenuItem_Click);
			// 
			// modifierUnPersonnelToolStripMenuItem
			// 
			this->modifierUnPersonnelToolStripMenuItem->BackColor = System::Drawing::Color::LightGray;
			this->modifierUnPersonnelToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->modifierUnPersonnelToolStripMenuItem->Name = L"modifierUnPersonnelToolStripMenuItem";
			this->modifierUnPersonnelToolStripMenuItem->Size = System::Drawing::Size(256, 26);
			this->modifierUnPersonnelToolStripMenuItem->Text = L"Modifier un personnel";
			this->modifierUnPersonnelToolStripMenuItem->Click += gcnew System::EventHandler(this, &Client::modifierUnPersonnelToolStripMenuItem_Click);
			// 
			// supprimerUnPersonnelToolStripMenuItem
			// 
			this->supprimerUnPersonnelToolStripMenuItem->BackColor = System::Drawing::Color::LightGray;
			this->supprimerUnPersonnelToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->supprimerUnPersonnelToolStripMenuItem->Name = L"supprimerUnPersonnelToolStripMenuItem";
			this->supprimerUnPersonnelToolStripMenuItem->Size = System::Drawing::Size(256, 26);
			this->supprimerUnPersonnelToolStripMenuItem->Text = L"Supprimer un personnel";
			this->supprimerUnPersonnelToolStripMenuItem->Click += gcnew System::EventHandler(this, &Client::supprimerUnPersonnelToolStripMenuItem_Click);
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
			this->afficherUnClientToolStripMenuItem->Click += gcnew System::EventHandler(this, &Client::afficherUnClientToolStripMenuItem_Click);
			// 
			// ajouterUnClientToolStripMenuItem
			// 
			this->ajouterUnClientToolStripMenuItem->BackColor = System::Drawing::Color::LightGray;
			this->ajouterUnClientToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->ajouterUnClientToolStripMenuItem->Name = L"ajouterUnClientToolStripMenuItem";
			this->ajouterUnClientToolStripMenuItem->Size = System::Drawing::Size(228, 26);
			this->ajouterUnClientToolStripMenuItem->Text = L"Ajouter un client ";
			this->ajouterUnClientToolStripMenuItem->Click += gcnew System::EventHandler(this, &Client::ajouterUnClientToolStripMenuItem_Click);
			// 
			// modifierUnClientToolStripMenuItem
			// 
			this->modifierUnClientToolStripMenuItem->BackColor = System::Drawing::Color::LightGray;
			this->modifierUnClientToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->modifierUnClientToolStripMenuItem->Name = L"modifierUnClientToolStripMenuItem";
			this->modifierUnClientToolStripMenuItem->Size = System::Drawing::Size(228, 26);
			this->modifierUnClientToolStripMenuItem->Text = L"Modifier un client ";
			this->modifierUnClientToolStripMenuItem->Click += gcnew System::EventHandler(this, &Client::modifierUnClientToolStripMenuItem_Click);
			// 
			// supprimerUnClientToolStripMenuItem
			// 
			this->supprimerUnClientToolStripMenuItem->BackColor = System::Drawing::Color::LightGray;
			this->supprimerUnClientToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->supprimerUnClientToolStripMenuItem->Name = L"supprimerUnClientToolStripMenuItem";
			this->supprimerUnClientToolStripMenuItem->Size = System::Drawing::Size(228, 26);
			this->supprimerUnClientToolStripMenuItem->Text = L"Supprimer un client ";
			this->supprimerUnClientToolStripMenuItem->Click += gcnew System::EventHandler(this, &Client::supprimerUnClientToolStripMenuItem_Click);
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
			this->afficherLesCommandesToolStripMenuItem->Click += gcnew System::EventHandler(this, &Client::afficherLesCommandesToolStripMenuItem_Click);
			// 
			// ajouterUneCommandeToolStripMenuItem
			// 
			this->ajouterUneCommandeToolStripMenuItem->BackColor = System::Drawing::Color::LightGray;
			this->ajouterUneCommandeToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->ajouterUneCommandeToolStripMenuItem->Name = L"ajouterUneCommandeToolStripMenuItem";
			this->ajouterUneCommandeToolStripMenuItem->Size = System::Drawing::Size(273, 26);
			this->ajouterUneCommandeToolStripMenuItem->Text = L"Ajouter une commande";
			this->ajouterUneCommandeToolStripMenuItem->Click += gcnew System::EventHandler(this, &Client::ajouterUneCommandeToolStripMenuItem_Click);
			// 
			// modifierUneCommandeToolStripMenuItem
			// 
			this->modifierUneCommandeToolStripMenuItem->BackColor = System::Drawing::Color::LightGray;
			this->modifierUneCommandeToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->modifierUneCommandeToolStripMenuItem->Name = L"modifierUneCommandeToolStripMenuItem";
			this->modifierUneCommandeToolStripMenuItem->Size = System::Drawing::Size(273, 26);
			this->modifierUneCommandeToolStripMenuItem->Text = L"Modifier une commande";
			this->modifierUneCommandeToolStripMenuItem->Click += gcnew System::EventHandler(this, &Client::modifierUneCommandeToolStripMenuItem_Click);
			// 
			// supprimeruneCommandeToolStripMenuItem
			// 
			this->supprimeruneCommandeToolStripMenuItem->BackColor = System::Drawing::Color::LightGray;
			this->supprimeruneCommandeToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->supprimeruneCommandeToolStripMenuItem->Name = L"supprimeruneCommandeToolStripMenuItem";
			this->supprimeruneCommandeToolStripMenuItem->Size = System::Drawing::Size(273, 26);
			this->supprimeruneCommandeToolStripMenuItem->Text = L"Supprimer une commande";
			this->supprimeruneCommandeToolStripMenuItem->Click += gcnew System::EventHandler(this, &Client::supprimeruneCommandeToolStripMenuItem_Click);
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
			this->afficherLeStockToolStripMenuItem->Click += gcnew System::EventHandler(this, &Client::afficherLeStockToolStripMenuItem_Click);
			// 
			// ajouterUnArticleToolStripMenuItem
			// 
			this->ajouterUnArticleToolStripMenuItem->BackColor = System::Drawing::Color::LightGray;
			this->ajouterUnArticleToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->ajouterUnArticleToolStripMenuItem->Name = L"ajouterUnArticleToolStripMenuItem";
			this->ajouterUnArticleToolStripMenuItem->Size = System::Drawing::Size(229, 26);
			this->ajouterUnArticleToolStripMenuItem->Text = L"Ajouter un article";
			this->ajouterUnArticleToolStripMenuItem->Click += gcnew System::EventHandler(this, &Client::ajouterUnArticleToolStripMenuItem_Click);
			// 
			// modifierUnArticleToolStripMenuItem
			// 
			this->modifierUnArticleToolStripMenuItem->BackColor = System::Drawing::Color::LightGray;
			this->modifierUnArticleToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->modifierUnArticleToolStripMenuItem->Name = L"modifierUnArticleToolStripMenuItem";
			this->modifierUnArticleToolStripMenuItem->Size = System::Drawing::Size(229, 26);
			this->modifierUnArticleToolStripMenuItem->Text = L"Modifier un article";
			this->modifierUnArticleToolStripMenuItem->Click += gcnew System::EventHandler(this, &Client::modifierUnArticleToolStripMenuItem_Click);
			// 
			// supprimerUnArticleToolStripMenuItem
			// 
			this->supprimerUnArticleToolStripMenuItem->BackColor = System::Drawing::Color::LightGray;
			this->supprimerUnArticleToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->supprimerUnArticleToolStripMenuItem->Name = L"supprimerUnArticleToolStripMenuItem";
			this->supprimerUnArticleToolStripMenuItem->Size = System::Drawing::Size(229, 26);
			this->supprimerUnArticleToolStripMenuItem->Text = L"Supprimer un article";
			this->supprimerUnArticleToolStripMenuItem->Click += gcnew System::EventHandler(this, &Client::supprimerUnArticleToolStripMenuItem_Click);
			// 
			// statistiqueToolStripMenuItem
			// 
			this->statistiqueToolStripMenuItem->Name = L"statistiqueToolStripMenuItem";
			this->statistiqueToolStripMenuItem->Size = System::Drawing::Size(167, 41);
			this->statistiqueToolStripMenuItem->Text = L"Statistique";
			this->statistiqueToolStripMenuItem->Click += gcnew System::EventHandler(this, &Client::statistiqueToolStripMenuItem_Click);
			// 
			// monCompteToolStripMenuItem
			// 
			this->monCompteToolStripMenuItem->Name = L"monCompteToolStripMenuItem";
			this->monCompteToolStripMenuItem->Size = System::Drawing::Size(200, 41);
			this->monCompteToolStripMenuItem->Text = L"Mon compte ";
			this->monCompteToolStripMenuItem->Click += gcnew System::EventHandler(this, &Client::monCompteToolStripMenuItem_Click);
			// 
			// BtnLabelSupprimerClient
			// 
			this->BtnLabelSupprimerClient->Location = System::Drawing::Point(193, 393);
			this->BtnLabelSupprimerClient->Name = L"BtnLabelSupprimerClient";
			this->BtnLabelSupprimerClient->Size = System::Drawing::Size(157, 76);
			this->BtnLabelSupprimerClient->TabIndex = 10;
			this->BtnLabelSupprimerClient->Text = L"Supprimer un client";
			this->BtnLabelSupprimerClient->UseVisualStyleBackColor = true;
			this->BtnLabelSupprimerClient->Click += gcnew System::EventHandler(this, &Client::BtnLabelSupprimerPersonnel_Click);
			// 
			// BtnLabelModifierClient
			// 
			this->BtnLabelModifierClient->Location = System::Drawing::Point(34, 393);
			this->BtnLabelModifierClient->Name = L"BtnLabelModifierClient";
			this->BtnLabelModifierClient->Size = System::Drawing::Size(155, 76);
			this->BtnLabelModifierClient->TabIndex = 9;
			this->BtnLabelModifierClient->Text = L"Modifier les informations \r\nd\'un client";
			this->BtnLabelModifierClient->UseVisualStyleBackColor = true;
			this->BtnLabelModifierClient->Click += gcnew System::EventHandler(this, &Client::BtnLabelModifierPersonnel_Click);
			// 
			// BtnLabelRechercherClient
			// 
			this->BtnLabelRechercherClient->Location = System::Drawing::Point(195, 311);
			this->BtnLabelRechercherClient->Name = L"BtnLabelRechercherClient";
			this->BtnLabelRechercherClient->Size = System::Drawing::Size(155, 76);
			this->BtnLabelRechercherClient->TabIndex = 8;
			this->BtnLabelRechercherClient->Text = L"Rechercher un client";
			this->BtnLabelRechercherClient->UseVisualStyleBackColor = true;
			this->BtnLabelRechercherClient->Click += gcnew System::EventHandler(this, &Client::BtnLabelRechercherPersonnel_Click);
			// 
			// BtnLabelAjouterClient
			// 
			this->BtnLabelAjouterClient->Location = System::Drawing::Point(34, 311);
			this->BtnLabelAjouterClient->Name = L"BtnLabelAjouterClient";
			this->BtnLabelAjouterClient->Size = System::Drawing::Size(155, 76);
			this->BtnLabelAjouterClient->TabIndex = 7;
			this->BtnLabelAjouterClient->Text = L"Ajouter un nouveau\r\nClient";
			this->BtnLabelAjouterClient->UseVisualStyleBackColor = true;
			this->BtnLabelAjouterClient->Click += gcnew System::EventHandler(this, &Client::BtnLabelAjouterPersonnel_Click);
			// 
			// PanelSupprimerClient
			// 
			this->PanelSupprimerClient->Controls->Add(this->LNomPrenomSupprimer);
			this->PanelSupprimerClient->Controls->Add(this->comboBox1NomPrenomSupprimer);
			this->PanelSupprimerClient->Controls->Add(this->LQuestionSupprimer);
			this->PanelSupprimerClient->Controls->Add(this->BtnSupprimerClient);
			this->PanelSupprimerClient->Location = System::Drawing::Point(573, 133);
			this->PanelSupprimerClient->Name = L"PanelSupprimerClient";
			this->PanelSupprimerClient->Size = System::Drawing::Size(523, 446);
			this->PanelSupprimerClient->TabIndex = 24;
			// 
			// LNomPrenomSupprimer
			// 
			this->LNomPrenomSupprimer->AutoSize = true;
			this->LNomPrenomSupprimer->Location = System::Drawing::Point(123, 99);
			this->LNomPrenomSupprimer->Name = L"LNomPrenomSupprimer";
			this->LNomPrenomSupprimer->Size = System::Drawing::Size(71, 13);
			this->LNomPrenomSupprimer->TabIndex = 24;
			this->LNomPrenomSupprimer->Text = L"Nom, Prénom";
			// 
			// comboBox1NomPrenomSupprimer
			// 
			this->comboBox1NomPrenomSupprimer->FormattingEnabled = true;
			this->comboBox1NomPrenomSupprimer->Location = System::Drawing::Point(126, 115);
			this->comboBox1NomPrenomSupprimer->Name = L"comboBox1NomPrenomSupprimer";
			this->comboBox1NomPrenomSupprimer->Size = System::Drawing::Size(247, 21);
			this->comboBox1NomPrenomSupprimer->TabIndex = 23;
			// 
			// LQuestionSupprimer
			// 
			this->LQuestionSupprimer->AutoSize = true;
			this->LQuestionSupprimer->Location = System::Drawing::Point(164, 31);
			this->LQuestionSupprimer->Name = L"LQuestionSupprimer";
			this->LQuestionSupprimer->Size = System::Drawing::Size(178, 13);
			this->LQuestionSupprimer->TabIndex = 22;
			this->LQuestionSupprimer->Text = L"Quelle est la personne à supprimer \?";
			// 
			// BtnSupprimerClient
			// 
			this->BtnSupprimerClient->Location = System::Drawing::Point(167, 192);
			this->BtnSupprimerClient->Name = L"BtnSupprimerClient";
			this->BtnSupprimerClient->Size = System::Drawing::Size(185, 46);
			this->BtnSupprimerClient->TabIndex = 21;
			this->BtnSupprimerClient->Text = L"Supprimer";
			this->BtnSupprimerClient->UseVisualStyleBackColor = true;
			this->BtnSupprimerClient->Click += gcnew System::EventHandler(this, &Client::BtnSupprimerClient_Click);
			// 
			// PanelModifierClient
			// 
			this->PanelModifierClient->Controls->Add(this->LDatePremierAchatModiifer);
			this->PanelModifierClient->Controls->Add(this->dateTimePickerPremierAchatModifier);
			this->PanelModifierClient->Controls->Add(this->BtnModifierClient);
			this->PanelModifierClient->Controls->Add(this->LVilleModifier);
			this->PanelModifierClient->Controls->Add(this->BoxVilleModifier);
			this->PanelModifierClient->Controls->Add(this->LNomRueModifier);
			this->PanelModifierClient->Controls->Add(this->LNumVoieModifier);
			this->PanelModifierClient->Controls->Add(this->LComplementModifier);
			this->PanelModifierClient->Controls->Add(this->LPrenomModifier);
			this->PanelModifierClient->Controls->Add(this->LDateNaissanceModifier);
			this->PanelModifierClient->Controls->Add(this->LNomModifier);
			this->PanelModifierClient->Controls->Add(this->TBComplementModifier);
			this->PanelModifierClient->Controls->Add(this->TBNomRueModifier);
			this->PanelModifierClient->Controls->Add(this->TBNumRueModifier);
			this->PanelModifierClient->Controls->Add(this->dateTimePickerNaissanceModifier);
			this->PanelModifierClient->Controls->Add(this->TBPrenomModifier);
			this->PanelModifierClient->Controls->Add(this->TBNomModifier);
			this->PanelModifierClient->Location = System::Drawing::Point(573, 120);
			this->PanelModifierClient->Name = L"PanelModifierClient";
			this->PanelModifierClient->Size = System::Drawing::Size(523, 446);
			this->PanelModifierClient->TabIndex = 25;
			// 
			// LDatePremierAchatModiifer
			// 
			this->LDatePremierAchatModiifer->AutoSize = true;
			this->LDatePremierAchatModiifer->Location = System::Drawing::Point(17, 258);
			this->LDatePremierAchatModiifer->Name = L"LDatePremierAchatModiifer";
			this->LDatePremierAchatModiifer->Size = System::Drawing::Size(112, 13);
			this->LDatePremierAchatModiifer->TabIndex = 23;
			this->LDatePremierAchatModiifer->Text = L"Date du premier achat";
			// 
			// dateTimePickerPremierAchatModifier
			// 
			this->dateTimePickerPremierAchatModifier->Location = System::Drawing::Point(20, 274);
			this->dateTimePickerPremierAchatModifier->Name = L"dateTimePickerPremierAchatModifier";
			this->dateTimePickerPremierAchatModifier->Size = System::Drawing::Size(186, 20);
			this->dateTimePickerPremierAchatModifier->TabIndex = 22;
			// 
			// BtnModifierClient
			// 
			this->BtnModifierClient->Location = System::Drawing::Point(138, 383);
			this->BtnModifierClient->Name = L"BtnModifierClient";
			this->BtnModifierClient->Size = System::Drawing::Size(185, 46);
			this->BtnModifierClient->TabIndex = 21;
			this->BtnModifierClient->Text = L"Modifier";
			this->BtnModifierClient->UseVisualStyleBackColor = true;
			// 
			// LVilleModifier
			// 
			this->LVilleModifier->AutoSize = true;
			this->LVilleModifier->Location = System::Drawing::Point(330, 258);
			this->LVilleModifier->Name = L"LVilleModifier";
			this->LVilleModifier->Size = System::Drawing::Size(26, 13);
			this->LVilleModifier->TabIndex = 20;
			this->LVilleModifier->Text = L"Ville";
			// 
			// BoxVilleModifier
			// 
			this->BoxVilleModifier->FormattingEnabled = true;
			this->BoxVilleModifier->Location = System::Drawing::Point(333, 274);
			this->BoxVilleModifier->Name = L"BoxVilleModifier";
			this->BoxVilleModifier->Size = System::Drawing::Size(121, 21);
			this->BoxVilleModifier->TabIndex = 19;
			// 
			// LNomRueModifier
			// 
			this->LNomRueModifier->AutoSize = true;
			this->LNomRueModifier->Location = System::Drawing::Point(330, 100);
			this->LNomRueModifier->Name = L"LNomRueModifier";
			this->LNomRueModifier->Size = System::Drawing::Size(67, 13);
			this->LNomRueModifier->TabIndex = 18;
			this->LNomRueModifier->Text = L"Nom de voie";
			// 
			// LNumVoieModifier
			// 
			this->LNumVoieModifier->AutoSize = true;
			this->LNumVoieModifier->Location = System::Drawing::Point(330, 18);
			this->LNumVoieModifier->Name = L"LNumVoieModifier";
			this->LNumVoieModifier->Size = System::Drawing::Size(82, 13);
			this->LNumVoieModifier->TabIndex = 17;
			this->LNumVoieModifier->Text = L"Numéro de voie";
			// 
			// LComplementModifier
			// 
			this->LComplementModifier->AutoSize = true;
			this->LComplementModifier->Location = System::Drawing::Point(330, 187);
			this->LComplementModifier->Name = L"LComplementModifier";
			this->LComplementModifier->Size = System::Drawing::Size(113, 13);
			this->LComplementModifier->TabIndex = 16;
			this->LComplementModifier->Text = L"Complément d\'adresse";
			// 
			// LPrenomModifier
			// 
			this->LPrenomModifier->AutoSize = true;
			this->LPrenomModifier->Location = System::Drawing::Point(17, 100);
			this->LPrenomModifier->Name = L"LPrenomModifier";
			this->LPrenomModifier->Size = System::Drawing::Size(43, 13);
			this->LPrenomModifier->TabIndex = 13;
			this->LPrenomModifier->Text = L"Prénom";
			// 
			// LDateNaissanceModifier
			// 
			this->LDateNaissanceModifier->AutoSize = true;
			this->LDateNaissanceModifier->Location = System::Drawing::Point(17, 187);
			this->LDateNaissanceModifier->Name = L"LDateNaissanceModifier";
			this->LDateNaissanceModifier->Size = System::Drawing::Size(96, 13);
			this->LDateNaissanceModifier->TabIndex = 11;
			this->LDateNaissanceModifier->Text = L"Date de naissance";
			// 
			// LNomModifier
			// 
			this->LNomModifier->AutoSize = true;
			this->LNomModifier->Location = System::Drawing::Point(17, 18);
			this->LNomModifier->Name = L"LNomModifier";
			this->LNomModifier->Size = System::Drawing::Size(29, 13);
			this->LNomModifier->TabIndex = 10;
			this->LNomModifier->Text = L"Nom";
			// 
			// TBComplementModifier
			// 
			this->TBComplementModifier->Location = System::Drawing::Point(333, 203);
			this->TBComplementModifier->Name = L"TBComplementModifier";
			this->TBComplementModifier->Size = System::Drawing::Size(66, 20);
			this->TBComplementModifier->TabIndex = 8;
			// 
			// TBNomRueModifier
			// 
			this->TBNomRueModifier->Location = System::Drawing::Point(333, 116);
			this->TBNomRueModifier->Name = L"TBNomRueModifier";
			this->TBNomRueModifier->Size = System::Drawing::Size(100, 20);
			this->TBNomRueModifier->TabIndex = 7;
			// 
			// TBNumRueModifier
			// 
			this->TBNumRueModifier->Location = System::Drawing::Point(333, 34);
			this->TBNumRueModifier->Name = L"TBNumRueModifier";
			this->TBNumRueModifier->Size = System::Drawing::Size(100, 20);
			this->TBNumRueModifier->TabIndex = 6;
			// 
			// dateTimePickerNaissanceModifier
			// 
			this->dateTimePickerNaissanceModifier->Location = System::Drawing::Point(20, 203);
			this->dateTimePickerNaissanceModifier->Name = L"dateTimePickerNaissanceModifier";
			this->dateTimePickerNaissanceModifier->Size = System::Drawing::Size(186, 20);
			this->dateTimePickerNaissanceModifier->TabIndex = 4;
			// 
			// TBPrenomModifier
			// 
			this->TBPrenomModifier->Location = System::Drawing::Point(20, 116);
			this->TBPrenomModifier->Name = L"TBPrenomModifier";
			this->TBPrenomModifier->Size = System::Drawing::Size(100, 20);
			this->TBPrenomModifier->TabIndex = 1;
			// 
			// TBNomModifier
			// 
			this->TBNomModifier->Location = System::Drawing::Point(20, 34);
			this->TBNomModifier->Name = L"TBNomModifier";
			this->TBNomModifier->Size = System::Drawing::Size(100, 20);
			this->TBNomModifier->TabIndex = 0;
			// 
			// PanelAjouterClient
			// 
			this->PanelAjouterClient->Controls->Add(this->LPremierAchatAjouter);
			this->PanelAjouterClient->Controls->Add(this->dateTimePickerPremierAchatAjouter);
			this->PanelAjouterClient->Controls->Add(this->BtnAjouter);
			this->PanelAjouterClient->Controls->Add(this->LVilleAjouter);
			this->PanelAjouterClient->Controls->Add(this->comboBoxVilleAjouter);
			this->PanelAjouterClient->Controls->Add(this->LNomRueAjouter);
			this->PanelAjouterClient->Controls->Add(this->LNumVoieAjouter);
			this->PanelAjouterClient->Controls->Add(this->LComplementAjouter);
			this->PanelAjouterClient->Controls->Add(this->LPrenomAjouter);
			this->PanelAjouterClient->Controls->Add(this->LDateNaissanceAjouter);
			this->PanelAjouterClient->Controls->Add(this->LNomAjouter);
			this->PanelAjouterClient->Controls->Add(this->TBComplementAjouter);
			this->PanelAjouterClient->Controls->Add(this->TBNomRueAjouter);
			this->PanelAjouterClient->Controls->Add(this->TBNumVoieAjouter);
			this->PanelAjouterClient->Controls->Add(this->dateTimePickerNaissanceAjouter);
			this->PanelAjouterClient->Controls->Add(this->TBPrenomAjouter);
			this->PanelAjouterClient->Controls->Add(this->TBNomAjouter);
			this->PanelAjouterClient->Location = System::Drawing::Point(487, 94);
			this->PanelAjouterClient->Name = L"PanelAjouterClient";
			this->PanelAjouterClient->Size = System::Drawing::Size(630, 472);
			this->PanelAjouterClient->TabIndex = 26;
			// 
			// LPremierAchatAjouter
			// 
			this->LPremierAchatAjouter->AutoSize = true;
			this->LPremierAchatAjouter->Location = System::Drawing::Point(118, 298);
			this->LPremierAchatAjouter->Name = L"LPremierAchatAjouter";
			this->LPremierAchatAjouter->Size = System::Drawing::Size(112, 13);
			this->LPremierAchatAjouter->TabIndex = 23;
			this->LPremierAchatAjouter->Text = L"Date du premier achat";
			// 
			// dateTimePickerPremierAchatAjouter
			// 
			this->dateTimePickerPremierAchatAjouter->Location = System::Drawing::Point(121, 314);
			this->dateTimePickerPremierAchatAjouter->Name = L"dateTimePickerPremierAchatAjouter";
			this->dateTimePickerPremierAchatAjouter->Size = System::Drawing::Size(186, 20);
			this->dateTimePickerPremierAchatAjouter->TabIndex = 22;
			// 
			// BtnAjouter
			// 
			this->BtnAjouter->Location = System::Drawing::Point(239, 423);
			this->BtnAjouter->Name = L"BtnAjouter";
			this->BtnAjouter->Size = System::Drawing::Size(185, 46);
			this->BtnAjouter->TabIndex = 21;
			this->BtnAjouter->Text = L"Ajouter";
			this->BtnAjouter->UseVisualStyleBackColor = true;
			// 
			// LVilleAjouter
			// 
			this->LVilleAjouter->AutoSize = true;
			this->LVilleAjouter->Location = System::Drawing::Point(431, 298);
			this->LVilleAjouter->Name = L"LVilleAjouter";
			this->LVilleAjouter->Size = System::Drawing::Size(26, 13);
			this->LVilleAjouter->TabIndex = 20;
			this->LVilleAjouter->Text = L"Ville";
			// 
			// comboBoxVilleAjouter
			// 
			this->comboBoxVilleAjouter->FormattingEnabled = true;
			this->comboBoxVilleAjouter->Location = System::Drawing::Point(434, 314);
			this->comboBoxVilleAjouter->Name = L"comboBoxVilleAjouter";
			this->comboBoxVilleAjouter->Size = System::Drawing::Size(121, 21);
			this->comboBoxVilleAjouter->TabIndex = 19;
			// 
			// LNomRueAjouter
			// 
			this->LNomRueAjouter->AutoSize = true;
			this->LNomRueAjouter->Location = System::Drawing::Point(431, 140);
			this->LNomRueAjouter->Name = L"LNomRueAjouter";
			this->LNomRueAjouter->Size = System::Drawing::Size(67, 13);
			this->LNomRueAjouter->TabIndex = 18;
			this->LNomRueAjouter->Text = L"Nom de voie";
			// 
			// LNumVoieAjouter
			// 
			this->LNumVoieAjouter->AutoSize = true;
			this->LNumVoieAjouter->Location = System::Drawing::Point(431, 58);
			this->LNumVoieAjouter->Name = L"LNumVoieAjouter";
			this->LNumVoieAjouter->Size = System::Drawing::Size(82, 13);
			this->LNumVoieAjouter->TabIndex = 17;
			this->LNumVoieAjouter->Text = L"Numéro de voie";
			// 
			// LComplementAjouter
			// 
			this->LComplementAjouter->AutoSize = true;
			this->LComplementAjouter->Location = System::Drawing::Point(431, 227);
			this->LComplementAjouter->Name = L"LComplementAjouter";
			this->LComplementAjouter->Size = System::Drawing::Size(113, 13);
			this->LComplementAjouter->TabIndex = 16;
			this->LComplementAjouter->Text = L"Complément d\'adresse";
			// 
			// LPrenomAjouter
			// 
			this->LPrenomAjouter->AutoSize = true;
			this->LPrenomAjouter->Location = System::Drawing::Point(118, 140);
			this->LPrenomAjouter->Name = L"LPrenomAjouter";
			this->LPrenomAjouter->Size = System::Drawing::Size(43, 13);
			this->LPrenomAjouter->TabIndex = 13;
			this->LPrenomAjouter->Text = L"Prénom";
			// 
			// LDateNaissanceAjouter
			// 
			this->LDateNaissanceAjouter->AutoSize = true;
			this->LDateNaissanceAjouter->Location = System::Drawing::Point(118, 227);
			this->LDateNaissanceAjouter->Name = L"LDateNaissanceAjouter";
			this->LDateNaissanceAjouter->Size = System::Drawing::Size(96, 13);
			this->LDateNaissanceAjouter->TabIndex = 11;
			this->LDateNaissanceAjouter->Text = L"Date de naissance";
			// 
			// LNomAjouter
			// 
			this->LNomAjouter->AutoSize = true;
			this->LNomAjouter->Location = System::Drawing::Point(118, 58);
			this->LNomAjouter->Name = L"LNomAjouter";
			this->LNomAjouter->Size = System::Drawing::Size(29, 13);
			this->LNomAjouter->TabIndex = 10;
			this->LNomAjouter->Text = L"Nom";
			// 
			// TBComplementAjouter
			// 
			this->TBComplementAjouter->Location = System::Drawing::Point(434, 243);
			this->TBComplementAjouter->Name = L"TBComplementAjouter";
			this->TBComplementAjouter->Size = System::Drawing::Size(66, 20);
			this->TBComplementAjouter->TabIndex = 8;
			// 
			// TBNomRueAjouter
			// 
			this->TBNomRueAjouter->Location = System::Drawing::Point(434, 156);
			this->TBNomRueAjouter->Name = L"TBNomRueAjouter";
			this->TBNomRueAjouter->Size = System::Drawing::Size(100, 20);
			this->TBNomRueAjouter->TabIndex = 7;
			// 
			// TBNumVoieAjouter
			// 
			this->TBNumVoieAjouter->Location = System::Drawing::Point(434, 74);
			this->TBNumVoieAjouter->Name = L"TBNumVoieAjouter";
			this->TBNumVoieAjouter->Size = System::Drawing::Size(100, 20);
			this->TBNumVoieAjouter->TabIndex = 6;
			// 
			// dateTimePickerNaissanceAjouter
			// 
			this->dateTimePickerNaissanceAjouter->Location = System::Drawing::Point(121, 243);
			this->dateTimePickerNaissanceAjouter->Name = L"dateTimePickerNaissanceAjouter";
			this->dateTimePickerNaissanceAjouter->Size = System::Drawing::Size(186, 20);
			this->dateTimePickerNaissanceAjouter->TabIndex = 4;
			// 
			// TBPrenomAjouter
			// 
			this->TBPrenomAjouter->Location = System::Drawing::Point(121, 156);
			this->TBPrenomAjouter->Name = L"TBPrenomAjouter";
			this->TBPrenomAjouter->Size = System::Drawing::Size(100, 20);
			this->TBPrenomAjouter->TabIndex = 1;
			// 
			// TBNomAjouter
			// 
			this->TBNomAjouter->Location = System::Drawing::Point(121, 74);
			this->TBNomAjouter->Name = L"TBNomAjouter";
			this->TBNomAjouter->Size = System::Drawing::Size(100, 20);
			this->TBNomAjouter->TabIndex = 0;
			// 
			// PanelAfficherClient
			// 
			this->PanelAfficherClient->Controls->Add(this->LDatePremierAchatAfficher);
			this->PanelAfficherClient->Controls->Add(this->dateTimePickerPremierAchatAfficher);
			this->PanelAfficherClient->Controls->Add(this->BtnRechercherClient);
			this->PanelAfficherClient->Controls->Add(this->LVilleAfficher);
			this->PanelAfficherClient->Controls->Add(this->LPrenomAfficher);
			this->PanelAfficherClient->Controls->Add(this->LNomAfficher);
			this->PanelAfficherClient->Controls->Add(this->LDateNaissanceAfficher);
			this->PanelAfficherClient->Controls->Add(this->comboBoxVilleAfficher);
			this->PanelAfficherClient->Controls->Add(this->comboBoxPrenomAfficher);
			this->PanelAfficherClient->Controls->Add(this->BoxNomAfficher);
			this->PanelAfficherClient->Controls->Add(this->dateTimePickerDateNaissanceAfficher);
			this->PanelAfficherClient->Controls->Add(this->LQuestionAfficher);
			this->PanelAfficherClient->Controls->Add(this->dataGridView1);
			this->PanelAfficherClient->Location = System::Drawing::Point(481, 109);
			this->PanelAfficherClient->Name = L"PanelAfficherClient";
			this->PanelAfficherClient->Size = System::Drawing::Size(676, 479);
			this->PanelAfficherClient->TabIndex = 26;
			// 
			// LDatePremierAchatAfficher
			// 
			this->LDatePremierAchatAfficher->AutoSize = true;
			this->LDatePremierAchatAfficher->Location = System::Drawing::Point(228, 78);
			this->LDatePremierAchatAfficher->Name = L"LDatePremierAchatAfficher";
			this->LDatePremierAchatAfficher->Size = System::Drawing::Size(112, 13);
			this->LDatePremierAchatAfficher->TabIndex = 14;
			this->LDatePremierAchatAfficher->Text = L"Date du premier achat";
			// 
			// dateTimePickerPremierAchatAfficher
			// 
			this->dateTimePickerPremierAchatAfficher->Location = System::Drawing::Point(231, 94);
			this->dateTimePickerPremierAchatAfficher->Name = L"dateTimePickerPremierAchatAfficher";
			this->dateTimePickerPremierAchatAfficher->Size = System::Drawing::Size(199, 20);
			this->dateTimePickerPremierAchatAfficher->TabIndex = 13;
			// 
			// BtnRechercherClient
			// 
			this->BtnRechercherClient->Location = System::Drawing::Point(519, 86);
			this->BtnRechercherClient->Name = L"BtnRechercherClient";
			this->BtnRechercherClient->Size = System::Drawing::Size(151, 38);
			this->BtnRechercherClient->TabIndex = 12;
			this->BtnRechercherClient->Text = L"Rechercher";
			this->BtnRechercherClient->UseVisualStyleBackColor = true;
			// 
			// LVilleAfficher
			// 
			this->LVilleAfficher->AutoSize = true;
			this->LVilleAfficher->Location = System::Drawing::Point(3, 77);
			this->LVilleAfficher->Name = L"LVilleAfficher";
			this->LVilleAfficher->Size = System::Drawing::Size(26, 13);
			this->LVilleAfficher->TabIndex = 10;
			this->LVilleAfficher->Text = L"Ville";
			// 
			// LPrenomAfficher
			// 
			this->LPrenomAfficher->AutoSize = true;
			this->LPrenomAfficher->Location = System::Drawing::Point(546, 37);
			this->LPrenomAfficher->Name = L"LPrenomAfficher";
			this->LPrenomAfficher->Size = System::Drawing::Size(43, 13);
			this->LPrenomAfficher->TabIndex = 9;
			this->LPrenomAfficher->Text = L"Prenom";
			// 
			// LNomAfficher
			// 
			this->LNomAfficher->AutoSize = true;
			this->LNomAfficher->Location = System::Drawing::Point(309, 35);
			this->LNomAfficher->Name = L"LNomAfficher";
			this->LNomAfficher->Size = System::Drawing::Size(29, 13);
			this->LNomAfficher->TabIndex = 8;
			this->LNomAfficher->Text = L"Nom";
			// 
			// LDateNaissanceAfficher
			// 
			this->LDateNaissanceAfficher->AutoSize = true;
			this->LDateNaissanceAfficher->Location = System::Drawing::Point(3, 34);
			this->LDateNaissanceAfficher->Name = L"LDateNaissanceAfficher";
			this->LDateNaissanceAfficher->Size = System::Drawing::Size(96, 13);
			this->LDateNaissanceAfficher->TabIndex = 7;
			this->LDateNaissanceAfficher->Text = L"Date de naissance";
			// 
			// comboBoxVilleAfficher
			// 
			this->comboBoxVilleAfficher->FormattingEnabled = true;
			this->comboBoxVilleAfficher->Location = System::Drawing::Point(6, 93);
			this->comboBoxVilleAfficher->Name = L"comboBoxVilleAfficher";
			this->comboBoxVilleAfficher->Size = System::Drawing::Size(121, 21);
			this->comboBoxVilleAfficher->TabIndex = 6;
			// 
			// comboBoxPrenomAfficher
			// 
			this->comboBoxPrenomAfficher->FormattingEnabled = true;
			this->comboBoxPrenomAfficher->Location = System::Drawing::Point(549, 53);
			this->comboBoxPrenomAfficher->Name = L"comboBoxPrenomAfficher";
			this->comboBoxPrenomAfficher->Size = System::Drawing::Size(121, 21);
			this->comboBoxPrenomAfficher->TabIndex = 4;
			// 
			// BoxNomAfficher
			// 
			this->BoxNomAfficher->FormattingEnabled = true;
			this->BoxNomAfficher->Location = System::Drawing::Point(309, 51);
			this->BoxNomAfficher->Name = L"BoxNomAfficher";
			this->BoxNomAfficher->Size = System::Drawing::Size(121, 21);
			this->BoxNomAfficher->TabIndex = 3;
			// 
			// dateTimePickerDateNaissanceAfficher
			// 
			this->dateTimePickerDateNaissanceAfficher->Location = System::Drawing::Point(6, 50);
			this->dateTimePickerDateNaissanceAfficher->Name = L"dateTimePickerDateNaissanceAfficher";
			this->dateTimePickerDateNaissanceAfficher->Size = System::Drawing::Size(200, 20);
			this->dateTimePickerDateNaissanceAfficher->TabIndex = 2;
			// 
			// LQuestionAfficher
			// 
			this->LQuestionAfficher->AutoSize = true;
			this->LQuestionAfficher->Location = System::Drawing::Point(3, 5);
			this->LQuestionAfficher->Name = L"LQuestionAfficher";
			this->LQuestionAfficher->Size = System::Drawing::Size(223, 13);
			this->LQuestionAfficher->TabIndex = 1;
			this->LQuestionAfficher->Text = L"Quel(s) est/sont le/les critères de recherche \?";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(6, 132);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(664, 343);
			this->dataGridView1->TabIndex = 0;
			// 
			// Client
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1256, 637);
			this->Controls->Add(this->BtnLabelSupprimerClient);
			this->Controls->Add(this->BtnLabelModifierClient);
			this->Controls->Add(this->BtnLabelRechercherClient);
			this->Controls->Add(this->BtnLabelAjouterClient);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->PanelAjouterClient);
			this->Controls->Add(this->PanelModifierClient);
			this->Controls->Add(this->PanelSupprimerClient);
			this->Controls->Add(this->PanelAfficherClient);
			this->Name = L"Client";
			this->Text = L"Client";
			this->Load += gcnew System::EventHandler(this, &Client::Client_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->PanelSupprimerClient->ResumeLayout(false);
			this->PanelSupprimerClient->PerformLayout();
			this->PanelModifierClient->ResumeLayout(false);
			this->PanelModifierClient->PerformLayout();
			this->PanelAjouterClient->ResumeLayout(false);
			this->PanelAjouterClient->PerformLayout();
			this->PanelAfficherClient->ResumeLayout(false);
			this->PanelAfficherClient->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Client_Load(System::Object^ sender, System::EventArgs^ e) {
		moncontroleur = gcnew Controleur;

		moncontroleur->gestion_panel(PanelAjouterClient, PanelModifierClient, PanelAfficherClient, PanelSupprimerClient, false);

		moncontroleur->CnxComboBox_BDD(comboBoxPrenomAfficher, "select prenom from client");
		moncontroleur->CnxComboBox_BDD(comboBoxVilleAfficher, "select ville from ville");
		moncontroleur->CnxComboBox_BDD(BoxNomAfficher, "select nom_client from client");
		moncontroleur->CnxComboBox_BDD(comboBoxVilleAjouter, "select ville from ville");
		moncontroleur->CnxComboBox_BDD(BoxVilleModifier, "select ville from ville");
		moncontroleur->CnxComboBox_BDD(comboBox1NomPrenomSupprimer, "select nom_client,prenom from client");

	}
private: System::Void BtnLabelAjouterPersonnel_Click(System::Object^ sender, System::EventArgs^ e) {
	moncontroleur->gestion_panel(PanelAjouterClient, PanelAfficherClient, PanelModifierClient, PanelSupprimerClient, true);
}
private: System::Void BtnLabelRechercherPersonnel_Click(System::Object^ sender, System::EventArgs^ e) {
	moncontroleur->gestion_panel(PanelAfficherClient, PanelAjouterClient, PanelModifierClient, PanelSupprimerClient, true);
}
private: System::Void BtnLabelModifierPersonnel_Click(System::Object^ sender, System::EventArgs^ e) {
	moncontroleur->gestion_panel(PanelModifierClient, PanelAjouterClient, PanelAfficherClient, PanelSupprimerClient, true);
}
private: System::Void BtnLabelSupprimerPersonnel_Click(System::Object^ sender, System::EventArgs^ e) {
	moncontroleur->gestion_panel(PanelSupprimerClient, PanelAjouterClient, PanelModifierClient, PanelAfficherClient, true);
}

public: void setPanelAff(int);

private: System::Void afficherUnPersonnelToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	moncontroleur->afficher_form("personnel", 2);
}
private: System::Void ajouterUnPersonnelToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	moncontroleur->afficher_form("personnel", 1);
}
private: System::Void modifierUnPersonnelToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	moncontroleur->afficher_form("personnel", 3);
}
private: System::Void supprimerUnPersonnelToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	moncontroleur->afficher_form("personnel", 4);
}


private: System::Void afficherUnClientToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	moncontroleur->gestion_panel(PanelAfficherClient, PanelAjouterClient, PanelModifierClient, PanelSupprimerClient, true);
}
private: System::Void ajouterUnClientToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	moncontroleur->gestion_panel(PanelAjouterClient, PanelAfficherClient, PanelModifierClient, PanelSupprimerClient, true);
}
private: System::Void modifierUnClientToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	moncontroleur->gestion_panel(PanelModifierClient, PanelAjouterClient, PanelAfficherClient, PanelSupprimerClient, true);
}
private: System::Void supprimerUnClientToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	moncontroleur->gestion_panel(PanelSupprimerClient, PanelAjouterClient, PanelModifierClient, PanelAfficherClient, true);
}

private: System::Void afficherLesCommandesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	moncontroleur->afficher_form("commande", 2);
}
private: System::Void ajouterUneCommandeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	moncontroleur->afficher_form("commande", 1);
}
private: System::Void modifierUneCommandeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	moncontroleur->afficher_form("commande", 3);
}
private: System::Void supprimeruneCommandeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	moncontroleur->afficher_form("commande", 4);
}

private: System::Void afficherLeStockToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	moncontroleur->afficher_form("article", 2);
}
private: System::Void ajouterUnArticleToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	moncontroleur->afficher_form("article", 1);
}
private: System::Void modifierUnArticleToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	moncontroleur->afficher_form("article", 3);
}
private: System::Void supprimerUnArticleToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	moncontroleur->afficher_form("article", 4);
}

private: System::Void statistiqueToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	moncontroleur->afficher_form("stats", 0);
}

private: System::Void monCompteToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void BtnSupprimerClient_Click(System::Object^ sender, System::EventArgs^ e) 
{
	moncontroleur->supprimerClient(comboBox1NomPrenomSupprimer);
}
};
}

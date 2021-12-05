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
	/// Description résumée de Commande
	/// </summary>
	public ref class Commande : public System::Windows::Forms::Form
	{
	public:
		Commande(void)
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
		~Commande()
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
	private: System::Windows::Forms::Button^ BtnLabelSupprimerCommande;

	private: System::Windows::Forms::Button^ BtnLabelModifierCommande;

	private: System::Windows::Forms::Button^ BtnLabelRechercherCommande;

	private: System::Windows::Forms::Button^ BtnLabelAjouterCommande;
	private: System::Windows::Forms::Panel^ PanelAjouterCommande;

	private: System::Windows::Forms::DateTimePicker^ dateTimePickerCommandeAjouter;
	private: System::Windows::Forms::DateTimePicker^ dateTimePickerEmmisionAjouter;
	private: System::Windows::Forms::DateTimePicker^ dateTimePickerLivraisonAjouter;




	private: System::Windows::Forms::TextBox^ TBRefAjouter;
	private: System::Windows::Forms::DataGridView^ dataGridViewArticleCommandeAjouter;
	private: System::Windows::Forms::Button^ BtnAjouterArticleAjouter;
	private: System::Windows::Forms::Label^ LQuantiteAjouter;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownQuantitéAjouter;

	private: System::Windows::Forms::Label^ LRechercherCommandeAjouter;
	private: System::Windows::Forms::Label^ LNomClientAjouter;
	private: System::Windows::Forms::ComboBox^ comboBoxNomClientAjouter;

	private: System::Windows::Forms::Label^ LDateEnvoiAjouter;
	private: System::Windows::Forms::Label^ LDateCommandeAjouter;
	private: System::Windows::Forms::Label^ LDateLivraisonAjouter;
	private: System::Windows::Forms::ComboBox^ comboBoxMoyenPaimentAjouter;
	private: System::Windows::Forms::Label^ LMoyenPaiementAjouter;


	private: System::Windows::Forms::Label^ LDatePaiement;

	private: System::Windows::Forms::DateTimePicker^ dateTimePickerPaimentAjouter;
	private: System::Windows::Forms::Panel^ PanelModifierCommande;
	private: System::Windows::Forms::ComboBox^ comboBoxMoyenPaiementModifier;
	private: System::Windows::Forms::Label^ LMoyenPaiementModifier;
	private: System::Windows::Forms::Label^ LDatePaiementModifier;
	private: System::Windows::Forms::DateTimePicker^ dateTimePickerPaiementModifier;
	private: System::Windows::Forms::Label^ LNomClientModifier;
	private: System::Windows::Forms::ComboBox^ comboBoxNomClientModifier;
	private: System::Windows::Forms::Label^ LDateEnvoiModifier;
	private: System::Windows::Forms::Label^ LDateCommandeModifier;
	private: System::Windows::Forms::Label^ LDateLivraisonModifier;
	private: System::Windows::Forms::Button^ BtnAjouterArticleModifier;
	private: System::Windows::Forms::Label^ LQuantiteModifier;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownModifier;

	private: System::Windows::Forms::Label^ LrechercherModifier;
	private: System::Windows::Forms::DataGridView^ dataGridViewModifier;
	private: System::Windows::Forms::DateTimePicker^ dateTimePickerCommandeModifier;
	private: System::Windows::Forms::DateTimePicker^ dateTimePickerEnvoiModifier;
	private: System::Windows::Forms::DateTimePicker^ dateTimePickerLivraisonModifier;
	private: System::Windows::Forms::TextBox^ TBRefModifier;
private: System::Windows::Forms::Panel^ PanelAfficherCommande;
private: System::Windows::Forms::NumericUpDown^ numericUpDownNbrArticleAfficher;
private: System::Windows::Forms::Button^ BtnRechercherCommande;



private: System::Windows::Forms::Label^ LMoyenPaiementAffcher;
private: System::Windows::Forms::Label^ LNbrArticleAfficher;
private: System::Windows::Forms::Label^ LNatureArticleAfficher;


private: System::Windows::Forms::Label^ LReferenceAfficher;
private: System::Windows::Forms::Label^ LDateCommandeAfficher;
private: System::Windows::Forms::ComboBox^ comboBoxMoyenPaiementAfficher;
private: System::Windows::Forms::ComboBox^ comboBoxNatureArticleAfficher;

private: System::Windows::Forms::ComboBox^ BoxReferenceAfficher;

private: System::Windows::Forms::DateTimePicker^ dateTimePickerDateCommandeAfficher;

private: System::Windows::Forms::Label^ LQuestionAfficher;
private: System::Windows::Forms::DataGridView^ dataGridViewRechercherCommande;
private: System::Windows::Forms::Button^ BtnAjouterCommande;
private: System::Windows::Forms::Button^ BtnModifierCommande;
private: System::Windows::Forms::Button^ BtnValiderModifier;
private: System::Windows::Forms::Label^ LReferenceArticleModifier;

private: System::Windows::Forms::Button^ BtnAffficherArticleCommande;

private: System::Windows::Forms::Button^ BtnSupprimerArticleModifier;
private: System::Windows::Forms::GroupBox^ groupBoxPourArticle;
private: System::Windows::Forms::Panel^ PanelSupprimerCommande;

private: System::Windows::Forms::Button^ BtnSupprimer;

private: System::Windows::Forms::Label^ LInfoSupprimer;

	   Controleur^ monControleur;
private: System::Windows::Forms::ComboBox^ comboBoxRefSupprimer;
private: System::Windows::Forms::ComboBox^ comboBoxArticleAjouter;
private: System::Windows::Forms::ComboBox^ comboBoxArtcileModifier;
private: System::Windows::Forms::ComboBox^ comboBoxRefModifier;
private: System::Windows::Forms::Button^ BtncreerCommande;
private: System::Windows::Forms::Panel^ panel1;
private: System::Windows::Forms::PictureBox^ pictureBox1;
private: System::Windows::Forms::Button^ BtnValider;
private: System::Windows::Forms::Button^ button1;





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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Commande::typeid));
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
			this->BtnLabelSupprimerCommande = (gcnew System::Windows::Forms::Button());
			this->BtnLabelModifierCommande = (gcnew System::Windows::Forms::Button());
			this->BtnLabelRechercherCommande = (gcnew System::Windows::Forms::Button());
			this->BtnLabelAjouterCommande = (gcnew System::Windows::Forms::Button());
			this->PanelAjouterCommande = (gcnew System::Windows::Forms::Panel());
			this->BtncreerCommande = (gcnew System::Windows::Forms::Button());
			this->comboBoxArticleAjouter = (gcnew System::Windows::Forms::ComboBox());
			this->BtnAjouterCommande = (gcnew System::Windows::Forms::Button());
			this->comboBoxMoyenPaimentAjouter = (gcnew System::Windows::Forms::ComboBox());
			this->LMoyenPaiementAjouter = (gcnew System::Windows::Forms::Label());
			this->LDatePaiement = (gcnew System::Windows::Forms::Label());
			this->dateTimePickerPaimentAjouter = (gcnew System::Windows::Forms::DateTimePicker());
			this->LNomClientAjouter = (gcnew System::Windows::Forms::Label());
			this->comboBoxNomClientAjouter = (gcnew System::Windows::Forms::ComboBox());
			this->LDateEnvoiAjouter = (gcnew System::Windows::Forms::Label());
			this->LDateCommandeAjouter = (gcnew System::Windows::Forms::Label());
			this->LDateLivraisonAjouter = (gcnew System::Windows::Forms::Label());
			this->BtnAjouterArticleAjouter = (gcnew System::Windows::Forms::Button());
			this->LQuantiteAjouter = (gcnew System::Windows::Forms::Label());
			this->numericUpDownQuantitéAjouter = (gcnew System::Windows::Forms::NumericUpDown());
			this->LRechercherCommandeAjouter = (gcnew System::Windows::Forms::Label());
			this->dataGridViewArticleCommandeAjouter = (gcnew System::Windows::Forms::DataGridView());
			this->dateTimePickerCommandeAjouter = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePickerEmmisionAjouter = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePickerLivraisonAjouter = (gcnew System::Windows::Forms::DateTimePicker());
			this->TBRefAjouter = (gcnew System::Windows::Forms::TextBox());
			this->PanelModifierCommande = (gcnew System::Windows::Forms::Panel());
			this->comboBoxRefModifier = (gcnew System::Windows::Forms::ComboBox());
			this->groupBoxPourArticle = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBoxArtcileModifier = (gcnew System::Windows::Forms::ComboBox());
			this->dataGridViewModifier = (gcnew System::Windows::Forms::DataGridView());
			this->LrechercherModifier = (gcnew System::Windows::Forms::Label());
			this->BtnSupprimerArticleModifier = (gcnew System::Windows::Forms::Button());
			this->BtnAffficherArticleCommande = (gcnew System::Windows::Forms::Button());
			this->LQuantiteModifier = (gcnew System::Windows::Forms::Label());
			this->numericUpDownModifier = (gcnew System::Windows::Forms::NumericUpDown());
			this->BtnAjouterArticleModifier = (gcnew System::Windows::Forms::Button());
			this->BtnValiderModifier = (gcnew System::Windows::Forms::Button());
			this->LReferenceArticleModifier = (gcnew System::Windows::Forms::Label());
			this->BtnModifierCommande = (gcnew System::Windows::Forms::Button());
			this->comboBoxMoyenPaiementModifier = (gcnew System::Windows::Forms::ComboBox());
			this->LMoyenPaiementModifier = (gcnew System::Windows::Forms::Label());
			this->LDatePaiementModifier = (gcnew System::Windows::Forms::Label());
			this->dateTimePickerPaiementModifier = (gcnew System::Windows::Forms::DateTimePicker());
			this->LNomClientModifier = (gcnew System::Windows::Forms::Label());
			this->comboBoxNomClientModifier = (gcnew System::Windows::Forms::ComboBox());
			this->LDateEnvoiModifier = (gcnew System::Windows::Forms::Label());
			this->LDateCommandeModifier = (gcnew System::Windows::Forms::Label());
			this->LDateLivraisonModifier = (gcnew System::Windows::Forms::Label());
			this->dateTimePickerCommandeModifier = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePickerEnvoiModifier = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePickerLivraisonModifier = (gcnew System::Windows::Forms::DateTimePicker());
			this->TBRefModifier = (gcnew System::Windows::Forms::TextBox());
			this->PanelAfficherCommande = (gcnew System::Windows::Forms::Panel());
			this->numericUpDownNbrArticleAfficher = (gcnew System::Windows::Forms::NumericUpDown());
			this->BtnRechercherCommande = (gcnew System::Windows::Forms::Button());
			this->LMoyenPaiementAffcher = (gcnew System::Windows::Forms::Label());
			this->LNbrArticleAfficher = (gcnew System::Windows::Forms::Label());
			this->LNatureArticleAfficher = (gcnew System::Windows::Forms::Label());
			this->LReferenceAfficher = (gcnew System::Windows::Forms::Label());
			this->LDateCommandeAfficher = (gcnew System::Windows::Forms::Label());
			this->comboBoxMoyenPaiementAfficher = (gcnew System::Windows::Forms::ComboBox());
			this->comboBoxNatureArticleAfficher = (gcnew System::Windows::Forms::ComboBox());
			this->BoxReferenceAfficher = (gcnew System::Windows::Forms::ComboBox());
			this->dateTimePickerDateCommandeAfficher = (gcnew System::Windows::Forms::DateTimePicker());
			this->LQuestionAfficher = (gcnew System::Windows::Forms::Label());
			this->dataGridViewRechercherCommande = (gcnew System::Windows::Forms::DataGridView());
			this->PanelSupprimerCommande = (gcnew System::Windows::Forms::Panel());
			this->comboBoxRefSupprimer = (gcnew System::Windows::Forms::ComboBox());
			this->BtnSupprimer = (gcnew System::Windows::Forms::Button());
			this->LInfoSupprimer = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->BtnValider = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->menuStrip1->SuspendLayout();
			this->PanelAjouterCommande->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownQuantitéAjouter))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewArticleCommandeAjouter))->BeginInit();
			this->PanelModifierCommande->SuspendLayout();
			this->groupBoxPourArticle->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewModifier))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownModifier))->BeginInit();
			this->PanelAfficherCommande->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownNbrArticleAfficher))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewRechercherCommande))->BeginInit();
			this->PanelSupprimerCommande->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
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
			this->menuStrip1->Location = System::Drawing::Point(137, 9);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1029, 45);
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
			this->afficherUnPersonnelToolStripMenuItem->Click += gcnew System::EventHandler(this, &Commande::afficherUnPersonnelToolStripMenuItem_Click);
			// 
			// ajouterUnPersonnelToolStripMenuItem
			// 
			this->ajouterUnPersonnelToolStripMenuItem->BackColor = System::Drawing::Color::LightGray;
			this->ajouterUnPersonnelToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->ajouterUnPersonnelToolStripMenuItem->Name = L"ajouterUnPersonnelToolStripMenuItem";
			this->ajouterUnPersonnelToolStripMenuItem->Size = System::Drawing::Size(256, 26);
			this->ajouterUnPersonnelToolStripMenuItem->Text = L"Ajouter un personnel";
			this->ajouterUnPersonnelToolStripMenuItem->Click += gcnew System::EventHandler(this, &Commande::ajouterUnPersonnelToolStripMenuItem_Click);
			// 
			// modifierUnPersonnelToolStripMenuItem
			// 
			this->modifierUnPersonnelToolStripMenuItem->BackColor = System::Drawing::Color::LightGray;
			this->modifierUnPersonnelToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->modifierUnPersonnelToolStripMenuItem->Name = L"modifierUnPersonnelToolStripMenuItem";
			this->modifierUnPersonnelToolStripMenuItem->Size = System::Drawing::Size(256, 26);
			this->modifierUnPersonnelToolStripMenuItem->Text = L"Modifier un personnel";
			this->modifierUnPersonnelToolStripMenuItem->Click += gcnew System::EventHandler(this, &Commande::modifierUnPersonnelToolStripMenuItem_Click);
			// 
			// supprimerUnPersonnelToolStripMenuItem
			// 
			this->supprimerUnPersonnelToolStripMenuItem->BackColor = System::Drawing::Color::LightGray;
			this->supprimerUnPersonnelToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->supprimerUnPersonnelToolStripMenuItem->Name = L"supprimerUnPersonnelToolStripMenuItem";
			this->supprimerUnPersonnelToolStripMenuItem->Size = System::Drawing::Size(256, 26);
			this->supprimerUnPersonnelToolStripMenuItem->Text = L"Supprimer un personnel";
			this->supprimerUnPersonnelToolStripMenuItem->Click += gcnew System::EventHandler(this, &Commande::supprimerUnPersonnelToolStripMenuItem_Click);
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
			this->afficherUnClientToolStripMenuItem->Click += gcnew System::EventHandler(this, &Commande::afficherUnClientToolStripMenuItem_Click);
			// 
			// ajouterUnClientToolStripMenuItem
			// 
			this->ajouterUnClientToolStripMenuItem->BackColor = System::Drawing::Color::LightGray;
			this->ajouterUnClientToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->ajouterUnClientToolStripMenuItem->Name = L"ajouterUnClientToolStripMenuItem";
			this->ajouterUnClientToolStripMenuItem->Size = System::Drawing::Size(228, 26);
			this->ajouterUnClientToolStripMenuItem->Text = L"Ajouter un client ";
			this->ajouterUnClientToolStripMenuItem->Click += gcnew System::EventHandler(this, &Commande::ajouterUnClientToolStripMenuItem_Click);
			// 
			// modifierUnClientToolStripMenuItem
			// 
			this->modifierUnClientToolStripMenuItem->BackColor = System::Drawing::Color::LightGray;
			this->modifierUnClientToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->modifierUnClientToolStripMenuItem->Name = L"modifierUnClientToolStripMenuItem";
			this->modifierUnClientToolStripMenuItem->Size = System::Drawing::Size(228, 26);
			this->modifierUnClientToolStripMenuItem->Text = L"Modifier un client ";
			this->modifierUnClientToolStripMenuItem->Click += gcnew System::EventHandler(this, &Commande::modifierUnClientToolStripMenuItem_Click);
			// 
			// supprimerUnClientToolStripMenuItem
			// 
			this->supprimerUnClientToolStripMenuItem->BackColor = System::Drawing::Color::LightGray;
			this->supprimerUnClientToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->supprimerUnClientToolStripMenuItem->Name = L"supprimerUnClientToolStripMenuItem";
			this->supprimerUnClientToolStripMenuItem->Size = System::Drawing::Size(228, 26);
			this->supprimerUnClientToolStripMenuItem->Text = L"Supprimer un client ";
			this->supprimerUnClientToolStripMenuItem->Click += gcnew System::EventHandler(this, &Commande::supprimerUnClientToolStripMenuItem_Click);
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
			this->afficherLesCommandesToolStripMenuItem->Click += gcnew System::EventHandler(this, &Commande::afficherLesCommandesToolStripMenuItem_Click);
			// 
			// ajouterUneCommandeToolStripMenuItem
			// 
			this->ajouterUneCommandeToolStripMenuItem->BackColor = System::Drawing::Color::LightGray;
			this->ajouterUneCommandeToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->ajouterUneCommandeToolStripMenuItem->Name = L"ajouterUneCommandeToolStripMenuItem";
			this->ajouterUneCommandeToolStripMenuItem->Size = System::Drawing::Size(273, 26);
			this->ajouterUneCommandeToolStripMenuItem->Text = L"Ajouter une commande";
			this->ajouterUneCommandeToolStripMenuItem->Click += gcnew System::EventHandler(this, &Commande::ajouterUneCommandeToolStripMenuItem_Click);
			// 
			// modifierUneCommandeToolStripMenuItem
			// 
			this->modifierUneCommandeToolStripMenuItem->BackColor = System::Drawing::Color::LightGray;
			this->modifierUneCommandeToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->modifierUneCommandeToolStripMenuItem->Name = L"modifierUneCommandeToolStripMenuItem";
			this->modifierUneCommandeToolStripMenuItem->Size = System::Drawing::Size(273, 26);
			this->modifierUneCommandeToolStripMenuItem->Text = L"Modifier une commande";
			this->modifierUneCommandeToolStripMenuItem->Click += gcnew System::EventHandler(this, &Commande::modifierUneCommandeToolStripMenuItem_Click);
			// 
			// supprimeruneCommandeToolStripMenuItem
			// 
			this->supprimeruneCommandeToolStripMenuItem->BackColor = System::Drawing::Color::LightGray;
			this->supprimeruneCommandeToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->supprimeruneCommandeToolStripMenuItem->Name = L"supprimeruneCommandeToolStripMenuItem";
			this->supprimeruneCommandeToolStripMenuItem->Size = System::Drawing::Size(273, 26);
			this->supprimeruneCommandeToolStripMenuItem->Text = L"Supprimer une commande";
			this->supprimeruneCommandeToolStripMenuItem->Click += gcnew System::EventHandler(this, &Commande::supprimeruneCommandeToolStripMenuItem_Click);
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
			this->afficherLeStockToolStripMenuItem->Click += gcnew System::EventHandler(this, &Commande::afficherLeStockToolStripMenuItem_Click);
			// 
			// ajouterUnArticleToolStripMenuItem
			// 
			this->ajouterUnArticleToolStripMenuItem->BackColor = System::Drawing::Color::LightGray;
			this->ajouterUnArticleToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->ajouterUnArticleToolStripMenuItem->Name = L"ajouterUnArticleToolStripMenuItem";
			this->ajouterUnArticleToolStripMenuItem->Size = System::Drawing::Size(229, 26);
			this->ajouterUnArticleToolStripMenuItem->Text = L"Ajouter un article";
			this->ajouterUnArticleToolStripMenuItem->Click += gcnew System::EventHandler(this, &Commande::ajouterUnArticleToolStripMenuItem_Click);
			// 
			// modifierUnArticleToolStripMenuItem
			// 
			this->modifierUnArticleToolStripMenuItem->BackColor = System::Drawing::Color::LightGray;
			this->modifierUnArticleToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->modifierUnArticleToolStripMenuItem->Name = L"modifierUnArticleToolStripMenuItem";
			this->modifierUnArticleToolStripMenuItem->Size = System::Drawing::Size(229, 26);
			this->modifierUnArticleToolStripMenuItem->Text = L"Modifier un article";
			this->modifierUnArticleToolStripMenuItem->Click += gcnew System::EventHandler(this, &Commande::modifierUnArticleToolStripMenuItem_Click);
			// 
			// supprimerUnArticleToolStripMenuItem
			// 
			this->supprimerUnArticleToolStripMenuItem->BackColor = System::Drawing::Color::LightGray;
			this->supprimerUnArticleToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->supprimerUnArticleToolStripMenuItem->Name = L"supprimerUnArticleToolStripMenuItem";
			this->supprimerUnArticleToolStripMenuItem->Size = System::Drawing::Size(229, 26);
			this->supprimerUnArticleToolStripMenuItem->Text = L"Supprimer un article";
			this->supprimerUnArticleToolStripMenuItem->Click += gcnew System::EventHandler(this, &Commande::supprimerUnArticleToolStripMenuItem_Click);
			// 
			// statistiqueToolStripMenuItem
			// 
			this->statistiqueToolStripMenuItem->Name = L"statistiqueToolStripMenuItem";
			this->statistiqueToolStripMenuItem->Size = System::Drawing::Size(167, 41);
			this->statistiqueToolStripMenuItem->Text = L"Statistique";
			this->statistiqueToolStripMenuItem->Click += gcnew System::EventHandler(this, &Commande::statistiqueToolStripMenuItem_Click);
			// 
			// monCompteToolStripMenuItem
			// 
			this->monCompteToolStripMenuItem->Name = L"monCompteToolStripMenuItem";
			this->monCompteToolStripMenuItem->Size = System::Drawing::Size(200, 41);
			this->monCompteToolStripMenuItem->Text = L"Mon compte ";
			this->monCompteToolStripMenuItem->Click += gcnew System::EventHandler(this, &Commande::monCompteToolStripMenuItem_Click);
			// 
			// BtnLabelSupprimerCommande
			// 
			this->BtnLabelSupprimerCommande->Location = System::Drawing::Point(193, 386);
			this->BtnLabelSupprimerCommande->Name = L"BtnLabelSupprimerCommande";
			this->BtnLabelSupprimerCommande->Size = System::Drawing::Size(157, 76);
			this->BtnLabelSupprimerCommande->TabIndex = 10;
			this->BtnLabelSupprimerCommande->Text = L"Supprimer une commande";
			this->BtnLabelSupprimerCommande->UseVisualStyleBackColor = true;
			this->BtnLabelSupprimerCommande->Click += gcnew System::EventHandler(this, &Commande::BtnLabelSupprimerCommande_Click);
			// 
			// BtnLabelModifierCommande
			// 
			this->BtnLabelModifierCommande->Location = System::Drawing::Point(34, 386);
			this->BtnLabelModifierCommande->Name = L"BtnLabelModifierCommande";
			this->BtnLabelModifierCommande->Size = System::Drawing::Size(155, 76);
			this->BtnLabelModifierCommande->TabIndex = 9;
			this->BtnLabelModifierCommande->Text = L"Modifier les informations \r\nd\'une commande";
			this->BtnLabelModifierCommande->UseVisualStyleBackColor = true;
			this->BtnLabelModifierCommande->Click += gcnew System::EventHandler(this, &Commande::BtnLabelModifierCommande_Click);
			// 
			// BtnLabelRechercherCommande
			// 
			this->BtnLabelRechercherCommande->Location = System::Drawing::Point(195, 304);
			this->BtnLabelRechercherCommande->Name = L"BtnLabelRechercherCommande";
			this->BtnLabelRechercherCommande->Size = System::Drawing::Size(155, 76);
			this->BtnLabelRechercherCommande->TabIndex = 8;
			this->BtnLabelRechercherCommande->Text = L"Rechercher une commande";
			this->BtnLabelRechercherCommande->UseVisualStyleBackColor = true;
			this->BtnLabelRechercherCommande->Click += gcnew System::EventHandler(this, &Commande::BtnLabelRechercherCommande_Click);
			// 
			// BtnLabelAjouterCommande
			// 
			this->BtnLabelAjouterCommande->Location = System::Drawing::Point(34, 304);
			this->BtnLabelAjouterCommande->Name = L"BtnLabelAjouterCommande";
			this->BtnLabelAjouterCommande->Size = System::Drawing::Size(155, 76);
			this->BtnLabelAjouterCommande->TabIndex = 7;
			this->BtnLabelAjouterCommande->Text = L"Ajouter une nouvelle\r\ncommande";
			this->BtnLabelAjouterCommande->UseVisualStyleBackColor = true;
			this->BtnLabelAjouterCommande->Click += gcnew System::EventHandler(this, &Commande::BtnLabelAjouterCommande_Click);
			// 
			// PanelAjouterCommande
			// 
			this->PanelAjouterCommande->Controls->Add(this->BtncreerCommande);
			this->PanelAjouterCommande->Location = System::Drawing::Point(486, 124);
			this->PanelAjouterCommande->Name = L"PanelAjouterCommande";
			this->PanelAjouterCommande->Size = System::Drawing::Size(764, 488);
			this->PanelAjouterCommande->TabIndex = 11;
			// 
			// BtncreerCommande
			// 
			this->BtncreerCommande->Location = System::Drawing::Point(231, 157);
			this->BtncreerCommande->Name = L"BtncreerCommande";
			this->BtncreerCommande->Size = System::Drawing::Size(355, 166);
			this->BtncreerCommande->TabIndex = 0;
			this->BtncreerCommande->Text = L"Pour créer une commande,\r\ncliquez ici";
			this->BtncreerCommande->UseVisualStyleBackColor = true;
			this->BtncreerCommande->Click += gcnew System::EventHandler(this, &Commande::BtncreerCommande_Click);
			// 
			// comboBoxArticleAjouter
			// 
			this->comboBoxArticleAjouter->FormattingEnabled = true;
			this->comboBoxArticleAjouter->Location = System::Drawing::Point(76, 15);
			this->comboBoxArticleAjouter->Name = L"comboBoxArticleAjouter";
			this->comboBoxArticleAjouter->Size = System::Drawing::Size(249, 21);
			this->comboBoxArticleAjouter->TabIndex = 27;
			// 
			// BtnAjouterCommande
			// 
			this->BtnAjouterCommande->Location = System::Drawing::Point(412, 405);
			this->BtnAjouterCommande->Name = L"BtnAjouterCommande";
			this->BtnAjouterCommande->Size = System::Drawing::Size(252, 44);
			this->BtnAjouterCommande->TabIndex = 26;
			this->BtnAjouterCommande->Text = L"Ajouter";
			this->BtnAjouterCommande->UseVisualStyleBackColor = true;
			this->BtnAjouterCommande->Click += gcnew System::EventHandler(this, &Commande::BtnAjouterCommande_Click);
			// 
			// comboBoxMoyenPaimentAjouter
			// 
			this->comboBoxMoyenPaimentAjouter->FormattingEnabled = true;
			this->comboBoxMoyenPaimentAjouter->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"Carte bancaire", L"Paypal",
					L"Chèque", L"Bitcoin"
			});
			this->comboBoxMoyenPaimentAjouter->Location = System::Drawing::Point(374, 294);
			this->comboBoxMoyenPaimentAjouter->Name = L"comboBoxMoyenPaimentAjouter";
			this->comboBoxMoyenPaimentAjouter->Size = System::Drawing::Size(121, 21);
			this->comboBoxMoyenPaimentAjouter->TabIndex = 25;
			// 
			// LMoyenPaiementAjouter
			// 
			this->LMoyenPaiementAjouter->AutoSize = true;
			this->LMoyenPaiementAjouter->Location = System::Drawing::Point(371, 278);
			this->LMoyenPaiementAjouter->Name = L"LMoyenPaiementAjouter";
			this->LMoyenPaiementAjouter->Size = System::Drawing::Size(100, 13);
			this->LMoyenPaiementAjouter->TabIndex = 24;
			this->LMoyenPaiementAjouter->Text = L"Moyen de paiement";
			// 
			// LDatePaiement
			// 
			this->LDatePaiement->AutoSize = true;
			this->LDatePaiement->Location = System::Drawing::Point(371, 227);
			this->LDatePaiement->Name = L"LDatePaiement";
			this->LDatePaiement->Size = System::Drawing::Size(91, 13);
			this->LDatePaiement->TabIndex = 23;
			this->LDatePaiement->Text = L"Date de paiement";
			// 
			// dateTimePickerPaimentAjouter
			// 
			this->dateTimePickerPaimentAjouter->Location = System::Drawing::Point(374, 243);
			this->dateTimePickerPaimentAjouter->Name = L"dateTimePickerPaimentAjouter";
			this->dateTimePickerPaimentAjouter->Size = System::Drawing::Size(200, 20);
			this->dateTimePickerPaimentAjouter->TabIndex = 22;
			// 
			// LNomClientAjouter
			// 
			this->LNomClientAjouter->AutoSize = true;
			this->LNomClientAjouter->Location = System::Drawing::Point(371, 173);
			this->LNomClientAjouter->Name = L"LNomClientAjouter";
			this->LNomClientAjouter->Size = System::Drawing::Size(57, 13);
			this->LNomClientAjouter->TabIndex = 21;
			this->LNomClientAjouter->Text = L"Nom client";
			// 
			// comboBoxNomClientAjouter
			// 
			this->comboBoxNomClientAjouter->FormattingEnabled = true;
			this->comboBoxNomClientAjouter->Location = System::Drawing::Point(374, 189);
			this->comboBoxNomClientAjouter->Name = L"comboBoxNomClientAjouter";
			this->comboBoxNomClientAjouter->Size = System::Drawing::Size(118, 21);
			this->comboBoxNomClientAjouter->Sorted = true;
			this->comboBoxNomClientAjouter->TabIndex = 20;
			// 
			// LDateEnvoiAjouter
			// 
			this->LDateEnvoiAjouter->AutoSize = true;
			this->LDateEnvoiAjouter->Location = System::Drawing::Point(3, 227);
			this->LDateEnvoiAjouter->Name = L"LDateEnvoiAjouter";
			this->LDateEnvoiAjouter->Size = System::Drawing::Size(67, 13);
			this->LDateEnvoiAjouter->TabIndex = 19;
			this->LDateEnvoiAjouter->Text = L"Date d\'envoi";
			// 
			// LDateCommandeAjouter
			// 
			this->LDateCommandeAjouter->AutoSize = true;
			this->LDateCommandeAjouter->Location = System::Drawing::Point(3, 173);
			this->LDateCommandeAjouter->Name = L"LDateCommandeAjouter";
			this->LDateCommandeAjouter->Size = System::Drawing::Size(111, 13);
			this->LDateCommandeAjouter->TabIndex = 18;
			this->LDateCommandeAjouter->Text = L"Date de la commande";
			// 
			// LDateLivraisonAjouter
			// 
			this->LDateLivraisonAjouter->AutoSize = true;
			this->LDateLivraisonAjouter->Location = System::Drawing::Point(3, 278);
			this->LDateLivraisonAjouter->Name = L"LDateLivraisonAjouter";
			this->LDateLivraisonAjouter->Size = System::Drawing::Size(92, 13);
			this->LDateLivraisonAjouter->TabIndex = 17;
			this->LDateLivraisonAjouter->Text = L"Date de livraison :";
			// 
			// BtnAjouterArticleAjouter
			// 
			this->BtnAjouterArticleAjouter->Location = System::Drawing::Point(561, 105);
			this->BtnAjouterArticleAjouter->Name = L"BtnAjouterArticleAjouter";
			this->BtnAjouterArticleAjouter->Size = System::Drawing::Size(103, 65);
			this->BtnAjouterArticleAjouter->TabIndex = 16;
			this->BtnAjouterArticleAjouter->Text = L"Ajouter\r\nl\'article";
			this->BtnAjouterArticleAjouter->UseVisualStyleBackColor = true;
			this->BtnAjouterArticleAjouter->Click += gcnew System::EventHandler(this, &Commande::BtnAjouterArticleAjouter_Click);
			// 
			// LQuantiteAjouter
			// 
			this->LQuantiteAjouter->AutoSize = true;
			this->LQuantiteAjouter->Location = System::Drawing::Point(558, 56);
			this->LQuantiteAjouter->Name = L"LQuantiteAjouter";
			this->LQuantiteAjouter->Size = System::Drawing::Size(53, 13);
			this->LQuantiteAjouter->TabIndex = 15;
			this->LQuantiteAjouter->Text = L"Quantité :";
			// 
			// numericUpDownQuantitéAjouter
			// 
			this->numericUpDownQuantitéAjouter->Location = System::Drawing::Point(617, 54);
			this->numericUpDownQuantitéAjouter->Name = L"numericUpDownQuantitéAjouter";
			this->numericUpDownQuantitéAjouter->Size = System::Drawing::Size(38, 20);
			this->numericUpDownQuantitéAjouter->TabIndex = 14;
			this->numericUpDownQuantitéAjouter->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// LRechercherCommandeAjouter
			// 
			this->LRechercherCommandeAjouter->AutoSize = true;
			this->LRechercherCommandeAjouter->Location = System::Drawing::Point(3, 18);
			this->LRechercherCommandeAjouter->Name = L"LRechercherCommandeAjouter";
			this->LRechercherCommandeAjouter->Size = System::Drawing::Size(72, 13);
			this->LRechercherCommandeAjouter->TabIndex = 12;
			this->LRechercherCommandeAjouter->Text = L"Rechercher : ";
			// 
			// dataGridViewArticleCommandeAjouter
			// 
			this->dataGridViewArticleCommandeAjouter->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewArticleCommandeAjouter->Location = System::Drawing::Point(6, 41);
			this->dataGridViewArticleCommandeAjouter->Name = L"dataGridViewArticleCommandeAjouter";
			this->dataGridViewArticleCommandeAjouter->Size = System::Drawing::Size(537, 129);
			this->dataGridViewArticleCommandeAjouter->TabIndex = 11;
			// 
			// dateTimePickerCommandeAjouter
			// 
			this->dateTimePickerCommandeAjouter->Location = System::Drawing::Point(6, 189);
			this->dateTimePickerCommandeAjouter->Name = L"dateTimePickerCommandeAjouter";
			this->dateTimePickerCommandeAjouter->Size = System::Drawing::Size(200, 20);
			this->dateTimePickerCommandeAjouter->TabIndex = 10;
			// 
			// dateTimePickerEmmisionAjouter
			// 
			this->dateTimePickerEmmisionAjouter->Location = System::Drawing::Point(6, 243);
			this->dateTimePickerEmmisionAjouter->Name = L"dateTimePickerEmmisionAjouter";
			this->dateTimePickerEmmisionAjouter->Size = System::Drawing::Size(200, 20);
			this->dateTimePickerEmmisionAjouter->TabIndex = 9;
			// 
			// dateTimePickerLivraisonAjouter
			// 
			this->dateTimePickerLivraisonAjouter->Location = System::Drawing::Point(6, 294);
			this->dateTimePickerLivraisonAjouter->Name = L"dateTimePickerLivraisonAjouter";
			this->dateTimePickerLivraisonAjouter->Size = System::Drawing::Size(200, 20);
			this->dateTimePickerLivraisonAjouter->TabIndex = 8;
			// 
			// TBRefAjouter
			// 
			this->TBRefAjouter->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TBRefAjouter->Location = System::Drawing::Point(85, 406);
			this->TBRefAjouter->Name = L"TBRefAjouter";
			this->TBRefAjouter->ReadOnly = true;
			this->TBRefAjouter->Size = System::Drawing::Size(270, 40);
			this->TBRefAjouter->TabIndex = 3;
			this->TBRefAjouter->Text = L"REFERENCE";
			// 
			// PanelModifierCommande
			// 
			this->PanelModifierCommande->Controls->Add(this->comboBoxRefModifier);
			this->PanelModifierCommande->Controls->Add(this->groupBoxPourArticle);
			this->PanelModifierCommande->Controls->Add(this->BtnValiderModifier);
			this->PanelModifierCommande->Controls->Add(this->LReferenceArticleModifier);
			this->PanelModifierCommande->Controls->Add(this->BtnModifierCommande);
			this->PanelModifierCommande->Controls->Add(this->comboBoxMoyenPaiementModifier);
			this->PanelModifierCommande->Controls->Add(this->LMoyenPaiementModifier);
			this->PanelModifierCommande->Controls->Add(this->LDatePaiementModifier);
			this->PanelModifierCommande->Controls->Add(this->dateTimePickerPaiementModifier);
			this->PanelModifierCommande->Controls->Add(this->LNomClientModifier);
			this->PanelModifierCommande->Controls->Add(this->comboBoxNomClientModifier);
			this->PanelModifierCommande->Controls->Add(this->LDateEnvoiModifier);
			this->PanelModifierCommande->Controls->Add(this->LDateCommandeModifier);
			this->PanelModifierCommande->Controls->Add(this->LDateLivraisonModifier);
			this->PanelModifierCommande->Controls->Add(this->dateTimePickerCommandeModifier);
			this->PanelModifierCommande->Controls->Add(this->dateTimePickerEnvoiModifier);
			this->PanelModifierCommande->Controls->Add(this->dateTimePickerLivraisonModifier);
			this->PanelModifierCommande->Controls->Add(this->TBRefModifier);
			this->PanelModifierCommande->Location = System::Drawing::Point(486, 57);
			this->PanelModifierCommande->Name = L"PanelModifierCommande";
			this->PanelModifierCommande->Size = System::Drawing::Size(780, 555);
			this->PanelModifierCommande->TabIndex = 26;
			// 
			// comboBoxRefModifier
			// 
			this->comboBoxRefModifier->FormattingEnabled = true;
			this->comboBoxRefModifier->Location = System::Drawing::Point(231, 54);
			this->comboBoxRefModifier->Name = L"comboBoxRefModifier";
			this->comboBoxRefModifier->Size = System::Drawing::Size(212, 21);
			this->comboBoxRefModifier->TabIndex = 33;
			// 
			// groupBoxPourArticle
			// 
			this->groupBoxPourArticle->BackColor = System::Drawing::SystemColors::Control;
			this->groupBoxPourArticle->Controls->Add(this->button1);
			this->groupBoxPourArticle->Controls->Add(this->comboBoxArtcileModifier);
			this->groupBoxPourArticle->Controls->Add(this->dataGridViewModifier);
			this->groupBoxPourArticle->Controls->Add(this->LrechercherModifier);
			this->groupBoxPourArticle->Controls->Add(this->BtnSupprimerArticleModifier);
			this->groupBoxPourArticle->Controls->Add(this->BtnAffficherArticleCommande);
			this->groupBoxPourArticle->Controls->Add(this->LQuantiteModifier);
			this->groupBoxPourArticle->Controls->Add(this->numericUpDownModifier);
			this->groupBoxPourArticle->Controls->Add(this->BtnAjouterArticleModifier);
			this->groupBoxPourArticle->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->groupBoxPourArticle->Location = System::Drawing::Point(6, 117);
			this->groupBoxPourArticle->Name = L"groupBoxPourArticle";
			this->groupBoxPourArticle->Size = System::Drawing::Size(658, 178);
			this->groupBoxPourArticle->TabIndex = 28;
			this->groupBoxPourArticle->TabStop = false;
			this->groupBoxPourArticle->Text = L"Article";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(249, 19);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(82, 39);
			this->button1->TabIndex = 31;
			this->button1->Text = L"Afficher les\r\narticles";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Commande::button1_Click);
			// 
			// comboBoxArtcileModifier
			// 
			this->comboBoxArtcileModifier->FormattingEnabled = true;
			this->comboBoxArtcileModifier->Location = System::Drawing::Point(70, 29);
			this->comboBoxArtcileModifier->Name = L"comboBoxArtcileModifier";
			this->comboBoxArtcileModifier->Size = System::Drawing::Size(164, 21);
			this->comboBoxArtcileModifier->TabIndex = 30;
			// 
			// dataGridViewModifier
			// 
			this->dataGridViewModifier->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewModifier->Location = System::Drawing::Point(6, 64);
			this->dataGridViewModifier->Name = L"dataGridViewModifier";
			this->dataGridViewModifier->Size = System::Drawing::Size(437, 104);
			this->dataGridViewModifier->TabIndex = 11;
			// 
			// LrechercherModifier
			// 
			this->LrechercherModifier->AutoSize = true;
			this->LrechercherModifier->Location = System::Drawing::Point(3, 32);
			this->LrechercherModifier->Name = L"LrechercherModifier";
			this->LrechercherModifier->Size = System::Drawing::Size(72, 13);
			this->LrechercherModifier->TabIndex = 12;
			this->LrechercherModifier->Text = L"Rechercher : ";
			// 
			// BtnSupprimerArticleModifier
			// 
			this->BtnSupprimerArticleModifier->Location = System::Drawing::Point(552, 101);
			this->BtnSupprimerArticleModifier->Name = L"BtnSupprimerArticleModifier";
			this->BtnSupprimerArticleModifier->Size = System::Drawing::Size(90, 65);
			this->BtnSupprimerArticleModifier->TabIndex = 27;
			this->BtnSupprimerArticleModifier->Text = L"Supprimer\r\nl\'article";
			this->BtnSupprimerArticleModifier->UseVisualStyleBackColor = true;
			this->BtnSupprimerArticleModifier->Click += gcnew System::EventHandler(this, &Commande::BtnSupprimerArticleModifier_Click);
			// 
			// BtnAffficherArticleCommande
			// 
			this->BtnAffficherArticleCommande->Location = System::Drawing::Point(337, 19);
			this->BtnAffficherArticleCommande->Name = L"BtnAffficherArticleCommande";
			this->BtnAffficherArticleCommande->Size = System::Drawing::Size(106, 39);
			this->BtnAffficherArticleCommande->TabIndex = 29;
			this->BtnAffficherArticleCommande->Text = L"Afficher les articles de la commande";
			this->BtnAffficherArticleCommande->UseVisualStyleBackColor = true;
			this->BtnAffficherArticleCommande->Click += gcnew System::EventHandler(this, &Commande::BtnAffficherArticleCommande_Click);
			// 
			// LQuantiteModifier
			// 
			this->LQuantiteModifier->AutoSize = true;
			this->LQuantiteModifier->Location = System::Drawing::Point(453, 64);
			this->LQuantiteModifier->Name = L"LQuantiteModifier";
			this->LQuantiteModifier->Size = System::Drawing::Size(53, 13);
			this->LQuantiteModifier->TabIndex = 15;
			this->LQuantiteModifier->Text = L"Quantité :";
			// 
			// numericUpDownModifier
			// 
			this->numericUpDownModifier->Location = System::Drawing::Point(512, 62);
			this->numericUpDownModifier->Name = L"numericUpDownModifier";
			this->numericUpDownModifier->Size = System::Drawing::Size(38, 20);
			this->numericUpDownModifier->TabIndex = 14;
			this->numericUpDownModifier->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// BtnAjouterArticleModifier
			// 
			this->BtnAjouterArticleModifier->Location = System::Drawing::Point(456, 101);
			this->BtnAjouterArticleModifier->Name = L"BtnAjouterArticleModifier";
			this->BtnAjouterArticleModifier->Size = System::Drawing::Size(90, 65);
			this->BtnAjouterArticleModifier->TabIndex = 16;
			this->BtnAjouterArticleModifier->Text = L"Ajouter\r\nl\'article";
			this->BtnAjouterArticleModifier->UseVisualStyleBackColor = true;
			this->BtnAjouterArticleModifier->Click += gcnew System::EventHandler(this, &Commande::BtnAjouterArticleModifier_Click);
			// 
			// BtnValiderModifier
			// 
			this->BtnValiderModifier->Location = System::Drawing::Point(462, 38);
			this->BtnValiderModifier->Name = L"BtnValiderModifier";
			this->BtnValiderModifier->Size = System::Drawing::Size(140, 51);
			this->BtnValiderModifier->TabIndex = 32;
			this->BtnValiderModifier->Text = L"Valider";
			this->BtnValiderModifier->UseVisualStyleBackColor = true;
			this->BtnValiderModifier->Click += gcnew System::EventHandler(this, &Commande::BtnValiderModifier_Click);
			// 
			// LReferenceArticleModifier
			// 
			this->LReferenceArticleModifier->AutoSize = true;
			this->LReferenceArticleModifier->Location = System::Drawing::Point(159, 57);
			this->LReferenceArticleModifier->Name = L"LReferenceArticleModifier";
			this->LReferenceArticleModifier->Size = System::Drawing::Size(66, 13);
			this->LReferenceArticleModifier->TabIndex = 31;
			this->LReferenceArticleModifier->Text = L"Référence : ";
			// 
			// BtnModifierCommande
			// 
			this->BtnModifierCommande->Location = System::Drawing::Point(361, 479);
			this->BtnModifierCommande->Name = L"BtnModifierCommande";
			this->BtnModifierCommande->Size = System::Drawing::Size(241, 35);
			this->BtnModifierCommande->TabIndex = 26;
			this->BtnModifierCommande->Text = L"Modifier";
			this->BtnModifierCommande->UseVisualStyleBackColor = true;
			this->BtnModifierCommande->Click += gcnew System::EventHandler(this, &Commande::BtnModifierCommande_Click);
			// 
			// comboBoxMoyenPaiementModifier
			// 
			this->comboBoxMoyenPaiementModifier->FormattingEnabled = true;
			this->comboBoxMoyenPaiementModifier->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"Carte bancaire", L"Paypal",
					L"Chèque", L"Bitcoin"
			});
			this->comboBoxMoyenPaiementModifier->Location = System::Drawing::Point(376, 422);
			this->comboBoxMoyenPaiementModifier->Name = L"comboBoxMoyenPaiementModifier";
			this->comboBoxMoyenPaiementModifier->Size = System::Drawing::Size(121, 21);
			this->comboBoxMoyenPaiementModifier->TabIndex = 25;
			// 
			// LMoyenPaiementModifier
			// 
			this->LMoyenPaiementModifier->AutoSize = true;
			this->LMoyenPaiementModifier->Location = System::Drawing::Point(373, 406);
			this->LMoyenPaiementModifier->Name = L"LMoyenPaiementModifier";
			this->LMoyenPaiementModifier->Size = System::Drawing::Size(100, 13);
			this->LMoyenPaiementModifier->TabIndex = 24;
			this->LMoyenPaiementModifier->Text = L"Moyen de paiement";
			// 
			// LDatePaiementModifier
			// 
			this->LDatePaiementModifier->AutoSize = true;
			this->LDatePaiementModifier->Location = System::Drawing::Point(373, 355);
			this->LDatePaiementModifier->Name = L"LDatePaiementModifier";
			this->LDatePaiementModifier->Size = System::Drawing::Size(91, 13);
			this->LDatePaiementModifier->TabIndex = 23;
			this->LDatePaiementModifier->Text = L"Date de paiement";
			// 
			// dateTimePickerPaiementModifier
			// 
			this->dateTimePickerPaiementModifier->Location = System::Drawing::Point(376, 371);
			this->dateTimePickerPaiementModifier->Name = L"dateTimePickerPaiementModifier";
			this->dateTimePickerPaiementModifier->Size = System::Drawing::Size(200, 20);
			this->dateTimePickerPaiementModifier->TabIndex = 22;
			// 
			// LNomClientModifier
			// 
			this->LNomClientModifier->AutoSize = true;
			this->LNomClientModifier->Location = System::Drawing::Point(373, 301);
			this->LNomClientModifier->Name = L"LNomClientModifier";
			this->LNomClientModifier->Size = System::Drawing::Size(57, 13);
			this->LNomClientModifier->TabIndex = 21;
			this->LNomClientModifier->Text = L"Nom client";
			// 
			// comboBoxNomClientModifier
			// 
			this->comboBoxNomClientModifier->FormattingEnabled = true;
			this->comboBoxNomClientModifier->Location = System::Drawing::Point(376, 317);
			this->comboBoxNomClientModifier->Name = L"comboBoxNomClientModifier";
			this->comboBoxNomClientModifier->Size = System::Drawing::Size(118, 21);
			this->comboBoxNomClientModifier->TabIndex = 20;
			// 
			// LDateEnvoiModifier
			// 
			this->LDateEnvoiModifier->AutoSize = true;
			this->LDateEnvoiModifier->Location = System::Drawing::Point(3, 355);
			this->LDateEnvoiModifier->Name = L"LDateEnvoiModifier";
			this->LDateEnvoiModifier->Size = System::Drawing::Size(67, 13);
			this->LDateEnvoiModifier->TabIndex = 19;
			this->LDateEnvoiModifier->Text = L"Date d\'envoi";
			// 
			// LDateCommandeModifier
			// 
			this->LDateCommandeModifier->AutoSize = true;
			this->LDateCommandeModifier->Location = System::Drawing::Point(3, 301);
			this->LDateCommandeModifier->Name = L"LDateCommandeModifier";
			this->LDateCommandeModifier->Size = System::Drawing::Size(111, 13);
			this->LDateCommandeModifier->TabIndex = 18;
			this->LDateCommandeModifier->Text = L"Date de la commande";
			// 
			// LDateLivraisonModifier
			// 
			this->LDateLivraisonModifier->AutoSize = true;
			this->LDateLivraisonModifier->Location = System::Drawing::Point(3, 406);
			this->LDateLivraisonModifier->Name = L"LDateLivraisonModifier";
			this->LDateLivraisonModifier->Size = System::Drawing::Size(92, 13);
			this->LDateLivraisonModifier->TabIndex = 17;
			this->LDateLivraisonModifier->Text = L"Date de livraison :";
			// 
			// dateTimePickerCommandeModifier
			// 
			this->dateTimePickerCommandeModifier->Location = System::Drawing::Point(6, 317);
			this->dateTimePickerCommandeModifier->Name = L"dateTimePickerCommandeModifier";
			this->dateTimePickerCommandeModifier->Size = System::Drawing::Size(200, 20);
			this->dateTimePickerCommandeModifier->TabIndex = 10;
			// 
			// dateTimePickerEnvoiModifier
			// 
			this->dateTimePickerEnvoiModifier->Location = System::Drawing::Point(6, 371);
			this->dateTimePickerEnvoiModifier->Name = L"dateTimePickerEnvoiModifier";
			this->dateTimePickerEnvoiModifier->Size = System::Drawing::Size(200, 20);
			this->dateTimePickerEnvoiModifier->TabIndex = 9;
			// 
			// dateTimePickerLivraisonModifier
			// 
			this->dateTimePickerLivraisonModifier->Location = System::Drawing::Point(6, 422);
			this->dateTimePickerLivraisonModifier->Name = L"dateTimePickerLivraisonModifier";
			this->dateTimePickerLivraisonModifier->Size = System::Drawing::Size(200, 20);
			this->dateTimePickerLivraisonModifier->TabIndex = 8;
			// 
			// TBRefModifier
			// 
			this->TBRefModifier->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TBRefModifier->Location = System::Drawing::Point(76, 475);
			this->TBRefModifier->Name = L"TBRefModifier";
			this->TBRefModifier->ReadOnly = true;
			this->TBRefModifier->Size = System::Drawing::Size(249, 40);
			this->TBRefModifier->TabIndex = 3;
			this->TBRefModifier->Text = L"REFERENCE";
			// 
			// PanelAfficherCommande
			// 
			this->PanelAfficherCommande->Controls->Add(this->numericUpDownNbrArticleAfficher);
			this->PanelAfficherCommande->Controls->Add(this->BtnRechercherCommande);
			this->PanelAfficherCommande->Controls->Add(this->LMoyenPaiementAffcher);
			this->PanelAfficherCommande->Controls->Add(this->LNbrArticleAfficher);
			this->PanelAfficherCommande->Controls->Add(this->LNatureArticleAfficher);
			this->PanelAfficherCommande->Controls->Add(this->LReferenceAfficher);
			this->PanelAfficherCommande->Controls->Add(this->LDateCommandeAfficher);
			this->PanelAfficherCommande->Controls->Add(this->comboBoxMoyenPaiementAfficher);
			this->PanelAfficherCommande->Controls->Add(this->comboBoxNatureArticleAfficher);
			this->PanelAfficherCommande->Controls->Add(this->BoxReferenceAfficher);
			this->PanelAfficherCommande->Controls->Add(this->dateTimePickerDateCommandeAfficher);
			this->PanelAfficherCommande->Controls->Add(this->LQuestionAfficher);
			this->PanelAfficherCommande->Controls->Add(this->dataGridViewRechercherCommande);
			this->PanelAfficherCommande->Location = System::Drawing::Point(486, 124);
			this->PanelAfficherCommande->Name = L"PanelAfficherCommande";
			this->PanelAfficherCommande->Size = System::Drawing::Size(764, 488);
			this->PanelAfficherCommande->TabIndex = 27;
			// 
			// numericUpDownNbrArticleAfficher
			// 
			this->numericUpDownNbrArticleAfficher->Location = System::Drawing::Point(6, 93);
			this->numericUpDownNbrArticleAfficher->Name = L"numericUpDownNbrArticleAfficher";
			this->numericUpDownNbrArticleAfficher->Size = System::Drawing::Size(81, 20);
			this->numericUpDownNbrArticleAfficher->TabIndex = 13;
			// 
			// BtnRechercherCommande
			// 
			this->BtnRechercherCommande->Location = System::Drawing::Point(519, 86);
			this->BtnRechercherCommande->Name = L"BtnRechercherCommande";
			this->BtnRechercherCommande->Size = System::Drawing::Size(151, 38);
			this->BtnRechercherCommande->TabIndex = 12;
			this->BtnRechercherCommande->Text = L"Rechercher";
			this->BtnRechercherCommande->UseVisualStyleBackColor = true;
			this->BtnRechercherCommande->Click += gcnew System::EventHandler(this, &Commande::BtnRechercherCommande_Click);
			// 
			// LMoyenPaiementAffcher
			// 
			this->LMoyenPaiementAffcher->AutoSize = true;
			this->LMoyenPaiementAffcher->Location = System::Drawing::Point(306, 77);
			this->LMoyenPaiementAffcher->Name = L"LMoyenPaiementAffcher";
			this->LMoyenPaiementAffcher->Size = System::Drawing::Size(100, 13);
			this->LMoyenPaiementAffcher->TabIndex = 11;
			this->LMoyenPaiementAffcher->Text = L"Moyen de paiement";
			// 
			// LNbrArticleAfficher
			// 
			this->LNbrArticleAfficher->AutoSize = true;
			this->LNbrArticleAfficher->Location = System::Drawing::Point(3, 77);
			this->LNbrArticleAfficher->Name = L"LNbrArticleAfficher";
			this->LNbrArticleAfficher->Size = System::Drawing::Size(83, 13);
			this->LNbrArticleAfficher->TabIndex = 10;
			this->LNbrArticleAfficher->Text = L"Nombre d\'article";
			// 
			// LNatureArticleAfficher
			// 
			this->LNatureArticleAfficher->AutoSize = true;
			this->LNatureArticleAfficher->Location = System::Drawing::Point(546, 37);
			this->LNatureArticleAfficher->Name = L"LNatureArticleAfficher";
			this->LNatureArticleAfficher->Size = System::Drawing::Size(89, 13);
			this->LNatureArticleAfficher->TabIndex = 9;
			this->LNatureArticleAfficher->Text = L"Nature de l\'article";
			// 
			// LReferenceAfficher
			// 
			this->LReferenceAfficher->AutoSize = true;
			this->LReferenceAfficher->Location = System::Drawing::Point(309, 35);
			this->LReferenceAfficher->Name = L"LReferenceAfficher";
			this->LReferenceAfficher->Size = System::Drawing::Size(57, 13);
			this->LReferenceAfficher->TabIndex = 8;
			this->LReferenceAfficher->Text = L"Référence";
			// 
			// LDateCommandeAfficher
			// 
			this->LDateCommandeAfficher->AutoSize = true;
			this->LDateCommandeAfficher->Location = System::Drawing::Point(3, 34);
			this->LDateCommandeAfficher->Name = L"LDateCommandeAfficher";
			this->LDateCommandeAfficher->Size = System::Drawing::Size(100, 13);
			this->LDateCommandeAfficher->TabIndex = 7;
			this->LDateCommandeAfficher->Text = L"Date de commande";
			// 
			// comboBoxMoyenPaiementAfficher
			// 
			this->comboBoxMoyenPaiementAfficher->FormattingEnabled = true;
			this->comboBoxMoyenPaiementAfficher->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"Carte bancaire", L"Paypal",
					L"Chèque", L"Bitcoin"
			});
			this->comboBoxMoyenPaiementAfficher->Location = System::Drawing::Point(309, 93);
			this->comboBoxMoyenPaiementAfficher->Name = L"comboBoxMoyenPaiementAfficher";
			this->comboBoxMoyenPaiementAfficher->Size = System::Drawing::Size(121, 21);
			this->comboBoxMoyenPaiementAfficher->TabIndex = 5;
			// 
			// comboBoxNatureArticleAfficher
			// 
			this->comboBoxNatureArticleAfficher->FormattingEnabled = true;
			this->comboBoxNatureArticleAfficher->Location = System::Drawing::Point(549, 53);
			this->comboBoxNatureArticleAfficher->Name = L"comboBoxNatureArticleAfficher";
			this->comboBoxNatureArticleAfficher->Size = System::Drawing::Size(121, 21);
			this->comboBoxNatureArticleAfficher->TabIndex = 4;
			// 
			// BoxReferenceAfficher
			// 
			this->BoxReferenceAfficher->FormattingEnabled = true;
			this->BoxReferenceAfficher->Location = System::Drawing::Point(309, 51);
			this->BoxReferenceAfficher->Name = L"BoxReferenceAfficher";
			this->BoxReferenceAfficher->Size = System::Drawing::Size(121, 21);
			this->BoxReferenceAfficher->TabIndex = 3;
			// 
			// dateTimePickerDateCommandeAfficher
			// 
			this->dateTimePickerDateCommandeAfficher->Location = System::Drawing::Point(6, 50);
			this->dateTimePickerDateCommandeAfficher->Name = L"dateTimePickerDateCommandeAfficher";
			this->dateTimePickerDateCommandeAfficher->Size = System::Drawing::Size(200, 20);
			this->dateTimePickerDateCommandeAfficher->TabIndex = 2;
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
			// dataGridViewRechercherCommande
			// 
			this->dataGridViewRechercherCommande->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewRechercherCommande->Location = System::Drawing::Point(6, 132);
			this->dataGridViewRechercherCommande->Name = L"dataGridViewRechercherCommande";
			this->dataGridViewRechercherCommande->Size = System::Drawing::Size(664, 343);
			this->dataGridViewRechercherCommande->TabIndex = 0;
			// 
			// PanelSupprimerCommande
			// 
			this->PanelSupprimerCommande->Controls->Add(this->comboBoxRefSupprimer);
			this->PanelSupprimerCommande->Controls->Add(this->BtnSupprimer);
			this->PanelSupprimerCommande->Controls->Add(this->LInfoSupprimer);
			this->PanelSupprimerCommande->Location = System::Drawing::Point(486, 124);
			this->PanelSupprimerCommande->Name = L"PanelSupprimerCommande";
			this->PanelSupprimerCommande->Size = System::Drawing::Size(777, 488);
			this->PanelSupprimerCommande->TabIndex = 28;
			// 
			// comboBoxRefSupprimer
			// 
			this->comboBoxRefSupprimer->FormattingEnabled = true;
			this->comboBoxRefSupprimer->Location = System::Drawing::Point(436, 197);
			this->comboBoxRefSupprimer->Name = L"comboBoxRefSupprimer";
			this->comboBoxRefSupprimer->Size = System::Drawing::Size(166, 21);
			this->comboBoxRefSupprimer->TabIndex = 3;
			// 
			// BtnSupprimer
			// 
			this->BtnSupprimer->Location = System::Drawing::Point(303, 237);
			this->BtnSupprimer->Name = L"BtnSupprimer";
			this->BtnSupprimer->Size = System::Drawing::Size(202, 44);
			this->BtnSupprimer->TabIndex = 2;
			this->BtnSupprimer->Text = L"Supprimer";
			this->BtnSupprimer->UseVisualStyleBackColor = true;
			this->BtnSupprimer->Click += gcnew System::EventHandler(this, &Commande::BtnSupprimer_Click);
			// 
			// LInfoSupprimer
			// 
			this->LInfoSupprimer->AutoSize = true;
			this->LInfoSupprimer->Location = System::Drawing::Point(244, 202);
			this->LInfoSupprimer->Name = L"LInfoSupprimer";
			this->LInfoSupprimer->Size = System::Drawing::Size(186, 13);
			this->LInfoSupprimer->TabIndex = 0;
			this->LInfoSupprimer->Text = L"Quelle est la commande à supprimer \?";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->BtnValider);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->comboBoxArticleAjouter);
			this->panel1->Controls->Add(this->dataGridViewArticleCommandeAjouter);
			this->panel1->Controls->Add(this->BtnAjouterCommande);
			this->panel1->Controls->Add(this->TBRefAjouter);
			this->panel1->Controls->Add(this->comboBoxMoyenPaimentAjouter);
			this->panel1->Controls->Add(this->dateTimePickerLivraisonAjouter);
			this->panel1->Controls->Add(this->LMoyenPaiementAjouter);
			this->panel1->Controls->Add(this->dateTimePickerEmmisionAjouter);
			this->panel1->Controls->Add(this->LDatePaiement);
			this->panel1->Controls->Add(this->dateTimePickerCommandeAjouter);
			this->panel1->Controls->Add(this->dateTimePickerPaimentAjouter);
			this->panel1->Controls->Add(this->LRechercherCommandeAjouter);
			this->panel1->Controls->Add(this->LNomClientAjouter);
			this->panel1->Controls->Add(this->numericUpDownQuantitéAjouter);
			this->panel1->Controls->Add(this->comboBoxNomClientAjouter);
			this->panel1->Controls->Add(this->LQuantiteAjouter);
			this->panel1->Controls->Add(this->LDateEnvoiAjouter);
			this->panel1->Controls->Add(this->BtnAjouterArticleAjouter);
			this->panel1->Controls->Add(this->LDateCommandeAjouter);
			this->panel1->Controls->Add(this->LDateLivraisonAjouter);
			this->panel1->Location = System::Drawing::Point(486, 124);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(764, 488);
			this->panel1->TabIndex = 29;
			this->panel1->Visible = false;
			// 
			// BtnValider
			// 
			this->BtnValider->Location = System::Drawing::Point(376, 15);
			this->BtnValider->Name = L"BtnValider";
			this->BtnValider->Size = System::Drawing::Size(144, 21);
			this->BtnValider->TabIndex = 29;
			this->BtnValider->Text = L"Valider";
			this->BtnValider->UseVisualStyleBackColor = true;
			this->BtnValider->Click += gcnew System::EventHandler(this, &Commande::BtnValider_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::White;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(739, 5);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(22, 17);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 28;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Commande::pictureBox1_Click);
			// 
			// Commande
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1291, 629);
			this->Controls->Add(this->BtnLabelSupprimerCommande);
			this->Controls->Add(this->BtnLabelModifierCommande);
			this->Controls->Add(this->BtnLabelRechercherCommande);
			this->Controls->Add(this->BtnLabelAjouterCommande);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->PanelModifierCommande);
			this->Controls->Add(this->PanelAfficherCommande);
			this->Controls->Add(this->PanelSupprimerCommande);
			this->Controls->Add(this->PanelAjouterCommande);
			this->Controls->Add(this->panel1);
			this->Name = L"Commande";
			this->Text = L"Commande";
			this->Load += gcnew System::EventHandler(this, &Commande::Commande_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->PanelAjouterCommande->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownQuantitéAjouter))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewArticleCommandeAjouter))->EndInit();
			this->PanelModifierCommande->ResumeLayout(false);
			this->PanelModifierCommande->PerformLayout();
			this->groupBoxPourArticle->ResumeLayout(false);
			this->groupBoxPourArticle->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewModifier))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownModifier))->EndInit();
			this->PanelAfficherCommande->ResumeLayout(false);
			this->PanelAfficherCommande->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownNbrArticleAfficher))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewRechercherCommande))->EndInit();
			this->PanelSupprimerCommande->ResumeLayout(false);
			this->PanelSupprimerCommande->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void Commande_Load(System::Object^ sender, System::EventArgs^ e) {
	monControleur = gcnew Controleur;

	this->commandeToolStripMenuItem->BackColor = System::Drawing::Color::LightGray;

	monControleur->gestion_panel(PanelAjouterCommande, PanelModifierCommande, PanelAfficherCommande, PanelSupprimerCommande, false);
	monControleur->CnxComboBox_BDD(BoxReferenceAfficher, "select ref from commande");
	monControleur->CnxComboBox_BDD(comboBoxNatureArticleAfficher, "select nature from article");
	monControleur->CnxComboBox_BDD(comboBoxArticleAjouter, "select nom_article from article");
	monControleur->CnxComboBox_BDD(comboBoxNomClientAjouter, "select nom_client,prenom from client");
	monControleur->CnxComboBox_BDD(comboBoxArtcileModifier, "select nom_article from article");
	monControleur->CnxComboBox_BDD(comboBoxNomClientModifier, "select nom_client,prenom from client");
	monControleur->CnxComboBox_BDD(comboBoxRefModifier, "select ref from commande");
	monControleur->CnxComboBox_BDD(comboBoxRefSupprimer, "select ref from Commande");

	monControleur->chargementdata(dataGridViewRechercherCommande, "select * from commande");

}
private: System::Void BtnLabelRechercherCommande_Click(System::Object ^ sender, System::EventArgs ^ e) {
	monControleur->gestion_panel(PanelAfficherCommande, PanelAjouterCommande, PanelModifierCommande, PanelSupprimerCommande, true);
	monControleur->CnxComboBox_BDD(BoxReferenceAfficher, "select ref from commande");
	monControleur->CnxComboBox_BDD(comboBoxNatureArticleAfficher, "select nature from article");
}



private: System::Void afficherUnPersonnelToolStripMenuItem_Click(System::Object ^ sender, System::EventArgs ^ e) {
	this->Hide();
	monControleur->afficher_form("personnel", 2);
}
private: System::Void ajouterUnPersonnelToolStripMenuItem_Click(System::Object ^ sender, System::EventArgs ^ e) {
	this->Hide();
	monControleur->afficher_form("personnel", 1);
}
private: System::Void modifierUnPersonnelToolStripMenuItem_Click(System::Object ^ sender, System::EventArgs ^ e) {
	this->Hide();
	monControleur->afficher_form("personnel", 3);
}
private: System::Void supprimerUnPersonnelToolStripMenuItem_Click(System::Object ^ sender, System::EventArgs ^ e) {
	this->Hide();
	monControleur->afficher_form("personnel", 4);
}


private: System::Void afficherUnClientToolStripMenuItem_Click(System::Object ^ sender, System::EventArgs ^ e) {
	this->Hide();
	monControleur->afficher_form("client", 2);
}
private: System::Void ajouterUnClientToolStripMenuItem_Click(System::Object ^ sender, System::EventArgs ^ e) {
	this->Hide();
	monControleur->afficher_form("client", 1);
}
private: System::Void modifierUnClientToolStripMenuItem_Click(System::Object ^ sender, System::EventArgs ^ e) {
	this->Hide();
	monControleur->afficher_form("client", 3);
}
private: System::Void supprimerUnClientToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	monControleur->afficher_form("client", 4);
}
private: System::Void BtnLabelAjouterCommande_Click(System::Object^ sender, System::EventArgs^ e) {
	monControleur->gestion_panel(PanelAjouterCommande, PanelModifierCommande, PanelAfficherCommande, PanelSupprimerCommande, true);
	monControleur->CnxComboBox_BDD(comboBoxArticleAjouter, "select nom_article from article");
	monControleur->CnxComboBox_BDD(comboBoxNomClientAjouter, "select nom_client,prenom from client");
}




private: System::Void afficherLesCommandesToolStripMenuItem_Click(System::Object ^ sender, System::EventArgs ^ e) {
	monControleur->gestion_panel(PanelAfficherCommande, PanelAjouterCommande, PanelModifierCommande, PanelSupprimerCommande, true);
	
}
private: System::Void ajouterUneCommandeToolStripMenuItem_Click(System::Object ^ sender, System::EventArgs ^ e) {
	monControleur->gestion_panel(PanelAjouterCommande, PanelAfficherCommande, PanelModifierCommande, PanelSupprimerCommande, true);
}
private: System::Void modifierUneCommandeToolStripMenuItem_Click(System::Object ^ sender, System::EventArgs ^ e) {
	monControleur->gestion_panel(PanelModifierCommande, PanelAjouterCommande, PanelAfficherCommande, PanelSupprimerCommande, true);
}
private: System::Void supprimeruneCommandeToolStripMenuItem_Click(System::Object ^ sender, System::EventArgs ^ e) {
	monControleur->gestion_panel(PanelSupprimerCommande, PanelAjouterCommande, PanelAfficherCommande, PanelModifierCommande, true);
}

private: System::Void afficherLeStockToolStripMenuItem_Click(System::Object ^ sender, System::EventArgs ^ e) {
	this->Hide();
	monControleur->afficher_form("article", 2);
}
private: System::Void ajouterUnArticleToolStripMenuItem_Click(System::Object ^ sender, System::EventArgs ^ e) {
	this->Hide();
	monControleur->afficher_form("article", 1);
}
private: System::Void modifierUnArticleToolStripMenuItem_Click(System::Object ^ sender, System::EventArgs ^ e) {
	this->Hide();
	monControleur->afficher_form("article", 3);
}
private: System::Void supprimerUnArticleToolStripMenuItem_Click(System::Object ^ sender, System::EventArgs ^ e) {
	this->Hide();
	monControleur->afficher_form("article", 4);
}

private: System::Void statistiqueToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	monControleur->afficher_form("stats", 0);
}

private: System::Void BtnLabelModifierCommande_Click(System::Object^ sender, System::EventArgs^ e) {
	monControleur->gestion_panel(PanelModifierCommande, PanelAjouterCommande, PanelSupprimerCommande, PanelAfficherCommande, true);
	monControleur->CnxComboBox_BDD(comboBoxArtcileModifier, "select nom_article from article");
	monControleur->CnxComboBox_BDD(comboBoxNomClientModifier, "select nom_client,prenom from client");
	monControleur->CnxComboBox_BDD(comboBoxRefModifier, "select ref from commande");
	
}


private: System::Void BtnLabelSupprimerCommande_Click(System::Object^ sender, System::EventArgs^ e) {
	monControleur->gestion_panel(PanelSupprimerCommande, PanelAjouterCommande, PanelModifierCommande, PanelAfficherCommande, true);
	monControleur->CnxComboBox_BDD(comboBoxRefSupprimer, "select ref from Commande");
}


private: System::Void BtncreerCommande_Click(System::Object^ sender, System::EventArgs^ e) {
	PanelAjouterCommande->Visible = false;
	panel1->Visible = true;
	monControleur->ajouterCommande(dateTimePickerCommandeAjouter, dateTimePickerEmmisionAjouter, dateTimePickerLivraisonAjouter, dateTimePickerPaimentAjouter, comboBoxNomClientAjouter, comboBoxMoyenPaimentAjouter,TBRefAjouter, false);
	monControleur->gridArticleAjouterCmd(dataGridViewArticleCommandeAjouter, "select nom_article,nature,couleur,prix_HT,stock from article");
}



private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) 
{
	PanelAjouterCommande->Visible = true;
	panel1->Visible = false;
}


private: System::Void BtnValider_Click(System::Object^ sender, System::EventArgs^ e) 
{
	monControleur->gridArticleAjouterCmd(dataGridViewArticleCommandeAjouter, "select nom_article,nature,couleur,prix_HT,stock from article where nom_article = '" + comboBoxArticleAjouter->Text + "'");
}


private: System::Void BtnAjouterArticleAjouter_Click(System::Object^ sender, System::EventArgs^ e) 
{
	monControleur->ajouterArticleCommande(dataGridViewArticleCommandeAjouter,numericUpDownQuantitéAjouter);
}



private: System::Void BtnAjouterCommande_Click(System::Object^ sender, System::EventArgs^ e) 
{
	monControleur->ajouterCommande(dateTimePickerCommandeAjouter, dateTimePickerEmmisionAjouter, dateTimePickerLivraisonAjouter, dateTimePickerPaimentAjouter, comboBoxNomClientAjouter, comboBoxMoyenPaimentAjouter,TBRefAjouter, true);
}




private: System::Void BtnRechercherCommande_Click(System::Object^ sender, System::EventArgs^ e) 
{
	monControleur->afficherCommande(dataGridViewRechercherCommande, BoxReferenceAfficher, comboBoxNatureArticleAfficher, comboBoxMoyenPaiementAfficher, dateTimePickerDateCommandeAfficher, numericUpDownNbrArticleAfficher);
}




private: System::Void BtnSupprimer_Click(System::Object^ sender, System::EventArgs^ e) 
{
	monControleur->supprimerCommande(comboBoxRefSupprimer);
}


private: System::Void BtnValiderModifier_Click(System::Object^ sender, System::EventArgs^ e) 
{
	monControleur->afficherModifierCommande(comboBoxRefModifier, comboBoxArtcileModifier, comboBoxNomClientModifier, comboBoxMoyenPaiementModifier, TBRefModifier, dateTimePickerCommandeModifier, dateTimePickerEnvoiModifier, dateTimePickerLivraisonModifier, dateTimePickerPaiementModifier, numericUpDownModifier, dataGridViewModifier);
}


private: System::Void BtnAffficherArticleCommande_Click(System::Object^ sender, System::EventArgs^ e) 
{
	monControleur->racourci(dataGridViewModifier);

}


private: System::Void BtnSupprimerArticleModifier_Click(System::Object^ sender, System::EventArgs^ e) 
{
	monControleur->supprimerArticleCommande(dataGridViewModifier);
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
{
	monControleur->afficherArticle(dataGridViewModifier, comboBoxArtcileModifier);

}
private: System::Void BtnAjouterArticleModifier_Click(System::Object^ sender, System::EventArgs^ e) 
{
	monControleur->ajouterArticleCommande(dataGridViewModifier, numericUpDownModifier);
}
private: System::Void BtnModifierCommande_Click(System::Object^ sender, System::EventArgs^ e) 
{
	monControleur->modifierCommande(dateTimePickerCommandeModifier, dateTimePickerEnvoiModifier, dateTimePickerLivraisonModifier, dateTimePickerPaiementModifier, comboBoxNomClientModifier, comboBoxMoyenPaiementModifier);
}
	   public: void setPanelAff(int);


	   //private: void From_FormsClose(Object^ sender, FormClosedEventArgs^ e) {
		   //Application::Exit();
	   //}
private: System::Void monCompteToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	monControleur->afficher_form("monCompte", 0);
}
};
}

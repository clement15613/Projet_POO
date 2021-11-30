#pragma once

namespace CodeProjet {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de Article
	/// </summary>
	public ref class Article : public System::Windows::Forms::Form
	{
	public:
		Article(void)
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
		~Article()
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
	private: System::Windows::Forms::Button^ BtnLabelSupprimerArticle;
	private: System::Windows::Forms::Button^ BtnLabelModifierArticle;
	private: System::Windows::Forms::Button^ BtnLabelRechercherArticle;
	private: System::Windows::Forms::Button^ BtnLabelAjouterArticle;
	private: System::Windows::Forms::Panel^ PanelAjouterArticle;
	private: System::Windows::Forms::Label^ LQuantiteStockAjouter;

	private: System::Windows::Forms::Label^ LSeuilApprovisionnementAjouter;

	private: System::Windows::Forms::Label^ LTauxTvaAjouter;
	private: System::Windows::Forms::Label^ LPrixHTAjouter;
	private: System::Windows::Forms::Label^ LCouleurAjouter;
	private: System::Windows::Forms::Label^ LNatureAjouter;
	private: System::Windows::Forms::Label^ LNomArticleAjouter;
	private: System::Windows::Forms::TextBox^ TBStockAjouter;

	private: System::Windows::Forms::TextBox^ TBNatureAjouter;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ TBCouleurAjouter;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ TBPrixHTAjouter;
	private: System::Windows::Forms::TextBox^ TBNomArticleAjouter;
	private: System::Windows::Forms::Panel^ PanelModifier;

	private: System::Windows::Forms::Button^ BtnModifier;
	private: System::Windows::Forms::Label^ LQuantiteModifier;

	private: System::Windows::Forms::Label^ LSeuilModifier;

	private: System::Windows::Forms::Label^ LTauxTvaModifier;

	private: System::Windows::Forms::Label^ LPrixHtModifier;
	private: System::Windows::Forms::Label^ LCouleurModifier;
	private: System::Windows::Forms::Label^ LNatureModifier;
	private: System::Windows::Forms::Label^ LNomArticleModifier;
	private: System::Windows::Forms::TextBox^ TBQuantiteModifier;

	private: System::Windows::Forms::TextBox^ TBNatureModifier;
	private: System::Windows::Forms::TextBox^ TBSeuilModifier;

	private: System::Windows::Forms::TextBox^ TBCouleurModifier;
	private: System::Windows::Forms::TextBox^ TBTauxTvaModifier;

	private: System::Windows::Forms::TextBox^ TBPrixHTModifier;

	private: System::Windows::Forms::TextBox^ TBNomArticleModifier;
	private: System::Windows::Forms::Button^ BtnAjouter;
	private: System::Windows::Forms::Panel^ PanelAfficherArticle;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ LCouleurAfficher;
	private: System::Windows::Forms::ComboBox^ comboBoxCouleurAfficher;
	private: System::Windows::Forms::Label^ LNomArticleAfficher;
	private: System::Windows::Forms::ComboBox^ comboBoxNomArticleAfficher;
	private: System::Windows::Forms::Label^ LStockAfficher;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownStockAfficher;
	private: System::Windows::Forms::Button^ BtnRechercherCommande;
	private: System::Windows::Forms::Label^ LNatureArticleAfficher;
	private: System::Windows::Forms::ComboBox^ comboBoxNatureArticleAfficher;
	private: System::Windows::Forms::Label^ LQuestionAfficher;
	private: System::Windows::Forms::DataGridView^ dataGridViewRechercherCommande;
private: System::Windows::Forms::Panel^ PanelSupprimerArticle;
private: System::Windows::Forms::ComboBox^ comboBox1;
private: System::Windows::Forms::Button^ BtnSupprimer;
private: System::Windows::Forms::Label^ LQuestionSupprimer;


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
			this->BtnLabelSupprimerArticle = (gcnew System::Windows::Forms::Button());
			this->BtnLabelModifierArticle = (gcnew System::Windows::Forms::Button());
			this->BtnLabelRechercherArticle = (gcnew System::Windows::Forms::Button());
			this->BtnLabelAjouterArticle = (gcnew System::Windows::Forms::Button());
			this->PanelAjouterArticle = (gcnew System::Windows::Forms::Panel());
			this->PanelModifier = (gcnew System::Windows::Forms::Panel());
			this->PanelAfficherArticle = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->LCouleurAfficher = (gcnew System::Windows::Forms::Label());
			this->comboBoxCouleurAfficher = (gcnew System::Windows::Forms::ComboBox());
			this->LNomArticleAfficher = (gcnew System::Windows::Forms::Label());
			this->comboBoxNomArticleAfficher = (gcnew System::Windows::Forms::ComboBox());
			this->LStockAfficher = (gcnew System::Windows::Forms::Label());
			this->numericUpDownStockAfficher = (gcnew System::Windows::Forms::NumericUpDown());
			this->BtnRechercherCommande = (gcnew System::Windows::Forms::Button());
			this->LNatureArticleAfficher = (gcnew System::Windows::Forms::Label());
			this->comboBoxNatureArticleAfficher = (gcnew System::Windows::Forms::ComboBox());
			this->LQuestionAfficher = (gcnew System::Windows::Forms::Label());
			this->dataGridViewRechercherCommande = (gcnew System::Windows::Forms::DataGridView());
			this->BtnModifier = (gcnew System::Windows::Forms::Button());
			this->LQuantiteModifier = (gcnew System::Windows::Forms::Label());
			this->LSeuilModifier = (gcnew System::Windows::Forms::Label());
			this->LTauxTvaModifier = (gcnew System::Windows::Forms::Label());
			this->LPrixHtModifier = (gcnew System::Windows::Forms::Label());
			this->LCouleurModifier = (gcnew System::Windows::Forms::Label());
			this->LNatureModifier = (gcnew System::Windows::Forms::Label());
			this->LNomArticleModifier = (gcnew System::Windows::Forms::Label());
			this->TBQuantiteModifier = (gcnew System::Windows::Forms::TextBox());
			this->TBNatureModifier = (gcnew System::Windows::Forms::TextBox());
			this->TBSeuilModifier = (gcnew System::Windows::Forms::TextBox());
			this->TBCouleurModifier = (gcnew System::Windows::Forms::TextBox());
			this->TBTauxTvaModifier = (gcnew System::Windows::Forms::TextBox());
			this->TBPrixHTModifier = (gcnew System::Windows::Forms::TextBox());
			this->TBNomArticleModifier = (gcnew System::Windows::Forms::TextBox());
			this->BtnAjouter = (gcnew System::Windows::Forms::Button());
			this->LQuantiteStockAjouter = (gcnew System::Windows::Forms::Label());
			this->LSeuilApprovisionnementAjouter = (gcnew System::Windows::Forms::Label());
			this->LTauxTvaAjouter = (gcnew System::Windows::Forms::Label());
			this->LPrixHTAjouter = (gcnew System::Windows::Forms::Label());
			this->LCouleurAjouter = (gcnew System::Windows::Forms::Label());
			this->LNatureAjouter = (gcnew System::Windows::Forms::Label());
			this->LNomArticleAjouter = (gcnew System::Windows::Forms::Label());
			this->TBStockAjouter = (gcnew System::Windows::Forms::TextBox());
			this->TBNatureAjouter = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->TBCouleurAjouter = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->TBPrixHTAjouter = (gcnew System::Windows::Forms::TextBox());
			this->TBNomArticleAjouter = (gcnew System::Windows::Forms::TextBox());
			this->PanelSupprimerArticle = (gcnew System::Windows::Forms::Panel());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->BtnSupprimer = (gcnew System::Windows::Forms::Button());
			this->LQuestionSupprimer = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->PanelAjouterArticle->SuspendLayout();
			this->PanelModifier->SuspendLayout();
			this->PanelAfficherArticle->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownStockAfficher))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewRechercherCommande))->BeginInit();
			this->PanelSupprimerArticle->SuspendLayout();
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
			this->menuStrip1->Location = System::Drawing::Point(136, 9);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(909, 45);
			this->menuStrip1->TabIndex = 7;
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
			// BtnLabelSupprimerArticle
			// 
			this->BtnLabelSupprimerArticle->Location = System::Drawing::Point(190, 375);
			this->BtnLabelSupprimerArticle->Name = L"BtnLabelSupprimerArticle";
			this->BtnLabelSupprimerArticle->Size = System::Drawing::Size(157, 76);
			this->BtnLabelSupprimerArticle->TabIndex = 14;
			this->BtnLabelSupprimerArticle->Text = L"Supprimer un article";
			this->BtnLabelSupprimerArticle->UseVisualStyleBackColor = true;
			this->BtnLabelSupprimerArticle->Click += gcnew System::EventHandler(this, &Article::BtnLabelSupprimerArticle_Click);
			// 
			// BtnLabelModifierArticle
			// 
			this->BtnLabelModifierArticle->Location = System::Drawing::Point(31, 375);
			this->BtnLabelModifierArticle->Name = L"BtnLabelModifierArticle";
			this->BtnLabelModifierArticle->Size = System::Drawing::Size(155, 76);
			this->BtnLabelModifierArticle->TabIndex = 13;
			this->BtnLabelModifierArticle->Text = L"Modifier les informations \r\nd\'un article";
			this->BtnLabelModifierArticle->UseVisualStyleBackColor = true;
			this->BtnLabelModifierArticle->Click += gcnew System::EventHandler(this, &Article::BtnLabelModifierArticle_Click);
			// 
			// BtnLabelRechercherArticle
			// 
			this->BtnLabelRechercherArticle->Location = System::Drawing::Point(192, 293);
			this->BtnLabelRechercherArticle->Name = L"BtnLabelRechercherArticle";
			this->BtnLabelRechercherArticle->Size = System::Drawing::Size(155, 76);
			this->BtnLabelRechercherArticle->TabIndex = 12;
			this->BtnLabelRechercherArticle->Text = L"Rechercher un article";
			this->BtnLabelRechercherArticle->UseVisualStyleBackColor = true;
			this->BtnLabelRechercherArticle->Click += gcnew System::EventHandler(this, &Article::BtnLabelRechercherArticle_Click);
			// 
			// BtnLabelAjouterArticle
			// 
			this->BtnLabelAjouterArticle->Location = System::Drawing::Point(31, 293);
			this->BtnLabelAjouterArticle->Name = L"BtnLabelAjouterArticle";
			this->BtnLabelAjouterArticle->Size = System::Drawing::Size(155, 76);
			this->BtnLabelAjouterArticle->TabIndex = 11;
			this->BtnLabelAjouterArticle->Text = L"Ajouter un nouvel\r\narticle";
			this->BtnLabelAjouterArticle->UseVisualStyleBackColor = true;
			this->BtnLabelAjouterArticle->Click += gcnew System::EventHandler(this, &Article::BtnLabelAjouterArticle_Click);
			// 
			// PanelAjouterArticle
			// 
			this->PanelAjouterArticle->Controls->Add(this->BtnAjouter);
			this->PanelAjouterArticle->Controls->Add(this->LQuantiteStockAjouter);
			this->PanelAjouterArticle->Controls->Add(this->LSeuilApprovisionnementAjouter);
			this->PanelAjouterArticle->Controls->Add(this->LTauxTvaAjouter);
			this->PanelAjouterArticle->Controls->Add(this->LPrixHTAjouter);
			this->PanelAjouterArticle->Controls->Add(this->LCouleurAjouter);
			this->PanelAjouterArticle->Controls->Add(this->LNatureAjouter);
			this->PanelAjouterArticle->Controls->Add(this->LNomArticleAjouter);
			this->PanelAjouterArticle->Controls->Add(this->TBStockAjouter);
			this->PanelAjouterArticle->Controls->Add(this->TBNatureAjouter);
			this->PanelAjouterArticle->Controls->Add(this->textBox5);
			this->PanelAjouterArticle->Controls->Add(this->TBCouleurAjouter);
			this->PanelAjouterArticle->Controls->Add(this->textBox3);
			this->PanelAjouterArticle->Controls->Add(this->TBPrixHTAjouter);
			this->PanelAjouterArticle->Controls->Add(this->TBNomArticleAjouter);
			this->PanelAjouterArticle->Location = System::Drawing::Point(424, 95);
			this->PanelAjouterArticle->Name = L"PanelAjouterArticle";
			this->PanelAjouterArticle->Size = System::Drawing::Size(781, 540);
			this->PanelAjouterArticle->TabIndex = 15;
			// 
			// PanelModifier
			// 
			this->PanelModifier->Controls->Add(this->BtnModifier);
			this->PanelModifier->Controls->Add(this->LQuantiteModifier);
			this->PanelModifier->Controls->Add(this->LSeuilModifier);
			this->PanelModifier->Controls->Add(this->LTauxTvaModifier);
			this->PanelModifier->Controls->Add(this->LPrixHtModifier);
			this->PanelModifier->Controls->Add(this->LCouleurModifier);
			this->PanelModifier->Controls->Add(this->LNatureModifier);
			this->PanelModifier->Controls->Add(this->LNomArticleModifier);
			this->PanelModifier->Controls->Add(this->TBQuantiteModifier);
			this->PanelModifier->Controls->Add(this->TBNatureModifier);
			this->PanelModifier->Controls->Add(this->TBSeuilModifier);
			this->PanelModifier->Controls->Add(this->TBCouleurModifier);
			this->PanelModifier->Controls->Add(this->TBTauxTvaModifier);
			this->PanelModifier->Controls->Add(this->TBPrixHTModifier);
			this->PanelModifier->Controls->Add(this->TBNomArticleModifier);
			this->PanelModifier->Location = System::Drawing::Point(424, 95);
			this->PanelModifier->Name = L"PanelModifier";
			this->PanelModifier->Size = System::Drawing::Size(781, 540);
			this->PanelModifier->TabIndex = 16;
			// 
			// PanelAfficherArticle
			// 
			this->PanelAfficherArticle->Controls->Add(this->button1);
			this->PanelAfficherArticle->Controls->Add(this->LCouleurAfficher);
			this->PanelAfficherArticle->Controls->Add(this->comboBoxCouleurAfficher);
			this->PanelAfficherArticle->Controls->Add(this->LNomArticleAfficher);
			this->PanelAfficherArticle->Controls->Add(this->comboBoxNomArticleAfficher);
			this->PanelAfficherArticle->Controls->Add(this->LStockAfficher);
			this->PanelAfficherArticle->Controls->Add(this->numericUpDownStockAfficher);
			this->PanelAfficherArticle->Controls->Add(this->BtnRechercherCommande);
			this->PanelAfficherArticle->Controls->Add(this->LNatureArticleAfficher);
			this->PanelAfficherArticle->Controls->Add(this->comboBoxNatureArticleAfficher);
			this->PanelAfficherArticle->Controls->Add(this->LQuestionAfficher);
			this->PanelAfficherArticle->Controls->Add(this->dataGridViewRechercherCommande);
			this->PanelAfficherArticle->Location = System::Drawing::Point(405, 84);
			this->PanelAfficherArticle->Name = L"PanelAfficherArticle";
			this->PanelAfficherArticle->Size = System::Drawing::Size(964, 611);
			this->PanelAfficherArticle->TabIndex = 28;
			this->PanelAfficherArticle->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Article::PanelAfficherArticle_Paint);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(292, 133);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(154, 37);
			this->button1->TabIndex = 19;
			this->button1->Text = L"Article sous le seuil\r\nde réapprovisionnement";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// LCouleurAfficher
			// 
			this->LCouleurAfficher->AutoSize = true;
			this->LCouleurAfficher->Location = System::Drawing::Point(54, 133);
			this->LCouleurAfficher->Name = L"LCouleurAfficher";
			this->LCouleurAfficher->Size = System::Drawing::Size(43, 13);
			this->LCouleurAfficher->TabIndex = 18;
			this->LCouleurAfficher->Text = L"Couleur";
			// 
			// comboBoxCouleurAfficher
			// 
			this->comboBoxCouleurAfficher->FormattingEnabled = true;
			this->comboBoxCouleurAfficher->Location = System::Drawing::Point(57, 149);
			this->comboBoxCouleurAfficher->Name = L"comboBoxCouleurAfficher";
			this->comboBoxCouleurAfficher->Size = System::Drawing::Size(121, 21);
			this->comboBoxCouleurAfficher->TabIndex = 17;
			// 
			// LNomArticleAfficher
			// 
			this->LNomArticleAfficher->AutoSize = true;
			this->LNomArticleAfficher->Location = System::Drawing::Point(54, 78);
			this->LNomArticleAfficher->Name = L"LNomArticleAfficher";
			this->LNomArticleAfficher->Size = System::Drawing::Size(79, 13);
			this->LNomArticleAfficher->TabIndex = 16;
			this->LNomArticleAfficher->Text = L"Nom de l\'article";
			// 
			// comboBoxNomArticleAfficher
			// 
			this->comboBoxNomArticleAfficher->FormattingEnabled = true;
			this->comboBoxNomArticleAfficher->Location = System::Drawing::Point(57, 94);
			this->comboBoxNomArticleAfficher->Name = L"comboBoxNomArticleAfficher";
			this->comboBoxNomArticleAfficher->Size = System::Drawing::Size(121, 21);
			this->comboBoxNomArticleAfficher->TabIndex = 15;
			// 
			// LStockAfficher
			// 
			this->LStockAfficher->AutoSize = true;
			this->LStockAfficher->Location = System::Drawing::Point(567, 78);
			this->LStockAfficher->Name = L"LStockAfficher";
			this->LStockAfficher->Size = System::Drawing::Size(35, 13);
			this->LStockAfficher->TabIndex = 14;
			this->LStockAfficher->Text = L"Stock";
			// 
			// numericUpDownStockAfficher
			// 
			this->numericUpDownStockAfficher->Location = System::Drawing::Point(570, 94);
			this->numericUpDownStockAfficher->Name = L"numericUpDownStockAfficher";
			this->numericUpDownStockAfficher->Size = System::Drawing::Size(81, 20);
			this->numericUpDownStockAfficher->TabIndex = 13;
			// 
			// BtnRechercherCommande
			// 
			this->BtnRechercherCommande->Location = System::Drawing::Point(570, 133);
			this->BtnRechercherCommande->Name = L"BtnRechercherCommande";
			this->BtnRechercherCommande->Size = System::Drawing::Size(151, 38);
			this->BtnRechercherCommande->TabIndex = 12;
			this->BtnRechercherCommande->Text = L"Rechercher";
			this->BtnRechercherCommande->UseVisualStyleBackColor = true;
			// 
			// LNatureArticleAfficher
			// 
			this->LNatureArticleAfficher->AutoSize = true;
			this->LNatureArticleAfficher->Location = System::Drawing::Point(303, 78);
			this->LNatureArticleAfficher->Name = L"LNatureArticleAfficher";
			this->LNatureArticleAfficher->Size = System::Drawing::Size(89, 13);
			this->LNatureArticleAfficher->TabIndex = 9;
			this->LNatureArticleAfficher->Text = L"Nature de l\'article";
			// 
			// comboBoxNatureArticleAfficher
			// 
			this->comboBoxNatureArticleAfficher->FormattingEnabled = true;
			this->comboBoxNatureArticleAfficher->Location = System::Drawing::Point(306, 94);
			this->comboBoxNatureArticleAfficher->Name = L"comboBoxNatureArticleAfficher";
			this->comboBoxNatureArticleAfficher->Size = System::Drawing::Size(121, 21);
			this->comboBoxNatureArticleAfficher->TabIndex = 4;
			// 
			// LQuestionAfficher
			// 
			this->LQuestionAfficher->AutoSize = true;
			this->LQuestionAfficher->Location = System::Drawing::Point(54, 52);
			this->LQuestionAfficher->Name = L"LQuestionAfficher";
			this->LQuestionAfficher->Size = System::Drawing::Size(223, 13);
			this->LQuestionAfficher->TabIndex = 1;
			this->LQuestionAfficher->Text = L"Quel(s) est/sont le/les critères de recherche \?";
			// 
			// dataGridViewRechercherCommande
			// 
			this->dataGridViewRechercherCommande->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewRechercherCommande->Location = System::Drawing::Point(57, 179);
			this->dataGridViewRechercherCommande->Name = L"dataGridViewRechercherCommande";
			this->dataGridViewRechercherCommande->Size = System::Drawing::Size(664, 343);
			this->dataGridViewRechercherCommande->TabIndex = 0;
			// 
			// BtnModifier
			// 
			this->BtnModifier->Location = System::Drawing::Point(471, 403);
			this->BtnModifier->Name = L"BtnModifier";
			this->BtnModifier->Size = System::Drawing::Size(104, 29);
			this->BtnModifier->TabIndex = 14;
			this->BtnModifier->Text = L"Modifier";
			this->BtnModifier->UseVisualStyleBackColor = true;
			// 
			// LQuantiteModifier
			// 
			this->LQuantiteModifier->AutoSize = true;
			this->LQuantiteModifier->Location = System::Drawing::Point(101, 411);
			this->LQuantiteModifier->Name = L"LQuantiteModifier";
			this->LQuantiteModifier->Size = System::Drawing::Size(100, 13);
			this->LQuantiteModifier->TabIndex = 13;
			this->LQuantiteModifier->Text = L"Quantité en stock : ";
			// 
			// LSeuilModifier
			// 
			this->LSeuilModifier->AutoSize = true;
			this->LSeuilModifier->Location = System::Drawing::Point(392, 303);
			this->LSeuilModifier->Name = L"LSeuilModifier";
			this->LSeuilModifier->Size = System::Drawing::Size(130, 13);
			this->LSeuilModifier->TabIndex = 12;
			this->LSeuilModifier->Text = L"Seuil d\'approvisionnement";
			// 
			// LTauxTvaModifier
			// 
			this->LTauxTvaModifier->AutoSize = true;
			this->LTauxTvaModifier->Location = System::Drawing::Point(392, 222);
			this->LTauxTvaModifier->Name = L"LTauxTvaModifier";
			this->LTauxTvaModifier->Size = System::Drawing::Size(55, 13);
			this->LTauxTvaModifier->TabIndex = 11;
			this->LTauxTvaModifier->Text = L"Taux TVA";
			// 
			// LPrixHtModifier
			// 
			this->LPrixHtModifier->AutoSize = true;
			this->LPrixHtModifier->Location = System::Drawing::Point(392, 137);
			this->LPrixHtModifier->Name = L"LPrixHtModifier";
			this->LPrixHtModifier->Size = System::Drawing::Size(70, 13);
			this->LPrixHtModifier->TabIndex = 10;
			this->LPrixHtModifier->Text = L"Prix hors-taxe";
			// 
			// LCouleurModifier
			// 
			this->LCouleurModifier->AutoSize = true;
			this->LCouleurModifier->Location = System::Drawing::Point(101, 303);
			this->LCouleurModifier->Name = L"LCouleurModifier";
			this->LCouleurModifier->Size = System::Drawing::Size(93, 13);
			this->LCouleurModifier->TabIndex = 9;
			this->LCouleurModifier->Text = L"Couleur de l\'article";
			// 
			// LNatureModifier
			// 
			this->LNatureModifier->AutoSize = true;
			this->LNatureModifier->Location = System::Drawing::Point(101, 222);
			this->LNatureModifier->Name = L"LNatureModifier";
			this->LNatureModifier->Size = System::Drawing::Size(39, 13);
			this->LNatureModifier->TabIndex = 8;
			this->LNatureModifier->Text = L"Nature";
			// 
			// LNomArticleModifier
			// 
			this->LNomArticleModifier->AutoSize = true;
			this->LNomArticleModifier->Location = System::Drawing::Point(101, 137);
			this->LNomArticleModifier->Name = L"LNomArticleModifier";
			this->LNomArticleModifier->Size = System::Drawing::Size(79, 13);
			this->LNomArticleModifier->TabIndex = 7;
			this->LNomArticleModifier->Text = L"Nom de l\'article";
			// 
			// TBQuantiteModifier
			// 
			this->TBQuantiteModifier->Location = System::Drawing::Point(207, 408);
			this->TBQuantiteModifier->Name = L"TBQuantiteModifier";
			this->TBQuantiteModifier->Size = System::Drawing::Size(216, 20);
			this->TBQuantiteModifier->TabIndex = 6;
			// 
			// TBNatureModifier
			// 
			this->TBNatureModifier->Location = System::Drawing::Point(104, 238);
			this->TBNatureModifier->Name = L"TBNatureModifier";
			this->TBNatureModifier->Size = System::Drawing::Size(171, 20);
			this->TBNatureModifier->TabIndex = 5;
			// 
			// TBSeuilModifier
			// 
			this->TBSeuilModifier->Location = System::Drawing::Point(395, 319);
			this->TBSeuilModifier->Name = L"TBSeuilModifier";
			this->TBSeuilModifier->Size = System::Drawing::Size(208, 20);
			this->TBSeuilModifier->TabIndex = 4;
			// 
			// TBCouleurModifier
			// 
			this->TBCouleurModifier->Location = System::Drawing::Point(104, 319);
			this->TBCouleurModifier->Name = L"TBCouleurModifier";
			this->TBCouleurModifier->Size = System::Drawing::Size(171, 20);
			this->TBCouleurModifier->TabIndex = 3;
			// 
			// TBTauxTvaModifier
			// 
			this->TBTauxTvaModifier->Location = System::Drawing::Point(395, 238);
			this->TBTauxTvaModifier->Name = L"TBTauxTvaModifier";
			this->TBTauxTvaModifier->Size = System::Drawing::Size(208, 20);
			this->TBTauxTvaModifier->TabIndex = 2;
			// 
			// TBPrixHTModifier
			// 
			this->TBPrixHTModifier->Location = System::Drawing::Point(395, 153);
			this->TBPrixHTModifier->Name = L"TBPrixHTModifier";
			this->TBPrixHTModifier->Size = System::Drawing::Size(208, 20);
			this->TBPrixHTModifier->TabIndex = 1;
			// 
			// TBNomArticleModifier
			// 
			this->TBNomArticleModifier->Location = System::Drawing::Point(104, 153);
			this->TBNomArticleModifier->Name = L"TBNomArticleModifier";
			this->TBNomArticleModifier->Size = System::Drawing::Size(171, 20);
			this->TBNomArticleModifier->TabIndex = 0;
			// 
			// BtnAjouter
			// 
			this->BtnAjouter->Location = System::Drawing::Point(471, 403);
			this->BtnAjouter->Name = L"BtnAjouter";
			this->BtnAjouter->Size = System::Drawing::Size(104, 29);
			this->BtnAjouter->TabIndex = 14;
			this->BtnAjouter->Text = L"Ajouter";
			this->BtnAjouter->UseVisualStyleBackColor = true;
			// 
			// LQuantiteStockAjouter
			// 
			this->LQuantiteStockAjouter->AutoSize = true;
			this->LQuantiteStockAjouter->Location = System::Drawing::Point(101, 411);
			this->LQuantiteStockAjouter->Name = L"LQuantiteStockAjouter";
			this->LQuantiteStockAjouter->Size = System::Drawing::Size(100, 13);
			this->LQuantiteStockAjouter->TabIndex = 13;
			this->LQuantiteStockAjouter->Text = L"Quantité en stock : ";
			// 
			// LSeuilApprovisionnementAjouter
			// 
			this->LSeuilApprovisionnementAjouter->AutoSize = true;
			this->LSeuilApprovisionnementAjouter->Location = System::Drawing::Point(392, 303);
			this->LSeuilApprovisionnementAjouter->Name = L"LSeuilApprovisionnementAjouter";
			this->LSeuilApprovisionnementAjouter->Size = System::Drawing::Size(130, 13);
			this->LSeuilApprovisionnementAjouter->TabIndex = 12;
			this->LSeuilApprovisionnementAjouter->Text = L"Seuil d\'approvisionnement";
			this->LSeuilApprovisionnementAjouter->Click += gcnew System::EventHandler(this, &Article::label6_Click);
			// 
			// LTauxTvaAjouter
			// 
			this->LTauxTvaAjouter->AutoSize = true;
			this->LTauxTvaAjouter->Location = System::Drawing::Point(392, 222);
			this->LTauxTvaAjouter->Name = L"LTauxTvaAjouter";
			this->LTauxTvaAjouter->Size = System::Drawing::Size(55, 13);
			this->LTauxTvaAjouter->TabIndex = 11;
			this->LTauxTvaAjouter->Text = L"Taux TVA";
			// 
			// LPrixHTAjouter
			// 
			this->LPrixHTAjouter->AutoSize = true;
			this->LPrixHTAjouter->Location = System::Drawing::Point(392, 137);
			this->LPrixHTAjouter->Name = L"LPrixHTAjouter";
			this->LPrixHTAjouter->Size = System::Drawing::Size(70, 13);
			this->LPrixHTAjouter->TabIndex = 10;
			this->LPrixHTAjouter->Text = L"Prix hors-taxe";
			// 
			// LCouleurAjouter
			// 
			this->LCouleurAjouter->AutoSize = true;
			this->LCouleurAjouter->Location = System::Drawing::Point(101, 303);
			this->LCouleurAjouter->Name = L"LCouleurAjouter";
			this->LCouleurAjouter->Size = System::Drawing::Size(93, 13);
			this->LCouleurAjouter->TabIndex = 9;
			this->LCouleurAjouter->Text = L"Couleur de l\'article";
			// 
			// LNatureAjouter
			// 
			this->LNatureAjouter->AutoSize = true;
			this->LNatureAjouter->Location = System::Drawing::Point(101, 222);
			this->LNatureAjouter->Name = L"LNatureAjouter";
			this->LNatureAjouter->Size = System::Drawing::Size(39, 13);
			this->LNatureAjouter->TabIndex = 8;
			this->LNatureAjouter->Text = L"Nature";
			// 
			// LNomArticleAjouter
			// 
			this->LNomArticleAjouter->AutoSize = true;
			this->LNomArticleAjouter->Location = System::Drawing::Point(101, 137);
			this->LNomArticleAjouter->Name = L"LNomArticleAjouter";
			this->LNomArticleAjouter->Size = System::Drawing::Size(79, 13);
			this->LNomArticleAjouter->TabIndex = 7;
			this->LNomArticleAjouter->Text = L"Nom de l\'article";
			// 
			// TBStockAjouter
			// 
			this->TBStockAjouter->Location = System::Drawing::Point(207, 408);
			this->TBStockAjouter->Name = L"TBStockAjouter";
			this->TBStockAjouter->Size = System::Drawing::Size(216, 20);
			this->TBStockAjouter->TabIndex = 6;
			// 
			// TBNatureAjouter
			// 
			this->TBNatureAjouter->Location = System::Drawing::Point(104, 238);
			this->TBNatureAjouter->Name = L"TBNatureAjouter";
			this->TBNatureAjouter->Size = System::Drawing::Size(171, 20);
			this->TBNatureAjouter->TabIndex = 5;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(395, 319);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(208, 20);
			this->textBox5->TabIndex = 4;
			// 
			// TBCouleurAjouter
			// 
			this->TBCouleurAjouter->Location = System::Drawing::Point(104, 319);
			this->TBCouleurAjouter->Name = L"TBCouleurAjouter";
			this->TBCouleurAjouter->Size = System::Drawing::Size(171, 20);
			this->TBCouleurAjouter->TabIndex = 3;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(395, 238);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(208, 20);
			this->textBox3->TabIndex = 2;
			// 
			// TBPrixHTAjouter
			// 
			this->TBPrixHTAjouter->Location = System::Drawing::Point(395, 153);
			this->TBPrixHTAjouter->Name = L"TBPrixHTAjouter";
			this->TBPrixHTAjouter->Size = System::Drawing::Size(208, 20);
			this->TBPrixHTAjouter->TabIndex = 1;
			// 
			// TBNomArticleAjouter
			// 
			this->TBNomArticleAjouter->Location = System::Drawing::Point(104, 153);
			this->TBNomArticleAjouter->Name = L"TBNomArticleAjouter";
			this->TBNomArticleAjouter->Size = System::Drawing::Size(171, 20);
			this->TBNomArticleAjouter->TabIndex = 0;
			// 
			// PanelSupprimerArticle
			// 
			this->PanelSupprimerArticle->Controls->Add(this->comboBox1);
			this->PanelSupprimerArticle->Controls->Add(this->BtnSupprimer);
			this->PanelSupprimerArticle->Controls->Add(this->LQuestionSupprimer);
			this->PanelSupprimerArticle->Location = System::Drawing::Point(418, 98);
			this->PanelSupprimerArticle->Name = L"PanelSupprimerArticle";
			this->PanelSupprimerArticle->Size = System::Drawing::Size(781, 540);
			this->PanelSupprimerArticle->TabIndex = 16;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(386, 199);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(148, 21);
			this->comboBox1->TabIndex = 3;
			// 
			// BtnSupprimer
			// 
			this->BtnSupprimer->Location = System::Drawing::Point(300, 280);
			this->BtnSupprimer->Name = L"BtnSupprimer";
			this->BtnSupprimer->Size = System::Drawing::Size(147, 33);
			this->BtnSupprimer->TabIndex = 2;
			this->BtnSupprimer->Text = L"Supprimer";
			this->BtnSupprimer->UseVisualStyleBackColor = true;
			// 
			// LQuestionSupprimer
			// 
			this->LQuestionSupprimer->AutoSize = true;
			this->LQuestionSupprimer->Location = System::Drawing::Point(204, 202);
			this->LQuestionSupprimer->Name = L"LQuestionSupprimer";
			this->LQuestionSupprimer->Size = System::Drawing::Size(147, 13);
			this->LQuestionSupprimer->TabIndex = 1;
			this->LQuestionSupprimer->Text = L"Quel est l\'article à supprimer \?";
			// 
			// Article
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1262, 650);
			this->Controls->Add(this->PanelAfficherArticle);
			this->Controls->Add(this->PanelSupprimerArticle);
			this->Controls->Add(this->PanelModifier);
			this->Controls->Add(this->PanelAjouterArticle);
			this->Controls->Add(this->BtnLabelSupprimerArticle);
			this->Controls->Add(this->BtnLabelModifierArticle);
			this->Controls->Add(this->BtnLabelRechercherArticle);
			this->Controls->Add(this->BtnLabelAjouterArticle);
			this->Controls->Add(this->menuStrip1);
			this->Name = L"Article";
			this->Text = L"Article";
			this->Load += gcnew System::EventHandler(this, &Article::Article_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->PanelAjouterArticle->ResumeLayout(false);
			this->PanelAjouterArticle->PerformLayout();
			this->PanelModifier->ResumeLayout(false);
			this->PanelModifier->PerformLayout();
			this->PanelAfficherArticle->ResumeLayout(false);
			this->PanelAfficherArticle->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownStockAfficher))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewRechercherCommande))->EndInit();
			this->PanelSupprimerArticle->ResumeLayout(false);
			this->PanelSupprimerArticle->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void Article_Load(System::Object^ sender, System::EventArgs^ e) {
	PanelAjouterArticle->Visible = false;
	PanelAfficherArticle->Visible = false;
	PanelModifier->Visible = false;
	PanelSupprimerArticle->Visible = false;
}
private: System::Void BtnLabelAjouterArticle_Click(System::Object^ sender, System::EventArgs^ e) {
	PanelAjouterArticle->Visible = true;
	PanelAfficherArticle->Visible = false;
	PanelModifier->Visible = false;
	PanelSupprimerArticle->Visible = false;
}
private: System::Void BtnLabelRechercherArticle_Click(System::Object^ sender, System::EventArgs^ e) {
	PanelAjouterArticle->Visible = false;
	PanelAfficherArticle->Visible = true;
	PanelModifier->Visible = false;
	PanelSupprimerArticle->Visible = false;
}
private: System::Void BtnLabelModifierArticle_Click(System::Object^ sender, System::EventArgs^ e) {
	PanelAjouterArticle->Visible = false;
	PanelAfficherArticle->Visible = false;
	PanelModifier->Visible = true;
	PanelSupprimerArticle->Visible = false;
}
private: System::Void BtnLabelSupprimerArticle_Click(System::Object^ sender, System::EventArgs^ e) {
	PanelAjouterArticle->Visible = false;
	PanelAfficherArticle->Visible = false;
	PanelModifier->Visible = false;
	PanelSupprimerArticle->Visible = true;
}
private: System::Void PanelAfficherArticle_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
};
}

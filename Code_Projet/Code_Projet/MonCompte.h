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
	/// Description résumée de MonCompte
	/// </summary>
	public ref class MonCompte : public System::Windows::Forms::Form
	{
	public:
		MonCompte(void)
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
		~MonCompte()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ labelNom;
	protected:
	private: System::Windows::Forms::Label^ labelPrenom;
	private: System::Windows::Forms::Label^ labelNumerodeVoie;
	private: System::Windows::Forms::Label^ labelVille;
	private: System::Windows::Forms::Label^ labelComplement;
	private: System::Windows::Forms::Label^ labelNomUtilisateur;
	private: System::Windows::Forms::Label^ labelMDP;
	private: System::Windows::Forms::Label^ labelNomVoie;
	private: System::Windows::Forms::Label^ label_nom_ecrit;
	private: System::Windows::Forms::Label^ label_prenom_ecrit;
	private: System::Windows::Forms::Label^ label_mdp_ecrit;
	private: System::Windows::Forms::Label^ label_nomUtilisateur_ecrit;
	private: System::Windows::Forms::Label^ label_numeroVoie_ecrit;
	private: System::Windows::Forms::Label^ label_complement_ecrit;
	private: System::Windows::Forms::Label^ label_nomVoie_ecrti;
	private: System::Windows::Forms::Label^ label_ecrit_ville;
	private: Controleur controle;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
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
	private: System::Windows::Forms::Button^ btnmodifier;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ labeletoile;
	private: System::Windows::Forms::TextBox^ textBoxNom;
	private: System::Windows::Forms::TextBox^ textBoxcomplement;


	private: System::Windows::Forms::TextBox^ textBoxutilisateur;
	private: System::Windows::Forms::TextBox^ textBoxnomvoie;


	private: System::Windows::Forms::TextBox^ textBoxPrenom;
	private: System::Windows::Forms::TextBox^ textBoxnumerovoie;
	private: System::Windows::Forms::Label^ label_modif_nomVoie;




	private: System::Windows::Forms::Label^ label_modif_mdp;

	private: System::Windows::Forms::Label^ label_modif_utilisateur;
	private: System::Windows::Forms::Label^ label_modif_complement;


	private: System::Windows::Forms::Label^ label_modif_ville;
	private: System::Windows::Forms::Label^ label_modif_numvoie;


	private: System::Windows::Forms::Label^ label_modif_prenom;

	private: System::Windows::Forms::Label^ label_modif_nom;

	private: System::Windows::Forms::TextBox^ textBoxmdp;
	private: System::Windows::Forms::TextBox^ textBoxville;
	private: System::Windows::Forms::Panel^ panel_modif;
	private: System::Windows::Forms::Button^ btnValider;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MonCompte::typeid));
			this->labelNom = (gcnew System::Windows::Forms::Label());
			this->labelPrenom = (gcnew System::Windows::Forms::Label());
			this->labelNumerodeVoie = (gcnew System::Windows::Forms::Label());
			this->labelVille = (gcnew System::Windows::Forms::Label());
			this->labelComplement = (gcnew System::Windows::Forms::Label());
			this->labelNomUtilisateur = (gcnew System::Windows::Forms::Label());
			this->labelMDP = (gcnew System::Windows::Forms::Label());
			this->labelNomVoie = (gcnew System::Windows::Forms::Label());
			this->label_nom_ecrit = (gcnew System::Windows::Forms::Label());
			this->label_prenom_ecrit = (gcnew System::Windows::Forms::Label());
			this->label_mdp_ecrit = (gcnew System::Windows::Forms::Label());
			this->label_nomUtilisateur_ecrit = (gcnew System::Windows::Forms::Label());
			this->label_numeroVoie_ecrit = (gcnew System::Windows::Forms::Label());
			this->label_complement_ecrit = (gcnew System::Windows::Forms::Label());
			this->label_nomVoie_ecrti = (gcnew System::Windows::Forms::Label());
			this->label_ecrit_ville = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
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
			this->btnmodifier = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->labeletoile = (gcnew System::Windows::Forms::Label());
			this->textBoxNom = (gcnew System::Windows::Forms::TextBox());
			this->textBoxcomplement = (gcnew System::Windows::Forms::TextBox());
			this->textBoxutilisateur = (gcnew System::Windows::Forms::TextBox());
			this->textBoxnomvoie = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPrenom = (gcnew System::Windows::Forms::TextBox());
			this->textBoxnumerovoie = (gcnew System::Windows::Forms::TextBox());
			this->label_modif_nomVoie = (gcnew System::Windows::Forms::Label());
			this->label_modif_mdp = (gcnew System::Windows::Forms::Label());
			this->label_modif_utilisateur = (gcnew System::Windows::Forms::Label());
			this->label_modif_complement = (gcnew System::Windows::Forms::Label());
			this->label_modif_ville = (gcnew System::Windows::Forms::Label());
			this->label_modif_numvoie = (gcnew System::Windows::Forms::Label());
			this->label_modif_prenom = (gcnew System::Windows::Forms::Label());
			this->label_modif_nom = (gcnew System::Windows::Forms::Label());
			this->textBoxmdp = (gcnew System::Windows::Forms::TextBox());
			this->textBoxville = (gcnew System::Windows::Forms::TextBox());
			this->panel_modif = (gcnew System::Windows::Forms::Panel());
			this->btnValider = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panel_modif->SuspendLayout();
			this->SuspendLayout();
			// 
			// labelNom
			// 
			this->labelNom->AutoSize = true;
			this->labelNom->Font = (gcnew System::Drawing::Font(L"Century", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelNom->Location = System::Drawing::Point(156, 323);
			this->labelNom->Name = L"labelNom";
			this->labelNom->Size = System::Drawing::Size(44, 20);
			this->labelNom->TabIndex = 0;
			this->labelNom->Text = L"Nom";
			// 
			// labelPrenom
			// 
			this->labelPrenom->AutoSize = true;
			this->labelPrenom->Font = (gcnew System::Drawing::Font(L"Century", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelPrenom->Location = System::Drawing::Point(156, 403);
			this->labelPrenom->Name = L"labelPrenom";
			this->labelPrenom->Size = System::Drawing::Size(67, 20);
			this->labelPrenom->TabIndex = 1;
			this->labelPrenom->Text = L"Prénom";
			// 
			// labelNumerodeVoie
			// 
			this->labelNumerodeVoie->AutoSize = true;
			this->labelNumerodeVoie->Font = (gcnew System::Drawing::Font(L"Century", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelNumerodeVoie->Location = System::Drawing::Point(368, 323);
			this->labelNumerodeVoie->Name = L"labelNumerodeVoie";
			this->labelNumerodeVoie->Size = System::Drawing::Size(124, 20);
			this->labelNumerodeVoie->TabIndex = 2;
			this->labelNumerodeVoie->Text = L"Numéro de voie";
			// 
			// labelVille
			// 
			this->labelVille->AutoSize = true;
			this->labelVille->Font = (gcnew System::Drawing::Font(L"Century", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelVille->Location = System::Drawing::Point(368, 578);
			this->labelVille->Name = L"labelVille";
			this->labelVille->Size = System::Drawing::Size(44, 20);
			this->labelVille->TabIndex = 3;
			this->labelVille->Text = L"Ville";
			// 
			// labelComplement
			// 
			this->labelComplement->AutoSize = true;
			this->labelComplement->Font = (gcnew System::Drawing::Font(L"Century", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelComplement->Location = System::Drawing::Point(368, 499);
			this->labelComplement->Name = L"labelComplement";
			this->labelComplement->Size = System::Drawing::Size(174, 20);
			this->labelComplement->TabIndex = 4;
			this->labelComplement->Text = L"Complément d\'adresse";
			// 
			// labelNomUtilisateur
			// 
			this->labelNomUtilisateur->AutoSize = true;
			this->labelNomUtilisateur->Font = (gcnew System::Drawing::Font(L"Century", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelNomUtilisateur->Location = System::Drawing::Point(156, 499);
			this->labelNomUtilisateur->Name = L"labelNomUtilisateur";
			this->labelNomUtilisateur->Size = System::Drawing::Size(138, 20);
			this->labelNomUtilisateur->TabIndex = 5;
			this->labelNomUtilisateur->Text = L"Nom d\'utilisateur";
			// 
			// labelMDP
			// 
			this->labelMDP->AutoSize = true;
			this->labelMDP->Font = (gcnew System::Drawing::Font(L"Century", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelMDP->Location = System::Drawing::Point(156, 575);
			this->labelMDP->Name = L"labelMDP";
			this->labelMDP->Size = System::Drawing::Size(103, 20);
			this->labelMDP->TabIndex = 6;
			this->labelMDP->Text = L"Mot de passe";
			// 
			// labelNomVoie
			// 
			this->labelNomVoie->AutoSize = true;
			this->labelNomVoie->Font = (gcnew System::Drawing::Font(L"Century", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelNomVoie->Location = System::Drawing::Point(368, 403);
			this->labelNomVoie->Name = L"labelNomVoie";
			this->labelNomVoie->Size = System::Drawing::Size(99, 20);
			this->labelNomVoie->TabIndex = 7;
			this->labelNomVoie->Text = L"Nom de voie";
			// 
			// label_nom_ecrit
			// 
			this->label_nom_ecrit->AutoSize = true;
			this->label_nom_ecrit->Font = (gcnew System::Drawing::Font(L"Century", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_nom_ecrit->Location = System::Drawing::Point(156, 348);
			this->label_nom_ecrit->Name = L"label_nom_ecrit";
			this->label_nom_ecrit->Size = System::Drawing::Size(63, 20);
			this->label_nom_ecrit->TabIndex = 8;
			this->label_nom_ecrit->Text = L"xxxxxx";
			// 
			// label_prenom_ecrit
			// 
			this->label_prenom_ecrit->AutoSize = true;
			this->label_prenom_ecrit->Font = (gcnew System::Drawing::Font(L"Century", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_prenom_ecrit->Location = System::Drawing::Point(156, 433);
			this->label_prenom_ecrit->Name = L"label_prenom_ecrit";
			this->label_prenom_ecrit->Size = System::Drawing::Size(99, 20);
			this->label_prenom_ecrit->TabIndex = 9;
			this->label_prenom_ecrit->Text = L"xxxxxxxxxx";
			// 
			// label_mdp_ecrit
			// 
			this->label_mdp_ecrit->AutoSize = true;
			this->label_mdp_ecrit->Font = (gcnew System::Drawing::Font(L"Century", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_mdp_ecrit->Location = System::Drawing::Point(156, 600);
			this->label_mdp_ecrit->Name = L"label_mdp_ecrit";
			this->label_mdp_ecrit->Size = System::Drawing::Size(108, 20);
			this->label_mdp_ecrit->TabIndex = 10;
			this->label_mdp_ecrit->Text = L"xxxxxxxxxxx";
			this->label_mdp_ecrit->Visible = false;
			// 
			// label_nomUtilisateur_ecrit
			// 
			this->label_nomUtilisateur_ecrit->AutoSize = true;
			this->label_nomUtilisateur_ecrit->Font = (gcnew System::Drawing::Font(L"Century", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_nomUtilisateur_ecrit->Location = System::Drawing::Point(156, 526);
			this->label_nomUtilisateur_ecrit->Name = L"label_nomUtilisateur_ecrit";
			this->label_nomUtilisateur_ecrit->Size = System::Drawing::Size(108, 20);
			this->label_nomUtilisateur_ecrit->TabIndex = 11;
			this->label_nomUtilisateur_ecrit->Text = L"xxxxxxxxxxx";
			// 
			// label_numeroVoie_ecrit
			// 
			this->label_numeroVoie_ecrit->AutoSize = true;
			this->label_numeroVoie_ecrit->Font = (gcnew System::Drawing::Font(L"Century", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_numeroVoie_ecrit->Location = System::Drawing::Point(368, 350);
			this->label_numeroVoie_ecrit->Name = L"label_numeroVoie_ecrit";
			this->label_numeroVoie_ecrit->Size = System::Drawing::Size(117, 20);
			this->label_numeroVoie_ecrit->TabIndex = 12;
			this->label_numeroVoie_ecrit->Text = L"xxxxxxxxxxxx";
			// 
			// label_complement_ecrit
			// 
			this->label_complement_ecrit->AutoSize = true;
			this->label_complement_ecrit->Font = (gcnew System::Drawing::Font(L"Century", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_complement_ecrit->Location = System::Drawing::Point(368, 527);
			this->label_complement_ecrit->Name = L"label_complement_ecrit";
			this->label_complement_ecrit->Size = System::Drawing::Size(90, 20);
			this->label_complement_ecrit->TabIndex = 13;
			this->label_complement_ecrit->Text = L"xxxxxxxxx";
			// 
			// label_nomVoie_ecrti
			// 
			this->label_nomVoie_ecrti->AutoSize = true;
			this->label_nomVoie_ecrti->Font = (gcnew System::Drawing::Font(L"Century", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_nomVoie_ecrti->Location = System::Drawing::Point(368, 424);
			this->label_nomVoie_ecrti->Name = L"label_nomVoie_ecrti";
			this->label_nomVoie_ecrti->Size = System::Drawing::Size(108, 20);
			this->label_nomVoie_ecrti->TabIndex = 14;
			this->label_nomVoie_ecrti->Text = L"xxxxxxxxxxx";
			// 
			// label_ecrit_ville
			// 
			this->label_ecrit_ville->AutoSize = true;
			this->label_ecrit_ville->Font = (gcnew System::Drawing::Font(L"Century", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_ecrit_ville->Location = System::Drawing::Point(368, 602);
			this->label_ecrit_ville->Name = L"label_ecrit_ville";
			this->label_ecrit_ville->Size = System::Drawing::Size(108, 20);
			this->label_ecrit_ville->TabIndex = 15;
			this->label_ecrit_ville->Text = L"xxxxxxxxxxx";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
			this->pictureBox1->Location = System::Drawing::Point(213, 173);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(148, 86);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 16;
			this->pictureBox1->TabStop = false;
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
			this->menuStrip1->Location = System::Drawing::Point(71, 46);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(909, 45);
			this->menuStrip1->TabIndex = 22;
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
			// btnmodifier
			// 
			this->btnmodifier->Location = System::Drawing::Point(213, 673);
			this->btnmodifier->Name = L"btnmodifier";
			this->btnmodifier->Size = System::Drawing::Size(196, 58);
			this->btnmodifier->TabIndex = 23;
			this->btnmodifier->Text = L"Modifier mes informations";
			this->btnmodifier->UseVisualStyleBackColor = true;
			this->btnmodifier->Click += gcnew System::EventHandler(this, &MonCompte::btnmodifier_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->pictureBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(270, 602);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(33, 22);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 24;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &MonCompte::pictureBox2_Click);
			// 
			// labeletoile
			// 
			this->labeletoile->AutoSize = true;
			this->labeletoile->Font = (gcnew System::Drawing::Font(L"Century", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labeletoile->Location = System::Drawing::Point(151, 604);
			this->labeletoile->Name = L"labeletoile";
			this->labeletoile->Size = System::Drawing::Size(113, 20);
			this->labeletoile->TabIndex = 25;
			this->labeletoile->Text = L"*************";
			// 
			// textBoxNom
			// 
			this->textBoxNom->Location = System::Drawing::Point(62, 67);
			this->textBoxNom->Name = L"textBoxNom";
			this->textBoxNom->Size = System::Drawing::Size(124, 20);
			this->textBoxNom->TabIndex = 26;
			// 
			// textBoxcomplement
			// 
			this->textBoxcomplement->Location = System::Drawing::Point(274, 243);
			this->textBoxcomplement->Name = L"textBoxcomplement";
			this->textBoxcomplement->Size = System::Drawing::Size(124, 20);
			this->textBoxcomplement->TabIndex = 27;
			// 
			// textBoxutilisateur
			// 
			this->textBoxutilisateur->Location = System::Drawing::Point(62, 243);
			this->textBoxutilisateur->Name = L"textBoxutilisateur";
			this->textBoxutilisateur->Size = System::Drawing::Size(124, 20);
			this->textBoxutilisateur->TabIndex = 28;
			// 
			// textBoxnomvoie
			// 
			this->textBoxnomvoie->Location = System::Drawing::Point(274, 152);
			this->textBoxnomvoie->Name = L"textBoxnomvoie";
			this->textBoxnomvoie->Size = System::Drawing::Size(170, 20);
			this->textBoxnomvoie->TabIndex = 29;
			// 
			// textBoxPrenom
			// 
			this->textBoxPrenom->Location = System::Drawing::Point(62, 152);
			this->textBoxPrenom->Name = L"textBoxPrenom";
			this->textBoxPrenom->Size = System::Drawing::Size(124, 20);
			this->textBoxPrenom->TabIndex = 30;
			// 
			// textBoxnumerovoie
			// 
			this->textBoxnumerovoie->Location = System::Drawing::Point(270, 67);
			this->textBoxnumerovoie->Name = L"textBoxnumerovoie";
			this->textBoxnumerovoie->Size = System::Drawing::Size(128, 20);
			this->textBoxnumerovoie->TabIndex = 31;
			// 
			// label_modif_nomVoie
			// 
			this->label_modif_nomVoie->AutoSize = true;
			this->label_modif_nomVoie->Font = (gcnew System::Drawing::Font(L"Century", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_modif_nomVoie->Location = System::Drawing::Point(270, 118);
			this->label_modif_nomVoie->Name = L"label_modif_nomVoie";
			this->label_modif_nomVoie->Size = System::Drawing::Size(99, 20);
			this->label_modif_nomVoie->TabIndex = 41;
			this->label_modif_nomVoie->Text = L"Nom de voie";
			// 
			// label_modif_mdp
			// 
			this->label_modif_mdp->AutoSize = true;
			this->label_modif_mdp->Font = (gcnew System::Drawing::Font(L"Century", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_modif_mdp->Location = System::Drawing::Point(58, 290);
			this->label_modif_mdp->Name = L"label_modif_mdp";
			this->label_modif_mdp->Size = System::Drawing::Size(103, 20);
			this->label_modif_mdp->TabIndex = 40;
			this->label_modif_mdp->Text = L"Mot de passe";
			// 
			// label_modif_utilisateur
			// 
			this->label_modif_utilisateur->AutoSize = true;
			this->label_modif_utilisateur->Font = (gcnew System::Drawing::Font(L"Century", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_modif_utilisateur->Location = System::Drawing::Point(58, 214);
			this->label_modif_utilisateur->Name = L"label_modif_utilisateur";
			this->label_modif_utilisateur->Size = System::Drawing::Size(138, 20);
			this->label_modif_utilisateur->TabIndex = 39;
			this->label_modif_utilisateur->Text = L"Nom d\'utilisateur";
			// 
			// label_modif_complement
			// 
			this->label_modif_complement->AutoSize = true;
			this->label_modif_complement->Font = (gcnew System::Drawing::Font(L"Century", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_modif_complement->Location = System::Drawing::Point(270, 214);
			this->label_modif_complement->Name = L"label_modif_complement";
			this->label_modif_complement->Size = System::Drawing::Size(174, 20);
			this->label_modif_complement->TabIndex = 38;
			this->label_modif_complement->Text = L"Complément d\'adresse";
			// 
			// label_modif_ville
			// 
			this->label_modif_ville->AutoSize = true;
			this->label_modif_ville->Font = (gcnew System::Drawing::Font(L"Century", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_modif_ville->Location = System::Drawing::Point(270, 293);
			this->label_modif_ville->Name = L"label_modif_ville";
			this->label_modif_ville->Size = System::Drawing::Size(44, 20);
			this->label_modif_ville->TabIndex = 37;
			this->label_modif_ville->Text = L"Ville";
			// 
			// label_modif_numvoie
			// 
			this->label_modif_numvoie->AutoSize = true;
			this->label_modif_numvoie->Font = (gcnew System::Drawing::Font(L"Century", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_modif_numvoie->Location = System::Drawing::Point(266, 38);
			this->label_modif_numvoie->Name = L"label_modif_numvoie";
			this->label_modif_numvoie->Size = System::Drawing::Size(124, 20);
			this->label_modif_numvoie->TabIndex = 36;
			this->label_modif_numvoie->Text = L"Numéro de voie";
			// 
			// label_modif_prenom
			// 
			this->label_modif_prenom->AutoSize = true;
			this->label_modif_prenom->Font = (gcnew System::Drawing::Font(L"Century", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_modif_prenom->Location = System::Drawing::Point(58, 118);
			this->label_modif_prenom->Name = L"label_modif_prenom";
			this->label_modif_prenom->Size = System::Drawing::Size(67, 20);
			this->label_modif_prenom->TabIndex = 35;
			this->label_modif_prenom->Text = L"Prénom";
			// 
			// label_modif_nom
			// 
			this->label_modif_nom->AutoSize = true;
			this->label_modif_nom->Font = (gcnew System::Drawing::Font(L"Century", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_modif_nom->Location = System::Drawing::Point(58, 38);
			this->label_modif_nom->Name = L"label_modif_nom";
			this->label_modif_nom->Size = System::Drawing::Size(44, 20);
			this->label_modif_nom->TabIndex = 34;
			this->label_modif_nom->Text = L"Nom";
			// 
			// textBoxmdp
			// 
			this->textBoxmdp->Location = System::Drawing::Point(62, 321);
			this->textBoxmdp->Name = L"textBoxmdp";
			this->textBoxmdp->Size = System::Drawing::Size(124, 20);
			this->textBoxmdp->TabIndex = 42;
			// 
			// textBoxville
			// 
			this->textBoxville->Location = System::Drawing::Point(274, 321);
			this->textBoxville->Name = L"textBoxville";
			this->textBoxville->Size = System::Drawing::Size(124, 20);
			this->textBoxville->TabIndex = 43;
			// 
			// panel_modif
			// 
			this->panel_modif->Controls->Add(this->btnValider);
			this->panel_modif->Controls->Add(this->textBoxville);
			this->panel_modif->Controls->Add(this->label_modif_nom);
			this->panel_modif->Controls->Add(this->textBoxNom);
			this->panel_modif->Controls->Add(this->textBoxmdp);
			this->panel_modif->Controls->Add(this->textBoxcomplement);
			this->panel_modif->Controls->Add(this->textBoxutilisateur);
			this->panel_modif->Controls->Add(this->label_modif_nomVoie);
			this->panel_modif->Controls->Add(this->textBoxnomvoie);
			this->panel_modif->Controls->Add(this->textBoxPrenom);
			this->panel_modif->Controls->Add(this->label_modif_mdp);
			this->panel_modif->Controls->Add(this->textBoxnumerovoie);
			this->panel_modif->Controls->Add(this->label_modif_prenom);
			this->panel_modif->Controls->Add(this->label_modif_utilisateur);
			this->panel_modif->Controls->Add(this->label_modif_numvoie);
			this->panel_modif->Controls->Add(this->label_modif_ville);
			this->panel_modif->Controls->Add(this->label_modif_complement);
			this->panel_modif->Location = System::Drawing::Point(558, 286);
			this->panel_modif->Name = L"panel_modif";
			this->panel_modif->Size = System::Drawing::Size(483, 467);
			this->panel_modif->TabIndex = 44;
			this->panel_modif->Visible = false;
			// 
			// btnValider
			// 
			this->btnValider->Location = System::Drawing::Point(139, 388);
			this->btnValider->Name = L"btnValider";
			this->btnValider->Size = System::Drawing::Size(196, 58);
			this->btnValider->TabIndex = 45;
			this->btnValider->Text = L"Valider ";
			this->btnValider->UseVisualStyleBackColor = true;
			this->btnValider->Click += gcnew System::EventHandler(this, &MonCompte::btnValider_Click);
			// 
			// MonCompte
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1122, 796);
			this->Controls->Add(this->panel_modif);
			this->Controls->Add(this->labeletoile);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->btnmodifier);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label_ecrit_ville);
			this->Controls->Add(this->label_nomVoie_ecrti);
			this->Controls->Add(this->label_complement_ecrit);
			this->Controls->Add(this->label_numeroVoie_ecrit);
			this->Controls->Add(this->label_nomUtilisateur_ecrit);
			this->Controls->Add(this->label_mdp_ecrit);
			this->Controls->Add(this->label_prenom_ecrit);
			this->Controls->Add(this->label_nom_ecrit);
			this->Controls->Add(this->labelNomVoie);
			this->Controls->Add(this->labelMDP);
			this->Controls->Add(this->labelNomUtilisateur);
			this->Controls->Add(this->labelComplement);
			this->Controls->Add(this->labelVille);
			this->Controls->Add(this->labelNumerodeVoie);
			this->Controls->Add(this->labelPrenom);
			this->Controls->Add(this->labelNom);
			this->Name = L"MonCompte";
			this->Text = L"MonCompte";
			this->Load += gcnew System::EventHandler(this, &MonCompte::MonCompte_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panel_modif->ResumeLayout(false);
			this->panel_modif->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MonCompte_Load(System::Object^ sender, System::EventArgs^ e) 
	{
		controle.afficher_label_moncompte(label_nom_ecrit,label_prenom_ecrit,label_nomUtilisateur_ecrit,label_mdp_ecrit,label_numeroVoie_ecrit,label_complement_ecrit, label_nomVoie_ecrti,label_ecrit_ville);
	}
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	controle.mdp_label(label_mdp_ecrit,labeletoile);
}
private: System::Void btnmodifier_Click(System::Object^ sender, System::EventArgs^ e) 
{
	panel_modif->Visible = true;
}
private: System::Void btnValider_Click(System::Object^ sender, System::EventArgs^ e) 
{

	controle.UpdateMonCompte(label_nom_ecrit, label_prenom_ecrit, label_nomUtilisateur_ecrit, label_mdp_ecrit, label_numeroVoie_ecrit, label_complement_ecrit, label_nomVoie_ecrti, label_ecrit_ville, textBoxNom, textBoxPrenom, textBoxutilisateur, textBoxmdp, textBoxnumerovoie, textBoxcomplement, textBoxnomvoie, textBoxville);
}
};
}

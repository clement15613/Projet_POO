#pragma once
#include "controleur.h"
#include "MyForm.h"

namespace CodeProjet {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description r?sum?e de Personnel
	/// </summary>
	public ref class Personnel : public System::Windows::Forms::Form
	{
	public:
		Personnel(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilis?es.
		/// </summary>
		~Personnel()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DateTimePicker^ dateTimePickerEmbaucheAjouter;
	private: System::Windows::Forms::TextBox^ TBUserAjouter;
	private: System::Windows::Forms::TextBox^ TBMdpAjouter;
	protected:

	protected:

	protected:




	private: System::Windows::Forms::TextBox^ TBPrenomAjouter;

	private: System::Windows::Forms::TextBox^ TBNomAjouter;
	private: System::Windows::Forms::TextBox^ TBSuperieurAjouter;


	private: System::Windows::Forms::TextBox^ TBComplementAjouter;

	private: System::Windows::Forms::TextBox^ TBRueAjouter;

	private: System::Windows::Forms::TextBox^ TBNumRueAjouter;

	private: System::Windows::Forms::Label^ LNomAjouter;
	private: System::Windows::Forms::Label^ LPrenomAjouter;
	private: System::Windows::Forms::Label^ LUserAjouter;



	private: System::Windows::Forms::Label^ LDateEmbauhceAjouter;
	private: System::Windows::Forms::Label^ LVilleAjouter;
	private: System::Windows::Forms::ComboBox^ BoxVilleAjouter;



	private: System::Windows::Forms::Label^ LNomRueAjouter;

	private: System::Windows::Forms::Label^ LNumVoieAjouter;
	private: System::Windows::Forms::Label^ LComplementAjouter;
	private: System::Windows::Forms::Label^ LSuperieurAjouter;



	private: System::Windows::Forms::Label^ LMdpAjouter;

	private: System::Windows::Forms::Button^ BtnAjouterPersonnel;
	private: System::Windows::Forms::Button^ BtnLabelAjouterPersonnel;
	private: System::Windows::Forms::Button^ BtnLabelRechercherPersonnel;
	private: System::Windows::Forms::Button^ BtnLabelModifierPersonnel;
	private: System::Windows::Forms::Button^ BtnLabelSupprimerPersonnel;
	private: System::Windows::Forms::Panel^ PanelAjouterPersonnel;
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
	private: System::Windows::Forms::Panel^ PanelModifierPersonnel;

	private: System::Windows::Forms::Button^ BtnModifierPersonnel;
	private: System::Windows::Forms::Label^ LVilleModifier;
	private: System::Windows::Forms::ComboBox^ BoxVilleModifier;



private: System::Windows::Forms::Label^ LNomRueModifier;

private: System::Windows::Forms::Label^ LNumVoieModifier;
private: System::Windows::Forms::Label^ LComplementModifier;
private: System::Windows::Forms::Label^ LSuperieurModifier;



private: System::Windows::Forms::Label^ LMdpModifier;

private: System::Windows::Forms::Label^ LPrenomModifier;
private: System::Windows::Forms::Label^ LUserModifier;


private: System::Windows::Forms::Label^ LDateEmbaucheModifier;

private: System::Windows::Forms::Label^ LNomModifier;
private: System::Windows::Forms::TextBox^ TBSuperieurModifier;


private: System::Windows::Forms::TextBox^ TBComplementModifier;

private: System::Windows::Forms::TextBox^ TBNomRueModifier;

private: System::Windows::Forms::TextBox^ TBNumRueModifier;


private: System::Windows::Forms::DateTimePicker^ dateTimePickerEmbaucheModifier;
private: System::Windows::Forms::TextBox^ TBUserModifier;
private: System::Windows::Forms::TextBox^ TBMdpModifier;



private: System::Windows::Forms::TextBox^ TBPrenomModifier;

private: System::Windows::Forms::TextBox^ TBNomModifier;
private: System::Windows::Forms::Panel^ PanelSupprimerPersonnel;

private: System::Windows::Forms::Button^ BtnSupprimerPersonnel;
private: System::Windows::Forms::Label^ LQuestionSupprimer;





private: System::Windows::Forms::Label^ LNomPrenomSupprimer;
private: System::Windows::Forms::ComboBox^ comboBoxNomPrenomSupprimer;

private: System::Windows::Forms::Panel^ PanelAfficherPersonnel;

private: System::Windows::Forms::Label^ LSuperieurAffcher;
private: System::Windows::Forms::Label^ LVilleAfficher;


private: System::Windows::Forms::Label^ LPrenomAfficher;

private: System::Windows::Forms::Label^ LNomAfficher;

private: System::Windows::Forms::Label^ LDateEmbaucheAfficher;
private: System::Windows::Forms::ComboBox^ comboBoxVilleAfficher;
private: System::Windows::Forms::ComboBox^ comboBoxSupAfficher;
private: System::Windows::Forms::ComboBox^ comboBoxPrenomAfficher;
private: System::Windows::Forms::ComboBox^ ComboBoxNomAfficher;







private: System::Windows::Forms::DateTimePicker^ dateTimePickerDateEmbaucheAfficher;
private: System::Windows::Forms::Label^ LQuestionAfficher;


private: System::Windows::Forms::DataGridView^ dataGridView1;
private: System::Windows::Forms::Button^ BtnRechercherPersonnel;

	   Controleur^ monControleur;
private: System::Windows::Forms::Label^ LNomPrenomModifier;
private: System::Windows::Forms::ComboBox^ comboBoxNomPrenomModifer;
private: System::Windows::Forms::Button^ BtnValider;


	private:
		/// <summary>
		/// Variable n?cessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M?thode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette m?thode avec l'?diteur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->PanelAjouterPersonnel = (gcnew System::Windows::Forms::Panel());
			this->BtnAjouterPersonnel = (gcnew System::Windows::Forms::Button());
			this->LVilleAjouter = (gcnew System::Windows::Forms::Label());
			this->BoxVilleAjouter = (gcnew System::Windows::Forms::ComboBox());
			this->LNomRueAjouter = (gcnew System::Windows::Forms::Label());
			this->LNumVoieAjouter = (gcnew System::Windows::Forms::Label());
			this->LComplementAjouter = (gcnew System::Windows::Forms::Label());
			this->LSuperieurAjouter = (gcnew System::Windows::Forms::Label());
			this->LMdpAjouter = (gcnew System::Windows::Forms::Label());
			this->LPrenomAjouter = (gcnew System::Windows::Forms::Label());
			this->LUserAjouter = (gcnew System::Windows::Forms::Label());
			this->LDateEmbauhceAjouter = (gcnew System::Windows::Forms::Label());
			this->LNomAjouter = (gcnew System::Windows::Forms::Label());
			this->TBSuperieurAjouter = (gcnew System::Windows::Forms::TextBox());
			this->TBComplementAjouter = (gcnew System::Windows::Forms::TextBox());
			this->TBRueAjouter = (gcnew System::Windows::Forms::TextBox());
			this->TBNumRueAjouter = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePickerEmbaucheAjouter = (gcnew System::Windows::Forms::DateTimePicker());
			this->TBUserAjouter = (gcnew System::Windows::Forms::TextBox());
			this->TBMdpAjouter = (gcnew System::Windows::Forms::TextBox());
			this->TBPrenomAjouter = (gcnew System::Windows::Forms::TextBox());
			this->TBNomAjouter = (gcnew System::Windows::Forms::TextBox());
			this->PanelModifierPersonnel = (gcnew System::Windows::Forms::Panel());
			this->BtnValider = (gcnew System::Windows::Forms::Button());
			this->LNomPrenomModifier = (gcnew System::Windows::Forms::Label());
			this->comboBoxNomPrenomModifer = (gcnew System::Windows::Forms::ComboBox());
			this->BtnModifierPersonnel = (gcnew System::Windows::Forms::Button());
			this->LVilleModifier = (gcnew System::Windows::Forms::Label());
			this->BoxVilleModifier = (gcnew System::Windows::Forms::ComboBox());
			this->LNomRueModifier = (gcnew System::Windows::Forms::Label());
			this->LNumVoieModifier = (gcnew System::Windows::Forms::Label());
			this->LComplementModifier = (gcnew System::Windows::Forms::Label());
			this->LSuperieurModifier = (gcnew System::Windows::Forms::Label());
			this->LMdpModifier = (gcnew System::Windows::Forms::Label());
			this->LPrenomModifier = (gcnew System::Windows::Forms::Label());
			this->LUserModifier = (gcnew System::Windows::Forms::Label());
			this->LDateEmbaucheModifier = (gcnew System::Windows::Forms::Label());
			this->LNomModifier = (gcnew System::Windows::Forms::Label());
			this->TBSuperieurModifier = (gcnew System::Windows::Forms::TextBox());
			this->TBComplementModifier = (gcnew System::Windows::Forms::TextBox());
			this->TBNomRueModifier = (gcnew System::Windows::Forms::TextBox());
			this->TBNumRueModifier = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePickerEmbaucheModifier = (gcnew System::Windows::Forms::DateTimePicker());
			this->TBUserModifier = (gcnew System::Windows::Forms::TextBox());
			this->TBMdpModifier = (gcnew System::Windows::Forms::TextBox());
			this->TBPrenomModifier = (gcnew System::Windows::Forms::TextBox());
			this->TBNomModifier = (gcnew System::Windows::Forms::TextBox());
			this->BtnLabelAjouterPersonnel = (gcnew System::Windows::Forms::Button());
			this->BtnLabelRechercherPersonnel = (gcnew System::Windows::Forms::Button());
			this->BtnLabelModifierPersonnel = (gcnew System::Windows::Forms::Button());
			this->BtnLabelSupprimerPersonnel = (gcnew System::Windows::Forms::Button());
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
			this->PanelSupprimerPersonnel = (gcnew System::Windows::Forms::Panel());
			this->LNomPrenomSupprimer = (gcnew System::Windows::Forms::Label());
			this->comboBoxNomPrenomSupprimer = (gcnew System::Windows::Forms::ComboBox());
			this->LQuestionSupprimer = (gcnew System::Windows::Forms::Label());
			this->BtnSupprimerPersonnel = (gcnew System::Windows::Forms::Button());
			this->PanelAfficherPersonnel = (gcnew System::Windows::Forms::Panel());
			this->BtnRechercherPersonnel = (gcnew System::Windows::Forms::Button());
			this->LSuperieurAffcher = (gcnew System::Windows::Forms::Label());
			this->LVilleAfficher = (gcnew System::Windows::Forms::Label());
			this->LPrenomAfficher = (gcnew System::Windows::Forms::Label());
			this->LNomAfficher = (gcnew System::Windows::Forms::Label());
			this->LDateEmbaucheAfficher = (gcnew System::Windows::Forms::Label());
			this->comboBoxVilleAfficher = (gcnew System::Windows::Forms::ComboBox());
			this->comboBoxSupAfficher = (gcnew System::Windows::Forms::ComboBox());
			this->comboBoxPrenomAfficher = (gcnew System::Windows::Forms::ComboBox());
			this->ComboBoxNomAfficher = (gcnew System::Windows::Forms::ComboBox());
			this->dateTimePickerDateEmbaucheAfficher = (gcnew System::Windows::Forms::DateTimePicker());
			this->LQuestionAfficher = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->PanelAjouterPersonnel->SuspendLayout();
			this->PanelModifierPersonnel->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->PanelSupprimerPersonnel->SuspendLayout();
			this->PanelAfficherPersonnel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// PanelAjouterPersonnel
			// 
			this->PanelAjouterPersonnel->Controls->Add(this->BtnAjouterPersonnel);
			this->PanelAjouterPersonnel->Controls->Add(this->LVilleAjouter);
			this->PanelAjouterPersonnel->Controls->Add(this->BoxVilleAjouter);
			this->PanelAjouterPersonnel->Controls->Add(this->LNomRueAjouter);
			this->PanelAjouterPersonnel->Controls->Add(this->LNumVoieAjouter);
			this->PanelAjouterPersonnel->Controls->Add(this->LComplementAjouter);
			this->PanelAjouterPersonnel->Controls->Add(this->LSuperieurAjouter);
			this->PanelAjouterPersonnel->Controls->Add(this->LMdpAjouter);
			this->PanelAjouterPersonnel->Controls->Add(this->LPrenomAjouter);
			this->PanelAjouterPersonnel->Controls->Add(this->LUserAjouter);
			this->PanelAjouterPersonnel->Controls->Add(this->LDateEmbauhceAjouter);
			this->PanelAjouterPersonnel->Controls->Add(this->LNomAjouter);
			this->PanelAjouterPersonnel->Controls->Add(this->TBSuperieurAjouter);
			this->PanelAjouterPersonnel->Controls->Add(this->TBComplementAjouter);
			this->PanelAjouterPersonnel->Controls->Add(this->TBRueAjouter);
			this->PanelAjouterPersonnel->Controls->Add(this->TBNumRueAjouter);
			this->PanelAjouterPersonnel->Controls->Add(this->dateTimePickerEmbaucheAjouter);
			this->PanelAjouterPersonnel->Controls->Add(this->TBUserAjouter);
			this->PanelAjouterPersonnel->Controls->Add(this->TBMdpAjouter);
			this->PanelAjouterPersonnel->Controls->Add(this->TBPrenomAjouter);
			this->PanelAjouterPersonnel->Controls->Add(this->TBNomAjouter);
			this->PanelAjouterPersonnel->Location = System::Drawing::Point(624, 162);
			this->PanelAjouterPersonnel->Name = L"PanelAjouterPersonnel";
			this->PanelAjouterPersonnel->Size = System::Drawing::Size(523, 446);
			this->PanelAjouterPersonnel->TabIndex = 0;
			// 
			// BtnAjouterPersonnel
			// 
			this->BtnAjouterPersonnel->Location = System::Drawing::Point(138, 383);
			this->BtnAjouterPersonnel->Name = L"BtnAjouterPersonnel";
			this->BtnAjouterPersonnel->Size = System::Drawing::Size(185, 46);
			this->BtnAjouterPersonnel->TabIndex = 21;
			this->BtnAjouterPersonnel->Text = L"Ajouter";
			this->BtnAjouterPersonnel->UseVisualStyleBackColor = true;
			this->BtnAjouterPersonnel->Click += gcnew System::EventHandler(this, &Personnel::BtnAjouterPersonnel_Click);
			// 
			// LVilleAjouter
			// 
			this->LVilleAjouter->AutoSize = true;
			this->LVilleAjouter->Location = System::Drawing::Point(330, 258);
			this->LVilleAjouter->Name = L"LVilleAjouter";
			this->LVilleAjouter->Size = System::Drawing::Size(26, 13);
			this->LVilleAjouter->TabIndex = 20;
			this->LVilleAjouter->Text = L"Ville";
			// 
			// BoxVilleAjouter
			// 
			this->BoxVilleAjouter->FormattingEnabled = true;
			this->BoxVilleAjouter->Location = System::Drawing::Point(333, 274);
			this->BoxVilleAjouter->Name = L"BoxVilleAjouter";
			this->BoxVilleAjouter->Size = System::Drawing::Size(121, 21);
			this->BoxVilleAjouter->Sorted = true;
			this->BoxVilleAjouter->TabIndex = 19;
			// 
			// LNomRueAjouter
			// 
			this->LNomRueAjouter->AutoSize = true;
			this->LNomRueAjouter->Location = System::Drawing::Point(330, 100);
			this->LNomRueAjouter->Name = L"LNomRueAjouter";
			this->LNomRueAjouter->Size = System::Drawing::Size(67, 13);
			this->LNomRueAjouter->TabIndex = 18;
			this->LNomRueAjouter->Text = L"Nom de voie";
			// 
			// LNumVoieAjouter
			// 
			this->LNumVoieAjouter->AutoSize = true;
			this->LNumVoieAjouter->Location = System::Drawing::Point(330, 18);
			this->LNumVoieAjouter->Name = L"LNumVoieAjouter";
			this->LNumVoieAjouter->Size = System::Drawing::Size(82, 13);
			this->LNumVoieAjouter->TabIndex = 17;
			this->LNumVoieAjouter->Text = L"Num?ro de voie";
			// 
			// LComplementAjouter
			// 
			this->LComplementAjouter->AutoSize = true;
			this->LComplementAjouter->Location = System::Drawing::Point(330, 187);
			this->LComplementAjouter->Name = L"LComplementAjouter";
			this->LComplementAjouter->Size = System::Drawing::Size(113, 13);
			this->LComplementAjouter->TabIndex = 16;
			this->LComplementAjouter->Text = L"Compl?ment d\'adresse";
			// 
			// LSuperieurAjouter
			// 
			this->LSuperieurAjouter->AutoSize = true;
			this->LSuperieurAjouter->Location = System::Drawing::Point(330, 323);
			this->LSuperieurAjouter->Name = L"LSuperieurAjouter";
			this->LSuperieurAjouter->Size = System::Drawing::Size(52, 13);
			this->LSuperieurAjouter->TabIndex = 15;
			this->LSuperieurAjouter->Text = L"Sup?rieur";
			// 
			// LMdpAjouter
			// 
			this->LMdpAjouter->AutoSize = true;
			this->LMdpAjouter->Location = System::Drawing::Point(17, 323);
			this->LMdpAjouter->Name = L"LMdpAjouter";
			this->LMdpAjouter->Size = System::Drawing::Size(71, 13);
			this->LMdpAjouter->TabIndex = 14;
			this->LMdpAjouter->Text = L"Mot de passe";
			// 
			// LPrenomAjouter
			// 
			this->LPrenomAjouter->AutoSize = true;
			this->LPrenomAjouter->Location = System::Drawing::Point(17, 100);
			this->LPrenomAjouter->Name = L"LPrenomAjouter";
			this->LPrenomAjouter->Size = System::Drawing::Size(43, 13);
			this->LPrenomAjouter->TabIndex = 13;
			this->LPrenomAjouter->Text = L"Pr?nom";
			// 
			// LUserAjouter
			// 
			this->LUserAjouter->AutoSize = true;
			this->LUserAjouter->Location = System::Drawing::Point(17, 258);
			this->LUserAjouter->Name = L"LUserAjouter";
			this->LUserAjouter->Size = System::Drawing::Size(84, 13);
			this->LUserAjouter->TabIndex = 12;
			this->LUserAjouter->Text = L"Nom d\'utilisateur";
			// 
			// LDateEmbauhceAjouter
			// 
			this->LDateEmbauhceAjouter->AutoSize = true;
			this->LDateEmbauhceAjouter->Location = System::Drawing::Point(17, 187);
			this->LDateEmbauhceAjouter->Name = L"LDateEmbauhceAjouter";
			this->LDateEmbauhceAjouter->Size = System::Drawing::Size(91, 13);
			this->LDateEmbauhceAjouter->TabIndex = 11;
			this->LDateEmbauhceAjouter->Text = L"Date d\'embauche";
			// 
			// LNomAjouter
			// 
			this->LNomAjouter->AutoSize = true;
			this->LNomAjouter->Location = System::Drawing::Point(17, 18);
			this->LNomAjouter->Name = L"LNomAjouter";
			this->LNomAjouter->Size = System::Drawing::Size(29, 13);
			this->LNomAjouter->TabIndex = 10;
			this->LNomAjouter->Text = L"Nom";
			// 
			// TBSuperieurAjouter
			// 
			this->TBSuperieurAjouter->Location = System::Drawing::Point(333, 339);
			this->TBSuperieurAjouter->Name = L"TBSuperieurAjouter";
			this->TBSuperieurAjouter->Size = System::Drawing::Size(144, 20);
			this->TBSuperieurAjouter->TabIndex = 9;
			// 
			// TBComplementAjouter
			// 
			this->TBComplementAjouter->Location = System::Drawing::Point(333, 203);
			this->TBComplementAjouter->Name = L"TBComplementAjouter";
			this->TBComplementAjouter->Size = System::Drawing::Size(66, 20);
			this->TBComplementAjouter->TabIndex = 8;
			// 
			// TBRueAjouter
			// 
			this->TBRueAjouter->Location = System::Drawing::Point(333, 116);
			this->TBRueAjouter->Name = L"TBRueAjouter";
			this->TBRueAjouter->Size = System::Drawing::Size(100, 20);
			this->TBRueAjouter->TabIndex = 7;
			// 
			// TBNumRueAjouter
			// 
			this->TBNumRueAjouter->Location = System::Drawing::Point(333, 34);
			this->TBNumRueAjouter->Name = L"TBNumRueAjouter";
			this->TBNumRueAjouter->Size = System::Drawing::Size(100, 20);
			this->TBNumRueAjouter->TabIndex = 6;
			// 
			// dateTimePickerEmbaucheAjouter
			// 
			this->dateTimePickerEmbaucheAjouter->Location = System::Drawing::Point(20, 203);
			this->dateTimePickerEmbaucheAjouter->Name = L"dateTimePickerEmbaucheAjouter";
			this->dateTimePickerEmbaucheAjouter->Size = System::Drawing::Size(186, 20);
			this->dateTimePickerEmbaucheAjouter->TabIndex = 4;
			// 
			// TBUserAjouter
			// 
			this->TBUserAjouter->Location = System::Drawing::Point(20, 274);
			this->TBUserAjouter->Name = L"TBUserAjouter";
			this->TBUserAjouter->Size = System::Drawing::Size(100, 20);
			this->TBUserAjouter->TabIndex = 3;
			// 
			// TBMdpAjouter
			// 
			this->TBMdpAjouter->Location = System::Drawing::Point(20, 339);
			this->TBMdpAjouter->Name = L"TBMdpAjouter";
			this->TBMdpAjouter->Size = System::Drawing::Size(100, 20);
			this->TBMdpAjouter->TabIndex = 2;
			// 
			// TBPrenomAjouter
			// 
			this->TBPrenomAjouter->Location = System::Drawing::Point(20, 116);
			this->TBPrenomAjouter->Name = L"TBPrenomAjouter";
			this->TBPrenomAjouter->Size = System::Drawing::Size(100, 20);
			this->TBPrenomAjouter->TabIndex = 1;
			// 
			// TBNomAjouter
			// 
			this->TBNomAjouter->Location = System::Drawing::Point(20, 34);
			this->TBNomAjouter->Name = L"TBNomAjouter";
			this->TBNomAjouter->Size = System::Drawing::Size(100, 20);
			this->TBNomAjouter->TabIndex = 0;
			// 
			// PanelModifierPersonnel
			// 
			this->PanelModifierPersonnel->Controls->Add(this->BtnValider);
			this->PanelModifierPersonnel->Controls->Add(this->LNomPrenomModifier);
			this->PanelModifierPersonnel->Controls->Add(this->comboBoxNomPrenomModifer);
			this->PanelModifierPersonnel->Controls->Add(this->BtnModifierPersonnel);
			this->PanelModifierPersonnel->Controls->Add(this->LVilleModifier);
			this->PanelModifierPersonnel->Controls->Add(this->BoxVilleModifier);
			this->PanelModifierPersonnel->Controls->Add(this->LNomRueModifier);
			this->PanelModifierPersonnel->Controls->Add(this->LNumVoieModifier);
			this->PanelModifierPersonnel->Controls->Add(this->LComplementModifier);
			this->PanelModifierPersonnel->Controls->Add(this->LSuperieurModifier);
			this->PanelModifierPersonnel->Controls->Add(this->LMdpModifier);
			this->PanelModifierPersonnel->Controls->Add(this->LPrenomModifier);
			this->PanelModifierPersonnel->Controls->Add(this->LUserModifier);
			this->PanelModifierPersonnel->Controls->Add(this->LDateEmbaucheModifier);
			this->PanelModifierPersonnel->Controls->Add(this->LNomModifier);
			this->PanelModifierPersonnel->Controls->Add(this->TBSuperieurModifier);
			this->PanelModifierPersonnel->Controls->Add(this->TBComplementModifier);
			this->PanelModifierPersonnel->Controls->Add(this->TBNomRueModifier);
			this->PanelModifierPersonnel->Controls->Add(this->TBNumRueModifier);
			this->PanelModifierPersonnel->Controls->Add(this->dateTimePickerEmbaucheModifier);
			this->PanelModifierPersonnel->Controls->Add(this->TBUserModifier);
			this->PanelModifierPersonnel->Controls->Add(this->TBMdpModifier);
			this->PanelModifierPersonnel->Controls->Add(this->TBPrenomModifier);
			this->PanelModifierPersonnel->Controls->Add(this->TBNomModifier);
			this->PanelModifierPersonnel->Location = System::Drawing::Point(624, 96);
			this->PanelModifierPersonnel->Name = L"PanelModifierPersonnel";
			this->PanelModifierPersonnel->Size = System::Drawing::Size(523, 512);
			this->PanelModifierPersonnel->TabIndex = 22;
			// 
			// BtnValider
			// 
			this->BtnValider->Location = System::Drawing::Point(358, 12);
			this->BtnValider->Name = L"BtnValider";
			this->BtnValider->Size = System::Drawing::Size(75, 23);
			this->BtnValider->TabIndex = 24;
			this->BtnValider->Text = L"Valider";
			this->BtnValider->UseVisualStyleBackColor = true;
			this->BtnValider->Click += gcnew System::EventHandler(this, &Personnel::BtnValider_Click);
			// 
			// LNomPrenomModifier
			// 
			this->LNomPrenomModifier->AutoSize = true;
			this->LNomPrenomModifier->Location = System::Drawing::Point(75, 17);
			this->LNomPrenomModifier->Name = L"LNomPrenomModifier";
			this->LNomPrenomModifier->Size = System::Drawing::Size(76, 13);
			this->LNomPrenomModifier->TabIndex = 23;
			this->LNomPrenomModifier->Text = L"Nom, pr?nom :";
			// 
			// comboBoxNomPrenomModifer
			// 
			this->comboBoxNomPrenomModifer->FormattingEnabled = true;
			this->comboBoxNomPrenomModifer->Location = System::Drawing::Point(153, 14);
			this->comboBoxNomPrenomModifer->Name = L"comboBoxNomPrenomModifer";
			this->comboBoxNomPrenomModifer->Size = System::Drawing::Size(171, 21);
			this->comboBoxNomPrenomModifer->TabIndex = 22;
			// 
			// BtnModifierPersonnel
			// 
			this->BtnModifierPersonnel->Location = System::Drawing::Point(138, 449);
			this->BtnModifierPersonnel->Name = L"BtnModifierPersonnel";
			this->BtnModifierPersonnel->Size = System::Drawing::Size(185, 46);
			this->BtnModifierPersonnel->TabIndex = 21;
			this->BtnModifierPersonnel->Text = L"Modifier";
			this->BtnModifierPersonnel->UseVisualStyleBackColor = true;
			this->BtnModifierPersonnel->Click += gcnew System::EventHandler(this, &Personnel::BtnModifierPersonnel_Click);
			// 
			// LVilleModifier
			// 
			this->LVilleModifier->AutoSize = true;
			this->LVilleModifier->Location = System::Drawing::Point(330, 324);
			this->LVilleModifier->Name = L"LVilleModifier";
			this->LVilleModifier->Size = System::Drawing::Size(26, 13);
			this->LVilleModifier->TabIndex = 20;
			this->LVilleModifier->Text = L"Ville";
			// 
			// BoxVilleModifier
			// 
			this->BoxVilleModifier->FormattingEnabled = true;
			this->BoxVilleModifier->Location = System::Drawing::Point(333, 340);
			this->BoxVilleModifier->Name = L"BoxVilleModifier";
			this->BoxVilleModifier->Size = System::Drawing::Size(121, 21);
			this->BoxVilleModifier->Sorted = true;
			this->BoxVilleModifier->TabIndex = 19;
			// 
			// LNomRueModifier
			// 
			this->LNomRueModifier->AutoSize = true;
			this->LNomRueModifier->Location = System::Drawing::Point(330, 166);
			this->LNomRueModifier->Name = L"LNomRueModifier";
			this->LNomRueModifier->Size = System::Drawing::Size(67, 13);
			this->LNomRueModifier->TabIndex = 18;
			this->LNomRueModifier->Text = L"Nom de voie";
			// 
			// LNumVoieModifier
			// 
			this->LNumVoieModifier->AutoSize = true;
			this->LNumVoieModifier->Location = System::Drawing::Point(330, 84);
			this->LNumVoieModifier->Name = L"LNumVoieModifier";
			this->LNumVoieModifier->Size = System::Drawing::Size(82, 13);
			this->LNumVoieModifier->TabIndex = 17;
			this->LNumVoieModifier->Text = L"Num?ro de voie";
			// 
			// LComplementModifier
			// 
			this->LComplementModifier->AutoSize = true;
			this->LComplementModifier->Location = System::Drawing::Point(330, 253);
			this->LComplementModifier->Name = L"LComplementModifier";
			this->LComplementModifier->Size = System::Drawing::Size(113, 13);
			this->LComplementModifier->TabIndex = 16;
			this->LComplementModifier->Text = L"Compl?ment d\'adresse";
			// 
			// LSuperieurModifier
			// 
			this->LSuperieurModifier->AutoSize = true;
			this->LSuperieurModifier->Location = System::Drawing::Point(330, 389);
			this->LSuperieurModifier->Name = L"LSuperieurModifier";
			this->LSuperieurModifier->Size = System::Drawing::Size(52, 13);
			this->LSuperieurModifier->TabIndex = 15;
			this->LSuperieurModifier->Text = L"Sup?rieur";
			// 
			// LMdpModifier
			// 
			this->LMdpModifier->AutoSize = true;
			this->LMdpModifier->Location = System::Drawing::Point(17, 389);
			this->LMdpModifier->Name = L"LMdpModifier";
			this->LMdpModifier->Size = System::Drawing::Size(71, 13);
			this->LMdpModifier->TabIndex = 14;
			this->LMdpModifier->Text = L"Mot de passe";
			// 
			// LPrenomModifier
			// 
			this->LPrenomModifier->AutoSize = true;
			this->LPrenomModifier->Location = System::Drawing::Point(17, 166);
			this->LPrenomModifier->Name = L"LPrenomModifier";
			this->LPrenomModifier->Size = System::Drawing::Size(43, 13);
			this->LPrenomModifier->TabIndex = 13;
			this->LPrenomModifier->Text = L"Pr?nom";
			// 
			// LUserModifier
			// 
			this->LUserModifier->AutoSize = true;
			this->LUserModifier->Location = System::Drawing::Point(17, 324);
			this->LUserModifier->Name = L"LUserModifier";
			this->LUserModifier->Size = System::Drawing::Size(84, 13);
			this->LUserModifier->TabIndex = 12;
			this->LUserModifier->Text = L"Nom d\'utilisateur";
			// 
			// LDateEmbaucheModifier
			// 
			this->LDateEmbaucheModifier->AutoSize = true;
			this->LDateEmbaucheModifier->Location = System::Drawing::Point(17, 253);
			this->LDateEmbaucheModifier->Name = L"LDateEmbaucheModifier";
			this->LDateEmbaucheModifier->Size = System::Drawing::Size(91, 13);
			this->LDateEmbaucheModifier->TabIndex = 11;
			this->LDateEmbaucheModifier->Text = L"Date d\'embauche";
			// 
			// LNomModifier
			// 
			this->LNomModifier->AutoSize = true;
			this->LNomModifier->Location = System::Drawing::Point(17, 84);
			this->LNomModifier->Name = L"LNomModifier";
			this->LNomModifier->Size = System::Drawing::Size(29, 13);
			this->LNomModifier->TabIndex = 10;
			this->LNomModifier->Text = L"Nom";
			// 
			// TBSuperieurModifier
			// 
			this->TBSuperieurModifier->Location = System::Drawing::Point(333, 405);
			this->TBSuperieurModifier->Name = L"TBSuperieurModifier";
			this->TBSuperieurModifier->Size = System::Drawing::Size(144, 20);
			this->TBSuperieurModifier->TabIndex = 9;
			// 
			// TBComplementModifier
			// 
			this->TBComplementModifier->Location = System::Drawing::Point(333, 269);
			this->TBComplementModifier->Name = L"TBComplementModifier";
			this->TBComplementModifier->Size = System::Drawing::Size(66, 20);
			this->TBComplementModifier->TabIndex = 8;
			// 
			// TBNomRueModifier
			// 
			this->TBNomRueModifier->Location = System::Drawing::Point(333, 182);
			this->TBNomRueModifier->Name = L"TBNomRueModifier";
			this->TBNomRueModifier->Size = System::Drawing::Size(100, 20);
			this->TBNomRueModifier->TabIndex = 7;
			// 
			// TBNumRueModifier
			// 
			this->TBNumRueModifier->Location = System::Drawing::Point(333, 100);
			this->TBNumRueModifier->Name = L"TBNumRueModifier";
			this->TBNumRueModifier->Size = System::Drawing::Size(100, 20);
			this->TBNumRueModifier->TabIndex = 6;
			// 
			// dateTimePickerEmbaucheModifier
			// 
			this->dateTimePickerEmbaucheModifier->Location = System::Drawing::Point(20, 269);
			this->dateTimePickerEmbaucheModifier->Name = L"dateTimePickerEmbaucheModifier";
			this->dateTimePickerEmbaucheModifier->Size = System::Drawing::Size(186, 20);
			this->dateTimePickerEmbaucheModifier->TabIndex = 4;
			// 
			// TBUserModifier
			// 
			this->TBUserModifier->Location = System::Drawing::Point(20, 340);
			this->TBUserModifier->Name = L"TBUserModifier";
			this->TBUserModifier->Size = System::Drawing::Size(100, 20);
			this->TBUserModifier->TabIndex = 3;
			// 
			// TBMdpModifier
			// 
			this->TBMdpModifier->Location = System::Drawing::Point(20, 405);
			this->TBMdpModifier->Name = L"TBMdpModifier";
			this->TBMdpModifier->Size = System::Drawing::Size(100, 20);
			this->TBMdpModifier->TabIndex = 2;
			// 
			// TBPrenomModifier
			// 
			this->TBPrenomModifier->Location = System::Drawing::Point(20, 182);
			this->TBPrenomModifier->Name = L"TBPrenomModifier";
			this->TBPrenomModifier->Size = System::Drawing::Size(100, 20);
			this->TBPrenomModifier->TabIndex = 1;
			// 
			// TBNomModifier
			// 
			this->TBNomModifier->Location = System::Drawing::Point(20, 100);
			this->TBNomModifier->Name = L"TBNomModifier";
			this->TBNomModifier->Size = System::Drawing::Size(100, 20);
			this->TBNomModifier->TabIndex = 0;
			// 
			// BtnLabelAjouterPersonnel
			// 
			this->BtnLabelAjouterPersonnel->Location = System::Drawing::Point(104, 298);
			this->BtnLabelAjouterPersonnel->Name = L"BtnLabelAjouterPersonnel";
			this->BtnLabelAjouterPersonnel->Size = System::Drawing::Size(155, 76);
			this->BtnLabelAjouterPersonnel->TabIndex = 1;
			this->BtnLabelAjouterPersonnel->Text = L"Ajouter un nouveau\r\npersonnel";
			this->BtnLabelAjouterPersonnel->UseVisualStyleBackColor = true;
			this->BtnLabelAjouterPersonnel->Click += gcnew System::EventHandler(this, &Personnel::BtnLabelAjouterPersonnel_Click);
			// 
			// BtnLabelRechercherPersonnel
			// 
			this->BtnLabelRechercherPersonnel->Location = System::Drawing::Point(265, 298);
			this->BtnLabelRechercherPersonnel->Name = L"BtnLabelRechercherPersonnel";
			this->BtnLabelRechercherPersonnel->Size = System::Drawing::Size(155, 76);
			this->BtnLabelRechercherPersonnel->TabIndex = 2;
			this->BtnLabelRechercherPersonnel->Text = L"Rechercher un personnel";
			this->BtnLabelRechercherPersonnel->UseVisualStyleBackColor = true;
			this->BtnLabelRechercherPersonnel->Click += gcnew System::EventHandler(this, &Personnel::BtnLabelRechercherPersonnel_Click);
			// 
			// BtnLabelModifierPersonnel
			// 
			this->BtnLabelModifierPersonnel->Location = System::Drawing::Point(104, 380);
			this->BtnLabelModifierPersonnel->Name = L"BtnLabelModifierPersonnel";
			this->BtnLabelModifierPersonnel->Size = System::Drawing::Size(155, 76);
			this->BtnLabelModifierPersonnel->TabIndex = 3;
			this->BtnLabelModifierPersonnel->Text = L"Modifier les informations \r\nd\'un personnel";
			this->BtnLabelModifierPersonnel->UseVisualStyleBackColor = true;
			this->BtnLabelModifierPersonnel->Click += gcnew System::EventHandler(this, &Personnel::BtnLabelModifierPersonnel_Click);
			// 
			// BtnLabelSupprimerPersonnel
			// 
			this->BtnLabelSupprimerPersonnel->Location = System::Drawing::Point(263, 380);
			this->BtnLabelSupprimerPersonnel->Name = L"BtnLabelSupprimerPersonnel";
			this->BtnLabelSupprimerPersonnel->Size = System::Drawing::Size(157, 76);
			this->BtnLabelSupprimerPersonnel->TabIndex = 4;
			this->BtnLabelSupprimerPersonnel->Text = L"Supprimer un personnel";
			this->BtnLabelSupprimerPersonnel->UseVisualStyleBackColor = true;
			this->BtnLabelSupprimerPersonnel->Click += gcnew System::EventHandler(this, &Personnel::BtnLabelSupprimerPersonnel_Click);
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
			this->menuStrip1->Location = System::Drawing::Point(185, 9);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1029, 45);
			this->menuStrip1->TabIndex = 5;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// personnelToolStripMenuItem
			// 
			this->personnelToolStripMenuItem->BackColor = System::Drawing::SystemColors::AppWorkspace;
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
			this->afficherUnPersonnelToolStripMenuItem->Click += gcnew System::EventHandler(this, &Personnel::afficherUnPersonnelToolStripMenuItem_Click);
			// 
			// ajouterUnPersonnelToolStripMenuItem
			// 
			this->ajouterUnPersonnelToolStripMenuItem->BackColor = System::Drawing::Color::LightGray;
			this->ajouterUnPersonnelToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->ajouterUnPersonnelToolStripMenuItem->Name = L"ajouterUnPersonnelToolStripMenuItem";
			this->ajouterUnPersonnelToolStripMenuItem->Size = System::Drawing::Size(256, 26);
			this->ajouterUnPersonnelToolStripMenuItem->Text = L"Ajouter un personnel";
			this->ajouterUnPersonnelToolStripMenuItem->Click += gcnew System::EventHandler(this, &Personnel::ajouterUnPersonnelToolStripMenuItem_Click);
			// 
			// modifierUnPersonnelToolStripMenuItem
			// 
			this->modifierUnPersonnelToolStripMenuItem->BackColor = System::Drawing::Color::LightGray;
			this->modifierUnPersonnelToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->modifierUnPersonnelToolStripMenuItem->Name = L"modifierUnPersonnelToolStripMenuItem";
			this->modifierUnPersonnelToolStripMenuItem->Size = System::Drawing::Size(256, 26);
			this->modifierUnPersonnelToolStripMenuItem->Text = L"Modifier un personnel";
			this->modifierUnPersonnelToolStripMenuItem->Click += gcnew System::EventHandler(this, &Personnel::modifierUnPersonnelToolStripMenuItem_Click);
			// 
			// supprimerUnPersonnelToolStripMenuItem
			// 
			this->supprimerUnPersonnelToolStripMenuItem->BackColor = System::Drawing::Color::LightGray;
			this->supprimerUnPersonnelToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->supprimerUnPersonnelToolStripMenuItem->Name = L"supprimerUnPersonnelToolStripMenuItem";
			this->supprimerUnPersonnelToolStripMenuItem->Size = System::Drawing::Size(256, 26);
			this->supprimerUnPersonnelToolStripMenuItem->Text = L"Supprimer un personnel";
			this->supprimerUnPersonnelToolStripMenuItem->Click += gcnew System::EventHandler(this, &Personnel::supprimerUnPersonnelToolStripMenuItem_Click);
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
			this->afficherUnClientToolStripMenuItem->Click += gcnew System::EventHandler(this, &Personnel::afficherUnClientToolStripMenuItem_Click);
			// 
			// ajouterUnClientToolStripMenuItem
			// 
			this->ajouterUnClientToolStripMenuItem->BackColor = System::Drawing::Color::LightGray;
			this->ajouterUnClientToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->ajouterUnClientToolStripMenuItem->Name = L"ajouterUnClientToolStripMenuItem";
			this->ajouterUnClientToolStripMenuItem->Size = System::Drawing::Size(228, 26);
			this->ajouterUnClientToolStripMenuItem->Text = L"Ajouter un client ";
			this->ajouterUnClientToolStripMenuItem->Click += gcnew System::EventHandler(this, &Personnel::ajouterUnClientToolStripMenuItem_Click);
			// 
			// modifierUnClientToolStripMenuItem
			// 
			this->modifierUnClientToolStripMenuItem->BackColor = System::Drawing::Color::LightGray;
			this->modifierUnClientToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->modifierUnClientToolStripMenuItem->Name = L"modifierUnClientToolStripMenuItem";
			this->modifierUnClientToolStripMenuItem->Size = System::Drawing::Size(228, 26);
			this->modifierUnClientToolStripMenuItem->Text = L"Modifier un client ";
			this->modifierUnClientToolStripMenuItem->Click += gcnew System::EventHandler(this, &Personnel::modifierUnClientToolStripMenuItem_Click);
			// 
			// supprimerUnClientToolStripMenuItem
			// 
			this->supprimerUnClientToolStripMenuItem->BackColor = System::Drawing::Color::LightGray;
			this->supprimerUnClientToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->supprimerUnClientToolStripMenuItem->Name = L"supprimerUnClientToolStripMenuItem";
			this->supprimerUnClientToolStripMenuItem->Size = System::Drawing::Size(228, 26);
			this->supprimerUnClientToolStripMenuItem->Text = L"Supprimer un client ";
			this->supprimerUnClientToolStripMenuItem->Click += gcnew System::EventHandler(this, &Personnel::supprimerUnClientToolStripMenuItem_Click);
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
			this->afficherLesCommandesToolStripMenuItem->Click += gcnew System::EventHandler(this, &Personnel::afficherLesCommandesToolStripMenuItem_Click);
			// 
			// ajouterUneCommandeToolStripMenuItem
			// 
			this->ajouterUneCommandeToolStripMenuItem->BackColor = System::Drawing::Color::LightGray;
			this->ajouterUneCommandeToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->ajouterUneCommandeToolStripMenuItem->Name = L"ajouterUneCommandeToolStripMenuItem";
			this->ajouterUneCommandeToolStripMenuItem->Size = System::Drawing::Size(273, 26);
			this->ajouterUneCommandeToolStripMenuItem->Text = L"Ajouter une commande";
			this->ajouterUneCommandeToolStripMenuItem->Click += gcnew System::EventHandler(this, &Personnel::ajouterUneCommandeToolStripMenuItem_Click);
			// 
			// modifierUneCommandeToolStripMenuItem
			// 
			this->modifierUneCommandeToolStripMenuItem->BackColor = System::Drawing::Color::LightGray;
			this->modifierUneCommandeToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->modifierUneCommandeToolStripMenuItem->Name = L"modifierUneCommandeToolStripMenuItem";
			this->modifierUneCommandeToolStripMenuItem->Size = System::Drawing::Size(273, 26);
			this->modifierUneCommandeToolStripMenuItem->Text = L"Modifier une commande";
			this->modifierUneCommandeToolStripMenuItem->Click += gcnew System::EventHandler(this, &Personnel::modifierUneCommandeToolStripMenuItem_Click);
			// 
			// supprimeruneCommandeToolStripMenuItem
			// 
			this->supprimeruneCommandeToolStripMenuItem->BackColor = System::Drawing::Color::LightGray;
			this->supprimeruneCommandeToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->supprimeruneCommandeToolStripMenuItem->Name = L"supprimeruneCommandeToolStripMenuItem";
			this->supprimeruneCommandeToolStripMenuItem->Size = System::Drawing::Size(273, 26);
			this->supprimeruneCommandeToolStripMenuItem->Text = L"Supprimer une commande";
			this->supprimeruneCommandeToolStripMenuItem->Click += gcnew System::EventHandler(this, &Personnel::supprimeruneCommandeToolStripMenuItem_Click);
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
			this->afficherLeStockToolStripMenuItem->Click += gcnew System::EventHandler(this, &Personnel::afficherLeStockToolStripMenuItem_Click);
			// 
			// ajouterUnArticleToolStripMenuItem
			// 
			this->ajouterUnArticleToolStripMenuItem->BackColor = System::Drawing::Color::LightGray;
			this->ajouterUnArticleToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->ajouterUnArticleToolStripMenuItem->Name = L"ajouterUnArticleToolStripMenuItem";
			this->ajouterUnArticleToolStripMenuItem->Size = System::Drawing::Size(229, 26);
			this->ajouterUnArticleToolStripMenuItem->Text = L"Ajouter un article";
			this->ajouterUnArticleToolStripMenuItem->Click += gcnew System::EventHandler(this, &Personnel::ajouterUnArticleToolStripMenuItem_Click);
			// 
			// modifierUnArticleToolStripMenuItem
			// 
			this->modifierUnArticleToolStripMenuItem->BackColor = System::Drawing::Color::LightGray;
			this->modifierUnArticleToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->modifierUnArticleToolStripMenuItem->Name = L"modifierUnArticleToolStripMenuItem";
			this->modifierUnArticleToolStripMenuItem->Size = System::Drawing::Size(229, 26);
			this->modifierUnArticleToolStripMenuItem->Text = L"Modifier un article";
			this->modifierUnArticleToolStripMenuItem->Click += gcnew System::EventHandler(this, &Personnel::modifierUnArticleToolStripMenuItem_Click);
			// 
			// supprimerUnArticleToolStripMenuItem
			// 
			this->supprimerUnArticleToolStripMenuItem->BackColor = System::Drawing::Color::LightGray;
			this->supprimerUnArticleToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->supprimerUnArticleToolStripMenuItem->Name = L"supprimerUnArticleToolStripMenuItem";
			this->supprimerUnArticleToolStripMenuItem->Size = System::Drawing::Size(229, 26);
			this->supprimerUnArticleToolStripMenuItem->Text = L"Supprimer un article";
			this->supprimerUnArticleToolStripMenuItem->Click += gcnew System::EventHandler(this, &Personnel::supprimerUnArticleToolStripMenuItem_Click);
			// 
			// statistiqueToolStripMenuItem
			// 
			this->statistiqueToolStripMenuItem->Name = L"statistiqueToolStripMenuItem";
			this->statistiqueToolStripMenuItem->Size = System::Drawing::Size(167, 41);
			this->statistiqueToolStripMenuItem->Text = L"Statistique";
			this->statistiqueToolStripMenuItem->Click += gcnew System::EventHandler(this, &Personnel::statistiqueToolStripMenuItem_Click);
			// 
			// monCompteToolStripMenuItem
			// 
			this->monCompteToolStripMenuItem->Name = L"monCompteToolStripMenuItem";
			this->monCompteToolStripMenuItem->Size = System::Drawing::Size(200, 41);
			this->monCompteToolStripMenuItem->Text = L"Mon compte ";
			this->monCompteToolStripMenuItem->Click += gcnew System::EventHandler(this, &Personnel::monCompteToolStripMenuItem_Click);
			// 
			// PanelSupprimerPersonnel
			// 
			this->PanelSupprimerPersonnel->Controls->Add(this->LNomPrenomSupprimer);
			this->PanelSupprimerPersonnel->Controls->Add(this->comboBoxNomPrenomSupprimer);
			this->PanelSupprimerPersonnel->Controls->Add(this->LQuestionSupprimer);
			this->PanelSupprimerPersonnel->Controls->Add(this->BtnSupprimerPersonnel);
			this->PanelSupprimerPersonnel->Location = System::Drawing::Point(624, 162);
			this->PanelSupprimerPersonnel->Name = L"PanelSupprimerPersonnel";
			this->PanelSupprimerPersonnel->Size = System::Drawing::Size(523, 446);
			this->PanelSupprimerPersonnel->TabIndex = 23;
			// 
			// LNomPrenomSupprimer
			// 
			this->LNomPrenomSupprimer->AutoSize = true;
			this->LNomPrenomSupprimer->Location = System::Drawing::Point(123, 99);
			this->LNomPrenomSupprimer->Name = L"LNomPrenomSupprimer";
			this->LNomPrenomSupprimer->Size = System::Drawing::Size(71, 13);
			this->LNomPrenomSupprimer->TabIndex = 24;
			this->LNomPrenomSupprimer->Text = L"Nom, Pr?nom";
			// 
			// comboBoxNomPrenomSupprimer
			// 
			this->comboBoxNomPrenomSupprimer->FormattingEnabled = true;
			this->comboBoxNomPrenomSupprimer->Location = System::Drawing::Point(126, 115);
			this->comboBoxNomPrenomSupprimer->Name = L"comboBoxNomPrenomSupprimer";
			this->comboBoxNomPrenomSupprimer->Size = System::Drawing::Size(247, 21);
			this->comboBoxNomPrenomSupprimer->Sorted = true;
			this->comboBoxNomPrenomSupprimer->TabIndex = 23;
			// 
			// LQuestionSupprimer
			// 
			this->LQuestionSupprimer->AutoSize = true;
			this->LQuestionSupprimer->Location = System::Drawing::Point(164, 31);
			this->LQuestionSupprimer->Name = L"LQuestionSupprimer";
			this->LQuestionSupprimer->Size = System::Drawing::Size(178, 13);
			this->LQuestionSupprimer->TabIndex = 22;
			this->LQuestionSupprimer->Text = L"Quelle est la personne ? supprimer \?";
			// 
			// BtnSupprimerPersonnel
			// 
			this->BtnSupprimerPersonnel->Location = System::Drawing::Point(167, 192);
			this->BtnSupprimerPersonnel->Name = L"BtnSupprimerPersonnel";
			this->BtnSupprimerPersonnel->Size = System::Drawing::Size(185, 46);
			this->BtnSupprimerPersonnel->TabIndex = 21;
			this->BtnSupprimerPersonnel->Text = L"Supprimer";
			this->BtnSupprimerPersonnel->UseVisualStyleBackColor = true;
			this->BtnSupprimerPersonnel->Click += gcnew System::EventHandler(this, &Personnel::BtnSupprimerPersonnel_Click);
			// 
			// PanelAfficherPersonnel
			// 
			this->PanelAfficherPersonnel->Controls->Add(this->BtnRechercherPersonnel);
			this->PanelAfficherPersonnel->Controls->Add(this->LSuperieurAffcher);
			this->PanelAfficherPersonnel->Controls->Add(this->LVilleAfficher);
			this->PanelAfficherPersonnel->Controls->Add(this->LPrenomAfficher);
			this->PanelAfficherPersonnel->Controls->Add(this->LNomAfficher);
			this->PanelAfficherPersonnel->Controls->Add(this->LDateEmbaucheAfficher);
			this->PanelAfficherPersonnel->Controls->Add(this->comboBoxVilleAfficher);
			this->PanelAfficherPersonnel->Controls->Add(this->comboBoxSupAfficher);
			this->PanelAfficherPersonnel->Controls->Add(this->comboBoxPrenomAfficher);
			this->PanelAfficherPersonnel->Controls->Add(this->ComboBoxNomAfficher);
			this->PanelAfficherPersonnel->Controls->Add(this->dateTimePickerDateEmbaucheAfficher);
			this->PanelAfficherPersonnel->Controls->Add(this->LQuestionAfficher);
			this->PanelAfficherPersonnel->Controls->Add(this->dataGridView1);
			this->PanelAfficherPersonnel->Location = System::Drawing::Point(471, 162);
			this->PanelAfficherPersonnel->Name = L"PanelAfficherPersonnel";
			this->PanelAfficherPersonnel->Size = System::Drawing::Size(676, 456);
			this->PanelAfficherPersonnel->TabIndex = 25;
			// 
			// BtnRechercherPersonnel
			// 
			this->BtnRechercherPersonnel->Location = System::Drawing::Point(519, 86);
			this->BtnRechercherPersonnel->Name = L"BtnRechercherPersonnel";
			this->BtnRechercherPersonnel->Size = System::Drawing::Size(151, 38);
			this->BtnRechercherPersonnel->TabIndex = 12;
			this->BtnRechercherPersonnel->Text = L"Rechercher";
			this->BtnRechercherPersonnel->UseVisualStyleBackColor = true;
			this->BtnRechercherPersonnel->Click += gcnew System::EventHandler(this, &Personnel::BtnRechercherPersonnel_Click);
			// 
			// LSuperieurAffcher
			// 
			this->LSuperieurAffcher->AutoSize = true;
			this->LSuperieurAffcher->Location = System::Drawing::Point(306, 77);
			this->LSuperieurAffcher->Name = L"LSuperieurAffcher";
			this->LSuperieurAffcher->Size = System::Drawing::Size(52, 13);
			this->LSuperieurAffcher->TabIndex = 11;
			this->LSuperieurAffcher->Text = L"Superieur";
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
			// LDateEmbaucheAfficher
			// 
			this->LDateEmbaucheAfficher->AutoSize = true;
			this->LDateEmbaucheAfficher->Location = System::Drawing::Point(3, 34);
			this->LDateEmbaucheAfficher->Name = L"LDateEmbaucheAfficher";
			this->LDateEmbaucheAfficher->Size = System::Drawing::Size(89, 13);
			this->LDateEmbaucheAfficher->TabIndex = 7;
			this->LDateEmbaucheAfficher->Text = L"Date dembauche";
			// 
			// comboBoxVilleAfficher
			// 
			this->comboBoxVilleAfficher->FormattingEnabled = true;
			this->comboBoxVilleAfficher->ItemHeight = 13;
			this->comboBoxVilleAfficher->Location = System::Drawing::Point(6, 93);
			this->comboBoxVilleAfficher->Name = L"comboBoxVilleAfficher";
			this->comboBoxVilleAfficher->Size = System::Drawing::Size(121, 21);
			this->comboBoxVilleAfficher->Sorted = true;
			this->comboBoxVilleAfficher->TabIndex = 6;
			// 
			// comboBoxSupAfficher
			// 
			this->comboBoxSupAfficher->FormattingEnabled = true;
			this->comboBoxSupAfficher->Location = System::Drawing::Point(309, 93);
			this->comboBoxSupAfficher->Name = L"comboBoxSupAfficher";
			this->comboBoxSupAfficher->Size = System::Drawing::Size(121, 21);
			this->comboBoxSupAfficher->Sorted = true;
			this->comboBoxSupAfficher->TabIndex = 5;
			// 
			// comboBoxPrenomAfficher
			// 
			this->comboBoxPrenomAfficher->FormattingEnabled = true;
			this->comboBoxPrenomAfficher->Location = System::Drawing::Point(549, 53);
			this->comboBoxPrenomAfficher->Name = L"comboBoxPrenomAfficher";
			this->comboBoxPrenomAfficher->Size = System::Drawing::Size(121, 21);
			this->comboBoxPrenomAfficher->Sorted = true;
			this->comboBoxPrenomAfficher->TabIndex = 4;
			// 
			// ComboBoxNomAfficher
			// 
			this->ComboBoxNomAfficher->FormattingEnabled = true;
			this->ComboBoxNomAfficher->Location = System::Drawing::Point(309, 51);
			this->ComboBoxNomAfficher->Name = L"ComboBoxNomAfficher";
			this->ComboBoxNomAfficher->Size = System::Drawing::Size(121, 21);
			this->ComboBoxNomAfficher->Sorted = true;
			this->ComboBoxNomAfficher->TabIndex = 3;
			// 
			// dateTimePickerDateEmbaucheAfficher
			// 
			this->dateTimePickerDateEmbaucheAfficher->Location = System::Drawing::Point(6, 50);
			this->dateTimePickerDateEmbaucheAfficher->Name = L"dateTimePickerDateEmbaucheAfficher";
			this->dateTimePickerDateEmbaucheAfficher->Size = System::Drawing::Size(200, 20);
			this->dateTimePickerDateEmbaucheAfficher->TabIndex = 2;
			// 
			// LQuestionAfficher
			// 
			this->LQuestionAfficher->AutoSize = true;
			this->LQuestionAfficher->Location = System::Drawing::Point(3, 5);
			this->LQuestionAfficher->Name = L"LQuestionAfficher";
			this->LQuestionAfficher->Size = System::Drawing::Size(223, 13);
			this->LQuestionAfficher->TabIndex = 1;
			this->LQuestionAfficher->Text = L"Quel(s) est/sont le/les crit?res de recherche \?";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(6, 132);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(664, 314);
			this->dataGridView1->TabIndex = 0;
			// 
			// Personnel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1301, 628);
			this->Controls->Add(this->BtnLabelSupprimerPersonnel);
			this->Controls->Add(this->BtnLabelModifierPersonnel);
			this->Controls->Add(this->BtnLabelRechercherPersonnel);
			this->Controls->Add(this->BtnLabelAjouterPersonnel);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->PanelAfficherPersonnel);
			this->Controls->Add(this->PanelSupprimerPersonnel);
			this->Controls->Add(this->PanelAjouterPersonnel);
			this->Controls->Add(this->PanelModifierPersonnel);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Personnel";
			this->Text = L"Personnel";
			this->Load += gcnew System::EventHandler(this, &Personnel::Personnel_Load);
			this->PanelAjouterPersonnel->ResumeLayout(false);
			this->PanelAjouterPersonnel->PerformLayout();
			this->PanelModifierPersonnel->ResumeLayout(false);
			this->PanelModifierPersonnel->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->PanelSupprimerPersonnel->ResumeLayout(false);
			this->PanelSupprimerPersonnel->PerformLayout();
			this->PanelAfficherPersonnel->ResumeLayout(false);
			this->PanelAfficherPersonnel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Personnel_Load(System::Object^ sender, System::EventArgs^ e) {
		monControleur = gcnew Controleur;

		monControleur->gestion_panel(PanelAjouterPersonnel, PanelModifierPersonnel, PanelAfficherPersonnel, PanelSupprimerPersonnel, false);
		monControleur->CnxComboBox_BDD(BoxVilleAjouter, "select ville from Ville");
		monControleur->CnxComboBox_BDD(ComboBoxNomAfficher, "Select (nom_Personnel) from Personnel");
		monControleur->CnxComboBox_BDD(comboBoxPrenomAfficher, "select (prenom_Personnel) from Personnel");
		monControleur->CnxComboBox_BDD(comboBoxSupAfficher, "select nom_Personnel, prenom_Personnel from Personnel where id_Personnel = id_Personnel_Superieur");
		monControleur->CnxComboBox_BDD(comboBoxVilleAfficher, "select ville from Ville");
		monControleur->CnxComboBox_BDD(BoxVilleModifier, "select ville from Ville");
		monControleur->CnxComboBox_BDD(comboBoxNomPrenomModifer, "select nom_personnel, prenom_personnel from personnel");
		monControleur->CnxComboBox_BDD(comboBoxNomPrenomSupprimer, "select nom_Personnel, prenom_Personnel from Personnel");
		
		monControleur->chargementdata(dataGridView1, "select * from personnel");

		this->personnelToolStripMenuItem->BackColor = System::Drawing::SystemColors::ControlLight;
	}
	
public: void setPanelAff(int);

	  void Form1_FormClosed(Object^ sender, FormClosedEventArgs^ e) {
	  }

private: System::Void BtnLabelAjouterPersonnel_Click(System::Object^ sender, System::EventArgs^ e) {
	monControleur->gestion_panel(PanelAjouterPersonnel, PanelAfficherPersonnel, PanelModifierPersonnel, PanelSupprimerPersonnel, true);
	monControleur->CnxComboBox_BDD(BoxVilleAjouter, "select ville from Ville");
	monControleur->gestion_panel(PanelAjouterPersonnel, PanelAfficherPersonnel, PanelModifierPersonnel, PanelSupprimerPersonnel, true);
}
private: System::Void BtnLabelRechercherPersonnel_Click(System::Object^ sender, System::EventArgs^ e) {
	monControleur->gestion_panel(PanelAfficherPersonnel, PanelAjouterPersonnel, PanelModifierPersonnel, PanelSupprimerPersonnel, true);
	monControleur->CnxComboBox_BDD(ComboBoxNomAfficher, "Select (nom_Personnel) from Personnel");
	monControleur->CnxComboBox_BDD(comboBoxPrenomAfficher, "select (prenom_Personnel) from Personnel");
	monControleur->CnxComboBox_BDD(comboBoxSupAfficher, "select nom_Personnel, prenom_Personnel from Personnel where id_Personnel = id_Personnel_Superieur");
	monControleur->CnxComboBox_BDD(comboBoxVilleAfficher, "select ville from Ville");
	monControleur->gestion_panel(PanelAfficherPersonnel, PanelAjouterPersonnel, PanelModifierPersonnel, PanelSupprimerPersonnel, true);
}
private: System::Void BtnLabelModifierPersonnel_Click(System::Object^ sender, System::EventArgs^ e)
{
	monControleur->gestion_panel(PanelModifierPersonnel, PanelAjouterPersonnel, PanelAfficherPersonnel, PanelSupprimerPersonnel, true);
	monControleur->CnxComboBox_BDD(BoxVilleModifier, "select ville from Ville");
	monControleur->CnxComboBox_BDD(comboBoxNomPrenomModifer, "select nom_personnel, prenom_personnel from personnel");
}



private: System::Void afficherUnPersonnelToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	monControleur->gestion_panel(PanelAfficherPersonnel, PanelAjouterPersonnel, PanelModifierPersonnel, PanelSupprimerPersonnel, true);
}
private: System::Void ajouterUnPersonnelToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	monControleur->gestion_panel(PanelAjouterPersonnel, PanelAfficherPersonnel, PanelModifierPersonnel, PanelSupprimerPersonnel, true);
}
private: System::Void modifierUnPersonnelToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	monControleur->gestion_panel(PanelModifierPersonnel, PanelAjouterPersonnel, PanelAfficherPersonnel, PanelSupprimerPersonnel, true);
}
private: System::Void supprimerUnPersonnelToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	monControleur->gestion_panel(PanelSupprimerPersonnel, PanelAjouterPersonnel, PanelModifierPersonnel, PanelAfficherPersonnel, true);
}


private: System::Void afficherUnClientToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	monControleur->afficher_form("client", 1);
}
private: System::Void ajouterUnClientToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	monControleur->afficher_form("client", 2);
}
private: System::Void modifierUnClientToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	monControleur->afficher_form("client", 3);
}
private: System::Void supprimerUnClientToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	monControleur->afficher_form("client", 4);
}

private: System::Void afficherLesCommandesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	monControleur->afficher_form("commande", 2);
}
private: System::Void ajouterUneCommandeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	monControleur->afficher_form("commande", 1);
}
private: System::Void modifierUneCommandeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	monControleur->afficher_form("commande", 3);
}
private: System::Void supprimeruneCommandeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	monControleur->afficher_form("commande", 4);
}

private: System::Void afficherLeStockToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	monControleur->afficher_form("article", 2);
}
private: System::Void ajouterUnArticleToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	monControleur->afficher_form("article", 1);
}
private: System::Void modifierUnArticleToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	monControleur->afficher_form("article", 3);
}
private: System::Void supprimerUnArticleToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	monControleur->afficher_form("article", 4);
}

private: System::Void statistiqueToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	monControleur->afficher_form("stats", 0);
}

private: System::Void monCompteToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	monControleur->afficher_form("monCompte", 0);
}
private: System::Void BtnLabelSupprimerPersonnel_Click(System::Object^ sender, System::EventArgs^ e) 
{
	monControleur->gestion_panel(PanelSupprimerPersonnel, PanelAjouterPersonnel, PanelModifierPersonnel, PanelAfficherPersonnel, true);
	monControleur->CnxComboBox_BDD(comboBoxNomPrenomSupprimer, "select nom_Personnel, prenom_Personnel from Personnel");
}


private: System::Void BtnAjouterPersonnel_Click(System::Object^ sender, System::EventArgs^ e) 
{
	monControleur->ajouterPersonnel(TBNomAjouter, TBPrenomAjouter, dateTimePickerEmbaucheAjouter, TBUserAjouter,
		TBMdpAjouter, TBNumRueAjouter, TBRueAjouter, TBComplementAjouter, BoxVilleAjouter, TBSuperieurAjouter);
}
private: System::Void BtnSupprimerPersonnel_Click(System::Object^ sender, System::EventArgs^ e) 
{
	monControleur->supprimerPersonnel(comboBoxNomPrenomSupprimer);
	
	

}
private: System::Void BtnValider_Click(System::Object^ sender, System::EventArgs^ e) 
{
	monControleur->afficherModifierPersonnel(comboBoxNomPrenomModifer, TBNomModifier, TBPrenomModifier, dateTimePickerEmbaucheModifier, TBUserModifier,
		TBMdpModifier, TBNumRueModifier, TBNomRueModifier, TBComplementModifier, BoxVilleModifier, TBSuperieurModifier);
}


private: System::Void BtnModifierPersonnel_Click(System::Object^ sender, System::EventArgs^ e) 
{
	monControleur->modifierPersonnel(TBNomModifier, TBPrenomModifier, dateTimePickerEmbaucheModifier, TBUserModifier,
		TBMdpModifier, TBNumRueModifier, TBNomRueModifier, TBComplementModifier, BoxVilleModifier, TBSuperieurModifier);
}


private: System::Void BtnRechercherPersonnel_Click(System::Object^ sender, System::EventArgs^ e) 
{
	monControleur->afficherPersonnel(dataGridView1, ComboBoxNomAfficher, comboBoxPrenomAfficher, comboBoxSupAfficher, comboBoxVilleAfficher,dateTimePickerDateEmbaucheAfficher);
}
};

}
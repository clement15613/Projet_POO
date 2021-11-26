#pragma once

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
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::Label^ label1;



	private: System::Windows::Forms::Label^ Prenom_employer_creer;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ mdp_personnel_creer;

	private: System::Windows::Forms::Label^ Nom_personnel_creer;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ btnGestionstock;
	private: System::Windows::Forms::Button^ btnGEstionCommande;
	private: System::Windows::Forms::Button^ btnMonProfil;
	private: System::Windows::Forms::Button^ btnGestionClients;
	private: System::Windows::Forms::Button^ btnGestionStatistique;
	private: System::Windows::Forms::Button^ btnGestionPersonnel;
	private: System::Windows::Forms::Panel^ panel2;



	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ cmdp_personnel_creer;


	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;


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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Nom_personnel_creer = (gcnew System::Windows::Forms::Label());
			this->mdp_personnel_creer = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->Prenom_employer_creer = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btnGestionstock = (gcnew System::Windows::Forms::Button());
			this->btnMonProfil = (gcnew System::Windows::Forms::Button());
			this->btnGestionStatistique = (gcnew System::Windows::Forms::Button());
			this->btnGestionPersonnel = (gcnew System::Windows::Forms::Button());
			this->btnGEstionCommande = (gcnew System::Windows::Forms::Button());
			this->btnGestionClients = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->cmdp_personnel_creer = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->dateTimePicker1);
			this->groupBox1->Controls->Add(this->cmdp_personnel_creer);
			this->groupBox1->Controls->Add(this->Prenom_employer_creer);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->mdp_personnel_creer);
			this->groupBox1->Controls->Add(this->Nom_personnel_creer);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(197, 100);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1064, 524);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"groupBox1";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &g_personnel::groupBox1_Enter);
			// 
			// label1
			// 
			this->label1->AccessibleName = L"";
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(7, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(164, 18);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Créer un Personnel :";
			this->label1->Click += gcnew System::EventHandler(this, &g_personnel::label1_Click);
			// 
			// Nom_personnel_creer
			// 
			this->Nom_personnel_creer->AutoSize = true;
			this->Nom_personnel_creer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->Nom_personnel_creer->Location = System::Drawing::Point(228, 102);
			this->Nom_personnel_creer->Name = L"Nom_personnel_creer";
			this->Nom_personnel_creer->Size = System::Drawing::Size(61, 24);
			this->Nom_personnel_creer->TabIndex = 1;
			this->Nom_personnel_creer->Text = L"Nom :";
			// 
			// mdp_personnel_creer
			// 
			this->mdp_personnel_creer->AutoSize = true;
			this->mdp_personnel_creer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->mdp_personnel_creer->Location = System::Drawing::Point(156, 206);
			this->mdp_personnel_creer->Name = L"mdp_personnel_creer";
			this->mdp_personnel_creer->Size = System::Drawing::Size(133, 24);
			this->mdp_personnel_creer->TabIndex = 2;
			this->mdp_personnel_creer->Text = L"Mot de passe :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->label3->Location = System::Drawing::Point(525, 203);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(159, 24);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Nom d\'utilisateur :";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->label4->Location = System::Drawing::Point(515, 306);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(169, 24);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Date d\'embauche :";
			// 
			// Prenom_employer_creer
			// 
			this->Prenom_employer_creer->AutoSize = true;
			this->Prenom_employer_creer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->Prenom_employer_creer->Location = System::Drawing::Point(597, 100);
			this->Prenom_employer_creer->Name = L"Prenom_employer_creer";
			this->Prenom_employer_creer->Size = System::Drawing::Size(87, 24);
			this->Prenom_employer_creer->TabIndex = 5;
			this->Prenom_employer_creer->Text = L"Prénom :";
			this->Prenom_employer_creer->Click += gcnew System::EventHandler(this, &g_personnel::label5_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->btnGestionstock);
			this->panel1->Controls->Add(this->btnGEstionCommande);
			this->panel1->Controls->Add(this->btnMonProfil);
			this->panel1->Controls->Add(this->btnGestionClients);
			this->panel1->Controls->Add(this->btnGestionStatistique);
			this->panel1->Controls->Add(this->btnGestionPersonnel);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1264, 100);
			this->panel1->TabIndex = 2;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &g_personnel::panel1_Paint);
			// 
			// btnGestionstock
			// 
			this->btnGestionstock->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->btnGestionstock->AutoSize = true;
			this->btnGestionstock->CausesValidation = false;
			this->btnGestionstock->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnGestionstock->Location = System::Drawing::Point(594, 24);
			this->btnGestionstock->Name = L"btnGestionstock";
			this->btnGestionstock->Size = System::Drawing::Size(175, 49);
			this->btnGestionstock->TabIndex = 13;
			this->btnGestionstock->Text = L"Gestion stock";
			this->btnGestionstock->UseVisualStyleBackColor = true;
			// 
			// btnMonProfil
			// 
			this->btnMonProfil->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->btnMonProfil->AutoSize = true;
			this->btnMonProfil->CausesValidation = false;
			this->btnMonProfil->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnMonProfil->Location = System::Drawing::Point(940, 24);
			this->btnMonProfil->Name = L"btnMonProfil";
			this->btnMonProfil->Size = System::Drawing::Size(175, 49);
			this->btnMonProfil->TabIndex = 12;
			this->btnMonProfil->Text = L"Profil";
			this->btnMonProfil->UseVisualStyleBackColor = true;
			// 
			// btnGestionStatistique
			// 
			this->btnGestionStatistique->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->btnGestionStatistique->AutoSize = true;
			this->btnGestionStatistique->CausesValidation = false;
			this->btnGestionStatistique->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnGestionStatistique->Location = System::Drawing::Point(767, 24);
			this->btnGestionStatistique->Name = L"btnGestionStatistique";
			this->btnGestionStatistique->Size = System::Drawing::Size(175, 49);
			this->btnGestionStatistique->TabIndex = 11;
			this->btnGestionStatistique->Text = L"Gestion Statistique";
			this->btnGestionStatistique->UseVisualStyleBackColor = true;
			// 
			// btnGestionPersonnel
			// 
			this->btnGestionPersonnel->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->btnGestionPersonnel->AutoSize = true;
			this->btnGestionPersonnel->CausesValidation = false;
			this->btnGestionPersonnel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnGestionPersonnel->Location = System::Drawing::Point(75, 24);
			this->btnGestionPersonnel->Name = L"btnGestionPersonnel";
			this->btnGestionPersonnel->Size = System::Drawing::Size(175, 49);
			this->btnGestionPersonnel->TabIndex = 10;
			this->btnGestionPersonnel->Text = L"Gestion Personnel";
			this->btnGestionPersonnel->UseVisualStyleBackColor = true;
			// 
			// btnGEstionCommande
			// 
			this->btnGEstionCommande->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->btnGEstionCommande->AutoSize = true;
			this->btnGEstionCommande->CausesValidation = false;
			this->btnGEstionCommande->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnGEstionCommande->Location = System::Drawing::Point(421, 24);
			this->btnGEstionCommande->Name = L"btnGEstionCommande";
			this->btnGEstionCommande->Size = System::Drawing::Size(175, 49);
			this->btnGEstionCommande->TabIndex = 9;
			this->btnGEstionCommande->Text = L"Gestion Commande";
			this->btnGEstionCommande->UseVisualStyleBackColor = true;
			// 
			// btnGestionClients
			// 
			this->btnGestionClients->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->btnGestionClients->AutoSize = true;
			this->btnGestionClients->CausesValidation = false;
			this->btnGestionClients->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnGestionClients->Location = System::Drawing::Point(248, 24);
			this->btnGestionClients->Name = L"btnGestionClients";
			this->btnGestionClients->Size = System::Drawing::Size(175, 49);
			this->btnGestionClients->TabIndex = 8;
			this->btnGestionClients->Text = L"Gestion Clients";
			this->btnGestionClients->UseVisualStyleBackColor = true;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->button4);
			this->panel2->Controls->Add(this->button3);
			this->panel2->Controls->Add(this->button2);
			this->panel2->Controls->Add(this->button1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel2->Location = System::Drawing::Point(0, 100);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(198, 536);
			this->panel2->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(27, 42);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(146, 82);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Créer un Personnel";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &g_personnel::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(27, 130);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(146, 82);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Créer un Personnel";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(27, 218);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(146, 82);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Créer un Personnel";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(27, 306);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(146, 82);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Créer un Personnel";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// cmdp_personnel_creer
			// 
			this->cmdp_personnel_creer->AutoSize = true;
			this->cmdp_personnel_creer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->cmdp_personnel_creer->Location = System::Drawing::Point(30, 308);
			this->cmdp_personnel_creer->Name = L"cmdp_personnel_creer";
			this->cmdp_personnel_creer->Size = System::Drawing::Size(259, 24);
			this->cmdp_personnel_creer->TabIndex = 6;
			this->cmdp_personnel_creer->Text = L"Cofirmation de Mot de passe :";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(690, 312);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker1->TabIndex = 7;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(296, 105);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(160, 20);
			this->textBox1->TabIndex = 8;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(296, 211);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(160, 20);
			this->textBox2->TabIndex = 9;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(295, 311);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(160, 20);
			this->textBox3->TabIndex = 10;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(690, 208);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(160, 20);
			this->textBox4->TabIndex = 11;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(690, 107);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(160, 20);
			this->textBox5->TabIndex = 12;
			// 
			// g_personnel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1264, 636);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"g_personnel";
			this->Text = L"g_personnel";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void domainUpDown1_SelectedItemChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}

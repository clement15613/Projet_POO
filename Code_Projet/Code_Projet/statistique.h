#pragma once

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
			this->btnGestionClients = (gcnew System::Windows::Forms::Button());
			this->btnGEstionCommande = (gcnew System::Windows::Forms::Button());
			this->btnGestionPersonnel = (gcnew System::Windows::Forms::Button());
			this->btnGestionstock = (gcnew System::Windows::Forms::Button());
			this->btnMonProfil = (gcnew System::Windows::Forms::Button());
			this->btnGestionStatistique = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btnGestionClients
			// 
			this->btnGestionClients->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->btnGestionClients->AutoSize = true;
			this->btnGestionClients->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnGestionClients->Location = System::Drawing::Point(186, 12);
			this->btnGestionClients->Name = L"btnGestionClients";
			this->btnGestionClients->Size = System::Drawing::Size(175, 49);
			this->btnGestionClients->TabIndex = 1;
			this->btnGestionClients->Text = L"Gestion Clients";
			this->btnGestionClients->UseVisualStyleBackColor = true;
			// 
			// btnGEstionCommande
			// 
			this->btnGEstionCommande->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->btnGEstionCommande->AutoSize = true;
			this->btnGEstionCommande->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnGEstionCommande->Location = System::Drawing::Point(359, 12);
			this->btnGEstionCommande->Name = L"btnGEstionCommande";
			this->btnGEstionCommande->Size = System::Drawing::Size(175, 49);
			this->btnGEstionCommande->TabIndex = 2;
			this->btnGEstionCommande->Text = L"Gestion Commande";
			this->btnGEstionCommande->UseVisualStyleBackColor = true;
			// 
			// btnGestionPersonnel
			// 
			this->btnGestionPersonnel->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->btnGestionPersonnel->AutoSize = true;
			this->btnGestionPersonnel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnGestionPersonnel->Location = System::Drawing::Point(13, 12);
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
			this->btnGestionstock->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnGestionstock->Location = System::Drawing::Point(532, 12);
			this->btnGestionstock->Name = L"btnGestionstock";
			this->btnGestionstock->Size = System::Drawing::Size(175, 49);
			this->btnGestionstock->TabIndex = 7;
			this->btnGestionstock->Text = L"Gestion stock";
			this->btnGestionstock->UseVisualStyleBackColor = true;
			// 
			// btnMonProfil
			// 
			this->btnMonProfil->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->btnMonProfil->AutoSize = true;
			this->btnMonProfil->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnMonProfil->Location = System::Drawing::Point(878, 12);
			this->btnMonProfil->Name = L"btnMonProfil";
			this->btnMonProfil->Size = System::Drawing::Size(175, 49);
			this->btnMonProfil->TabIndex = 6;
			this->btnMonProfil->Text = L"Profil";
			this->btnMonProfil->UseVisualStyleBackColor = true;
			// 
			// btnGestionStatistique
			// 
			this->btnGestionStatistique->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->btnGestionStatistique->AutoSize = true;
			this->btnGestionStatistique->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnGestionStatistique->Location = System::Drawing::Point(705, 12);
			this->btnGestionStatistique->Name = L"btnGestionStatistique";
			this->btnGestionStatistique->Size = System::Drawing::Size(175, 49);
			this->btnGestionStatistique->TabIndex = 5;
			this->btnGestionStatistique->Text = L"Gestion Statistique";
			this->btnGestionStatistique->UseVisualStyleBackColor = true;
			this->btnGestionStatistique->Click += gcnew System::EventHandler(this, &statistique::btnGestionStatistique_Click);
			// 
			// statistique
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1177, 579);
			this->Controls->Add(this->btnGestionstock);
			this->Controls->Add(this->btnMonProfil);
			this->Controls->Add(this->btnGestionStatistique);
			this->Controls->Add(this->btnGestionPersonnel);
			this->Controls->Add(this->btnGEstionCommande);
			this->Controls->Add(this->btnGestionClients);
			this->Name = L"statistique";
			this->Text = L"statistique";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void btnGestionStatistique_Click(System::Object^ sender, System::EventArgs^ e) 
{

}
};
}

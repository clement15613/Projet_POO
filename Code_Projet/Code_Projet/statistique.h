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
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart_topPlusVendu;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart_topMoinsVendu;
	private: System::Windows::Forms::Label^ label_panierMoyen;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Panel^ panel3;







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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea4 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart_topPlusVendu))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart_topMoinsVendu))->BeginInit();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnGestionClients
			// 
			this->btnGestionClients->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->btnGestionClients->AutoSize = true;
			this->btnGestionClients->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnGestionClients->Location = System::Drawing::Point(575, 32);
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
			this->btnGEstionCommande->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnGEstionCommande->Location = System::Drawing::Point(748, 32);
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
			this->btnGestionPersonnel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnGestionPersonnel->Location = System::Drawing::Point(402, 32);
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
			this->btnGestionstock->Location = System::Drawing::Point(921, 32);
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
			this->btnMonProfil->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnMonProfil->Location = System::Drawing::Point(1267, 32);
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
			this->btnGestionStatistique->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnGestionStatistique->Location = System::Drawing::Point(1094, 32);
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
			this->panel1->Size = System::Drawing::Size(1855, 114);
			this->panel1->TabIndex = 8;
			// 
			// chart_topPlusVendu
			// 
			chartArea3->Name = L"ChartArea1";
			this->chart_topPlusVendu->ChartAreas->Add(chartArea3);
			legend3->Name = L"Legend1";
			this->chart_topPlusVendu->Legends->Add(legend3);
			this->chart_topPlusVendu->Location = System::Drawing::Point(1184, 168);
			this->chart_topPlusVendu->Name = L"chart_topPlusVendu";
			series3->ChartArea = L"ChartArea1";
			series3->Legend = L"Legend1";
			series3->Name = L"Series1";
			this->chart_topPlusVendu->Series->Add(series3);
			this->chart_topPlusVendu->Size = System::Drawing::Size(615, 297);
			this->chart_topPlusVendu->TabIndex = 9;
			this->chart_topPlusVendu->Text = L"chart_topPlusVendu";
			this->chart_topPlusVendu->Click += gcnew System::EventHandler(this, &statistique::chart_topPlusVendu_Click);
			// 
			// chart_topMoinsVendu
			// 
			chartArea4->Name = L"ChartArea1";
			this->chart_topMoinsVendu->ChartAreas->Add(chartArea4);
			legend4->Name = L"Legend1";
			this->chart_topMoinsVendu->Legends->Add(legend4);
			this->chart_topMoinsVendu->Location = System::Drawing::Point(1184, 496);
			this->chart_topMoinsVendu->Name = L"chart_topMoinsVendu";
			series4->ChartArea = L"ChartArea1";
			series4->Legend = L"Legend1";
			series4->Name = L"Series1";
			this->chart_topMoinsVendu->Series->Add(series4);
			this->chart_topMoinsVendu->Size = System::Drawing::Size(615, 297);
			this->chart_topMoinsVendu->TabIndex = 10;
			this->chart_topMoinsVendu->Text = L"chart_topMoinsVendu";
			// 
			// label_panierMoyen
			// 
			this->label_panierMoyen->AutoSize = true;
			this->label_panierMoyen->Location = System::Drawing::Point(3, 23);
			this->label_panierMoyen->Name = L"label_panierMoyen";
			this->label_panierMoyen->Size = System::Drawing::Size(189, 13);
			this->label_panierMoyen->TabIndex = 11;
			this->label_panierMoyen->Text = L"Montant du panier moyen après remise";
			this->label_panierMoyen->Click += gcnew System::EventHandler(this, &statistique::label1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(210, 20);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(202, 20);
			this->textBox1->TabIndex = 12;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->textBox1);
			this->panel2->Controls->Add(this->label_panierMoyen);
			this->panel2->Location = System::Drawing::Point(12, 153);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(429, 105);
			this->panel2->TabIndex = 13;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(32, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(129, 13);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Chiffre d\'affaire sur le mois";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(113, 109);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(202, 20);
			this->textBox2->TabIndex = 13;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->label1);
			this->panel3->Controls->Add(this->textBox2);
			this->panel3->Location = System::Drawing::Point(459, 153);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(429, 220);
			this->panel3->TabIndex = 14;
			// 
			// statistique
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1879, 962);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->chart_topMoinsVendu);
			this->Controls->Add(this->chart_topPlusVendu);
			this->Controls->Add(this->panel1);
			this->Name = L"statistique";
			this->Text = L"statistique";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart_topPlusVendu))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart_topMoinsVendu))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

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

private: System::Void chart_topPlusVendu_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}

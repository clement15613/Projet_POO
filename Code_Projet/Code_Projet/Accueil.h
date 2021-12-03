#pragma once
#include "Controleur.h"
#include "Personnel.h"

namespace CodeProjet {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Description résumée de Accueil
	/// </summary>
	public ref class Accueil : public System::Windows::Forms::Form
	{
	public:
		Accueil(void)
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
		~Accueil()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn_es_pers;
	private: System::Windows::Forms::Button^ btn_es_pers_m;

	private: System::Windows::Forms::Button^ btn_es_pers_a;

	private: System::Windows::Forms::Button^ btn_es_pers_s;

	private: System::Windows::Forms::Button^ btn_es_pers_r;

	private: System::Windows::Forms::Button^ btn_es_client;



	private: System::Windows::Forms::Button^ btn_es_commande_r;
	private: System::Windows::Forms::Button^ btn_es_commande_s;
	private: System::Windows::Forms::Button^ btn_es_commande_a;
	private: System::Windows::Forms::Button^ btn_es_commande;
	private: System::Windows::Forms::Button^ btn_es_stock_r;


















	private: System::Windows::Forms::Button^ btn_es_stock_s;

	private: System::Windows::Forms::Button^ btn_es_stock_a;

	private: System::Windows::Forms::Button^ btn_es_stock;
	private: System::Windows::Forms::Button^ btn_es_stat;












	private: System::Windows::Forms::Button^ btn_mon_compte;

	private: System::Windows::Forms::Button^ btn_es_client_r;
	private: System::Windows::Forms::Button^ btn_es_client_s;


	private: System::Windows::Forms::Button^ btn_es_client_m;
	private: System::Windows::Forms::Button^ btn_es_client_a;




	private: System::Windows::Forms::Button^ btn_es_commande_m;
	private: System::Windows::Forms::Button^ btn_es_stock_m;
		   Controleur^ monControleur;
	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Accueil::typeid));
			this->btn_es_pers = (gcnew System::Windows::Forms::Button());
			this->btn_es_pers_m = (gcnew System::Windows::Forms::Button());
			this->btn_es_pers_a = (gcnew System::Windows::Forms::Button());
			this->btn_es_pers_s = (gcnew System::Windows::Forms::Button());
			this->btn_es_pers_r = (gcnew System::Windows::Forms::Button());
			this->btn_es_client = (gcnew System::Windows::Forms::Button());
			this->btn_es_commande_r = (gcnew System::Windows::Forms::Button());
			this->btn_es_commande_s = (gcnew System::Windows::Forms::Button());
			this->btn_es_commande_a = (gcnew System::Windows::Forms::Button());
			this->btn_es_commande = (gcnew System::Windows::Forms::Button());
			this->btn_es_stock_r = (gcnew System::Windows::Forms::Button());
			this->btn_es_stock_s = (gcnew System::Windows::Forms::Button());
			this->btn_es_stock_a = (gcnew System::Windows::Forms::Button());
			this->btn_es_stock = (gcnew System::Windows::Forms::Button());
			this->btn_es_stat = (gcnew System::Windows::Forms::Button());
			this->btn_mon_compte = (gcnew System::Windows::Forms::Button());
			this->btn_es_client_r = (gcnew System::Windows::Forms::Button());
			this->btn_es_client_s = (gcnew System::Windows::Forms::Button());
			this->btn_es_client_m = (gcnew System::Windows::Forms::Button());
			this->btn_es_client_a = (gcnew System::Windows::Forms::Button());
			this->btn_es_commande_m = (gcnew System::Windows::Forms::Button());
			this->btn_es_stock_m = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btn_es_pers
			// 
			this->btn_es_pers->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(225)), static_cast<System::Int32>(static_cast<System::Byte>(225)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->btn_es_pers->Font = (gcnew System::Drawing::Font(L"Century", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_es_pers->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btn_es_pers->Location = System::Drawing::Point(12, 12);
			this->btn_es_pers->Name = L"btn_es_pers";
			this->btn_es_pers->Size = System::Drawing::Size(336, 69);
			this->btn_es_pers->TabIndex = 0;
			this->btn_es_pers->Text = L"Espace personnel";
			this->btn_es_pers->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btn_es_pers->UseVisualStyleBackColor = false;
			this->btn_es_pers->Click += gcnew System::EventHandler(this, &Accueil::button1_Click);
			// 
			// btn_es_pers_m
			// 
			this->btn_es_pers_m->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(225)), static_cast<System::Int32>(static_cast<System::Byte>(225)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->btn_es_pers_m->Font = (gcnew System::Drawing::Font(L"Century", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_es_pers_m->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_es_pers_m.Image")));
			this->btn_es_pers_m->Location = System::Drawing::Point(183, 87);
			this->btn_es_pers_m->Name = L"btn_es_pers_m";
			this->btn_es_pers_m->Size = System::Drawing::Size(165, 69);
			this->btn_es_pers_m->TabIndex = 1;
			this->btn_es_pers_m->Text = L"   Modifier";
			this->btn_es_pers_m->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btn_es_pers_m->UseVisualStyleBackColor = false;
			this->btn_es_pers_m->Click += gcnew System::EventHandler(this, &Accueil::esp_pers_m_Click);
			// 
			// btn_es_pers_a
			// 
			this->btn_es_pers_a->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(225)), static_cast<System::Int32>(static_cast<System::Byte>(225)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->btn_es_pers_a->Font = (gcnew System::Drawing::Font(L"Century", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_es_pers_a->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_es_pers_a.Image")));
			this->btn_es_pers_a->Location = System::Drawing::Point(12, 87);
			this->btn_es_pers_a->Name = L"btn_es_pers_a";
			this->btn_es_pers_a->Size = System::Drawing::Size(165, 69);
			this->btn_es_pers_a->TabIndex = 2;
			this->btn_es_pers_a->Text = L"    Ajouter";
			this->btn_es_pers_a->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btn_es_pers_a->UseVisualStyleBackColor = false;
			this->btn_es_pers_a->Click += gcnew System::EventHandler(this, &Accueil::esp_pers_a_Click);
			// 
			// btn_es_pers_s
			// 
			this->btn_es_pers_s->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(225)), static_cast<System::Int32>(static_cast<System::Byte>(225)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->btn_es_pers_s->Font = (gcnew System::Drawing::Font(L"Century", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_es_pers_s->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_es_pers_s.Image")));
			this->btn_es_pers_s->Location = System::Drawing::Point(12, 162);
			this->btn_es_pers_s->Name = L"btn_es_pers_s";
			this->btn_es_pers_s->Size = System::Drawing::Size(165, 69);
			this->btn_es_pers_s->TabIndex = 3;
			this->btn_es_pers_s->Text = L"   Supprimer";
			this->btn_es_pers_s->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btn_es_pers_s->UseVisualStyleBackColor = false;
			this->btn_es_pers_s->Click += gcnew System::EventHandler(this, &Accueil::esp_pers_s_Click);
			// 
			// btn_es_pers_r
			// 
			this->btn_es_pers_r->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(225)), static_cast<System::Int32>(static_cast<System::Byte>(225)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->btn_es_pers_r->Font = (gcnew System::Drawing::Font(L"Century", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_es_pers_r->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_es_pers_r.Image")));
			this->btn_es_pers_r->Location = System::Drawing::Point(183, 162);
			this->btn_es_pers_r->Name = L"btn_es_pers_r";
			this->btn_es_pers_r->Size = System::Drawing::Size(165, 69);
			this->btn_es_pers_r->TabIndex = 4;
			this->btn_es_pers_r->Text = L"Rechercher";
			this->btn_es_pers_r->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btn_es_pers_r->UseVisualStyleBackColor = false;
			this->btn_es_pers_r->Click += gcnew System::EventHandler(this, &Accueil::esp_pers_r_Click);
			// 
			// btn_es_client
			// 
			this->btn_es_client->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(225)), static_cast<System::Int32>(static_cast<System::Byte>(225)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->btn_es_client->Font = (gcnew System::Drawing::Font(L"Century", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_es_client->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btn_es_client->Location = System::Drawing::Point(412, 12);
			this->btn_es_client->Name = L"btn_es_client";
			this->btn_es_client->Size = System::Drawing::Size(336, 69);
			this->btn_es_client->TabIndex = 5;
			this->btn_es_client->Text = L"Espace Client";
			this->btn_es_client->UseVisualStyleBackColor = false;
			// 
			// btn_es_commande_r
			// 
			this->btn_es_commande_r->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(225)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)), static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->btn_es_commande_r->Font = (gcnew System::Drawing::Font(L"Century", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_es_commande_r->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_es_commande_r.Image")));
			this->btn_es_commande_r->Location = System::Drawing::Point(979, 162);
			this->btn_es_commande_r->Name = L"btn_es_commande_r";
			this->btn_es_commande_r->Size = System::Drawing::Size(165, 69);
			this->btn_es_commande_r->TabIndex = 14;
			this->btn_es_commande_r->Text = L"Rechercher";
			this->btn_es_commande_r->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btn_es_commande_r->UseVisualStyleBackColor = false;
			this->btn_es_commande_r->Click += gcnew System::EventHandler(this, &Accueil::btn_es_commande_r_Click);
			// 
			// btn_es_commande_s
			// 
			this->btn_es_commande_s->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(225)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)), static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->btn_es_commande_s->Font = (gcnew System::Drawing::Font(L"Century", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_es_commande_s->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_es_commande_s.Image")));
			this->btn_es_commande_s->Location = System::Drawing::Point(808, 162);
			this->btn_es_commande_s->Name = L"btn_es_commande_s";
			this->btn_es_commande_s->Size = System::Drawing::Size(165, 69);
			this->btn_es_commande_s->TabIndex = 13;
			this->btn_es_commande_s->Text = L"Supprimer";
			this->btn_es_commande_s->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btn_es_commande_s->UseVisualStyleBackColor = false;
			this->btn_es_commande_s->Click += gcnew System::EventHandler(this, &Accueil::btn_es_commande_s_Click);
			// 
			// btn_es_commande_a
			// 
			this->btn_es_commande_a->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(225)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)), static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->btn_es_commande_a->Font = (gcnew System::Drawing::Font(L"Century", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_es_commande_a->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_es_commande_a.Image")));
			this->btn_es_commande_a->Location = System::Drawing::Point(808, 87);
			this->btn_es_commande_a->Name = L"btn_es_commande_a";
			this->btn_es_commande_a->Size = System::Drawing::Size(165, 69);
			this->btn_es_commande_a->TabIndex = 12;
			this->btn_es_commande_a->Text = L"Ajouter";
			this->btn_es_commande_a->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btn_es_commande_a->UseVisualStyleBackColor = false;
			this->btn_es_commande_a->Click += gcnew System::EventHandler(this, &Accueil::btn_es_commande_a_Click);
			// 
			// btn_es_commande
			// 
			this->btn_es_commande->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(225)), static_cast<System::Int32>(static_cast<System::Byte>(225)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->btn_es_commande->Font = (gcnew System::Drawing::Font(L"Century", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_es_commande->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btn_es_commande->Location = System::Drawing::Point(808, 12);
			this->btn_es_commande->Name = L"btn_es_commande";
			this->btn_es_commande->Size = System::Drawing::Size(336, 69);
			this->btn_es_commande->TabIndex = 10;
			this->btn_es_commande->Text = L"Espace Commande";
			this->btn_es_commande->UseVisualStyleBackColor = false;
			this->btn_es_commande->Click += gcnew System::EventHandler(this, &Accueil::btn_es_commande_Click);
			// 
			// btn_es_stock_r
			// 
			this->btn_es_stock_r->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(225)), static_cast<System::Int32>(static_cast<System::Byte>(225)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->btn_es_stock_r->Font = (gcnew System::Drawing::Font(L"Century", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_es_stock_r->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_es_stock_r.Image")));
			this->btn_es_stock_r->Location = System::Drawing::Point(584, 456);
			this->btn_es_stock_r->Name = L"btn_es_stock_r";
			this->btn_es_stock_r->Size = System::Drawing::Size(165, 69);
			this->btn_es_stock_r->TabIndex = 19;
			this->btn_es_stock_r->Text = L"Rechercher";
			this->btn_es_stock_r->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btn_es_stock_r->UseVisualStyleBackColor = false;
			this->btn_es_stock_r->Click += gcnew System::EventHandler(this, &Accueil::btn_es_stock_r_Click);
			// 
			// btn_es_stock_s
			// 
			this->btn_es_stock_s->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(225)), static_cast<System::Int32>(static_cast<System::Byte>(225)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->btn_es_stock_s->Font = (gcnew System::Drawing::Font(L"Century", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_es_stock_s->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_es_stock_s.Image")));
			this->btn_es_stock_s->Location = System::Drawing::Point(412, 459);
			this->btn_es_stock_s->Name = L"btn_es_stock_s";
			this->btn_es_stock_s->Size = System::Drawing::Size(165, 69);
			this->btn_es_stock_s->TabIndex = 18;
			this->btn_es_stock_s->Text = L"Supprimer";
			this->btn_es_stock_s->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btn_es_stock_s->UseVisualStyleBackColor = false;
			this->btn_es_stock_s->Click += gcnew System::EventHandler(this, &Accueil::btn_es_stock_s_Click);
			// 
			// btn_es_stock_a
			// 
			this->btn_es_stock_a->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(225)), static_cast<System::Int32>(static_cast<System::Byte>(225)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->btn_es_stock_a->Font = (gcnew System::Drawing::Font(L"Century", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_es_stock_a->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_es_stock_a.Image")));
			this->btn_es_stock_a->Location = System::Drawing::Point(412, 384);
			this->btn_es_stock_a->Name = L"btn_es_stock_a";
			this->btn_es_stock_a->Size = System::Drawing::Size(165, 69);
			this->btn_es_stock_a->TabIndex = 17;
			this->btn_es_stock_a->Text = L"Ajouter";
			this->btn_es_stock_a->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btn_es_stock_a->UseVisualStyleBackColor = false;
			this->btn_es_stock_a->Click += gcnew System::EventHandler(this, &Accueil::btn_es_stock_a_Click);
			// 
			// btn_es_stock
			// 
			this->btn_es_stock->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(225)), static_cast<System::Int32>(static_cast<System::Byte>(225)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->btn_es_stock->Font = (gcnew System::Drawing::Font(L"Century", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_es_stock->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btn_es_stock->Location = System::Drawing::Point(412, 309);
			this->btn_es_stock->Name = L"btn_es_stock";
			this->btn_es_stock->Size = System::Drawing::Size(336, 69);
			this->btn_es_stock->TabIndex = 15;
			this->btn_es_stock->Text = L"Espace Stock";
			this->btn_es_stock->UseVisualStyleBackColor = false;
			// 
			// btn_es_stat
			// 
			this->btn_es_stat->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(225)), static_cast<System::Int32>(static_cast<System::Byte>(225)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->btn_es_stat->Font = (gcnew System::Drawing::Font(L"Century", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_es_stat->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_es_stat.Image")));
			this->btn_es_stat->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btn_es_stat->Location = System::Drawing::Point(806, 309);
			this->btn_es_stat->Name = L"btn_es_stat";
			this->btn_es_stat->Size = System::Drawing::Size(336, 219);
			this->btn_es_stat->TabIndex = 25;
			this->btn_es_stat->Text = L"    Espace \r\n    Statistique";
			this->btn_es_stat->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btn_es_stat->UseVisualStyleBackColor = false;
			this->btn_es_stat->Click += gcnew System::EventHandler(this, &Accueil::btn_es_stat_Click_1);
			// 
			// btn_mon_compte
			// 
			this->btn_mon_compte->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(225)), static_cast<System::Int32>(static_cast<System::Byte>(225)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->btn_mon_compte->Font = (gcnew System::Drawing::Font(L"Century", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_mon_compte->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_mon_compte.Image")));
			this->btn_mon_compte->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btn_mon_compte->Location = System::Drawing::Point(12, 306);
			this->btn_mon_compte->Name = L"btn_mon_compte";
			this->btn_mon_compte->Size = System::Drawing::Size(336, 219);
			this->btn_mon_compte->TabIndex = 26;
			this->btn_mon_compte->Text = L"Mon compte";
			this->btn_mon_compte->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btn_mon_compte->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btn_mon_compte->UseVisualStyleBackColor = false;
			this->btn_mon_compte->Click += gcnew System::EventHandler(this, &Accueil::btn_mon_compte_Click_1);
			// 
			// btn_es_client_r
			// 
			this->btn_es_client_r->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(225)), static_cast<System::Int32>(static_cast<System::Byte>(225)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->btn_es_client_r->Font = (gcnew System::Drawing::Font(L"Century", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_es_client_r->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_es_client_r.Image")));
			this->btn_es_client_r->Location = System::Drawing::Point(583, 162);
			this->btn_es_client_r->Name = L"btn_es_client_r";
			this->btn_es_client_r->Size = System::Drawing::Size(165, 69);
			this->btn_es_client_r->TabIndex = 30;
			this->btn_es_client_r->Text = L"Rechercher";
			this->btn_es_client_r->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btn_es_client_r->UseVisualStyleBackColor = false;
			this->btn_es_client_r->Click += gcnew System::EventHandler(this, &Accueil::btn_es_client_r_Click);
			// 
			// btn_es_client_s
			// 
			this->btn_es_client_s->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(225)), static_cast<System::Int32>(static_cast<System::Byte>(225)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->btn_es_client_s->Font = (gcnew System::Drawing::Font(L"Century", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_es_client_s->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_es_client_s.Image")));
			this->btn_es_client_s->Location = System::Drawing::Point(412, 162);
			this->btn_es_client_s->Name = L"btn_es_client_s";
			this->btn_es_client_s->Size = System::Drawing::Size(165, 69);
			this->btn_es_client_s->TabIndex = 29;
			this->btn_es_client_s->Text = L"   Supprimer";
			this->btn_es_client_s->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btn_es_client_s->UseVisualStyleBackColor = false;
			this->btn_es_client_s->Click += gcnew System::EventHandler(this, &Accueil::btn_es_client_s_Click);
			// 
			// btn_es_client_m
			// 
			this->btn_es_client_m->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(225)), static_cast<System::Int32>(static_cast<System::Byte>(225)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->btn_es_client_m->Font = (gcnew System::Drawing::Font(L"Century", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_es_client_m->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_es_client_m.Image")));
			this->btn_es_client_m->Location = System::Drawing::Point(584, 87);
			this->btn_es_client_m->Name = L"btn_es_client_m";
			this->btn_es_client_m->Size = System::Drawing::Size(165, 69);
			this->btn_es_client_m->TabIndex = 27;
			this->btn_es_client_m->Text = L"   Modifier";
			this->btn_es_client_m->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btn_es_client_m->UseVisualStyleBackColor = false;
			this->btn_es_client_m->Click += gcnew System::EventHandler(this, &Accueil::btn_es_client_m_Click);
			// 
			// btn_es_client_a
			// 
			this->btn_es_client_a->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(225)), static_cast<System::Int32>(static_cast<System::Byte>(225)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->btn_es_client_a->Font = (gcnew System::Drawing::Font(L"Century", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_es_client_a->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_es_client_a.Image")));
			this->btn_es_client_a->Location = System::Drawing::Point(412, 87);
			this->btn_es_client_a->Name = L"btn_es_client_a";
			this->btn_es_client_a->Size = System::Drawing::Size(165, 69);
			this->btn_es_client_a->TabIndex = 28;
			this->btn_es_client_a->Text = L"    Ajouter";
			this->btn_es_client_a->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btn_es_client_a->UseVisualStyleBackColor = false;
			this->btn_es_client_a->Click += gcnew System::EventHandler(this, &Accueil::btn_es_client_a_Click);
			// 
			// btn_es_commande_m
			// 
			this->btn_es_commande_m->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(225)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)), static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->btn_es_commande_m->Font = (gcnew System::Drawing::Font(L"Century", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_es_commande_m->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_es_commande_m.Image")));
			this->btn_es_commande_m->Location = System::Drawing::Point(979, 87);
			this->btn_es_commande_m->Name = L"btn_es_commande_m";
			this->btn_es_commande_m->Size = System::Drawing::Size(165, 69);
			this->btn_es_commande_m->TabIndex = 31;
			this->btn_es_commande_m->Text = L"   Modifier";
			this->btn_es_commande_m->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btn_es_commande_m->UseVisualStyleBackColor = false;
			this->btn_es_commande_m->Click += gcnew System::EventHandler(this, &Accueil::btn_es_commande_m_Click);
			// 
			// btn_es_stock_m
			// 
			this->btn_es_stock_m->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(225)), static_cast<System::Int32>(static_cast<System::Byte>(225)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->btn_es_stock_m->Font = (gcnew System::Drawing::Font(L"Century", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_es_stock_m->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_es_stock_m.Image")));
			this->btn_es_stock_m->Location = System::Drawing::Point(583, 384);
			this->btn_es_stock_m->Name = L"btn_es_stock_m";
			this->btn_es_stock_m->Size = System::Drawing::Size(165, 69);
			this->btn_es_stock_m->TabIndex = 32;
			this->btn_es_stock_m->Text = L"   Modifier";
			this->btn_es_stock_m->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btn_es_stock_m->UseVisualStyleBackColor = false;
			this->btn_es_stock_m->Click += gcnew System::EventHandler(this, &Accueil::btn_es_stock_m_Click);
			// 
			// Accueil
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(240)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->ClientSize = System::Drawing::Size(1324, 692);
			this->Controls->Add(this->btn_es_stock_m);
			this->Controls->Add(this->btn_es_commande_m);
			this->Controls->Add(this->btn_es_client_r);
			this->Controls->Add(this->btn_es_client_s);
			this->Controls->Add(this->btn_es_client_m);
			this->Controls->Add(this->btn_es_client_a);
			this->Controls->Add(this->btn_es_stat);
			this->Controls->Add(this->btn_es_stock_r);
			this->Controls->Add(this->btn_es_stock_s);
			this->Controls->Add(this->btn_es_stock_a);
			this->Controls->Add(this->btn_es_stock);
			this->Controls->Add(this->btn_es_commande_r);
			this->Controls->Add(this->btn_es_commande_s);
			this->Controls->Add(this->btn_es_commande_a);
			this->Controls->Add(this->btn_es_commande);
			this->Controls->Add(this->btn_es_client);
			this->Controls->Add(this->btn_es_pers_r);
			this->Controls->Add(this->btn_es_pers_s);
			this->Controls->Add(this->btn_es_pers_m);
			this->Controls->Add(this->btn_es_pers);
			this->Controls->Add(this->btn_es_pers_a);
			this->Controls->Add(this->btn_mon_compte);
			this->Font = (gcnew System::Drawing::Font(L"Century", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"Accueil";
			this->Text = L"Accueil";
			this->Load += gcnew System::EventHandler(this, &Accueil::Accueil_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Accueil_Load(System::Object^ sender, System::EventArgs^ e) {
		monControleur = gcnew Controleur;
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		monControleur->afficher_form("personnel", 0);
	}
	private: System::Void esp_pers_a_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		monControleur->afficher_form("personnel", 2);
	}
	private: System::Void esp_pers_m_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		monControleur->afficher_form("personnel", 3);
	}
	private: System::Void esp_pers_s_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		monControleur->afficher_form("personnel", 4);
	}
	private: System::Void esp_pers_r_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		monControleur->afficher_form("personnel", 1);
	}

	private: System::Void btn_es_client_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		monControleur->afficher_form("client", 0);
	}

	private: System::Void btn_es_client_a_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		monControleur->afficher_form("client", 2);
	}

	private: System::Void btn_es_client_m_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		monControleur->afficher_form("client", 3);
	}

	private: System::Void btn_es_client_s_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		monControleur->afficher_form("client", 4);
	}

	private: System::Void btn_es_client_r_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		monControleur->afficher_form("client", 1);
	}

	private: System::Void btn_es_commande_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		monControleur->afficher_form("commande", 0);
	}
	private: System::Void btn_es_commande_a_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		monControleur->afficher_form("commande", 2);
	}
	private: System::Void btn_es_commande_m_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		monControleur->afficher_form("commande", 3);
	}
	private: System::Void btn_es_commande_s_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		monControleur->afficher_form("commande", 4);
	}
	private: System::Void btn_es_commande_r_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		monControleur->afficher_form("commande", 1);
	}

	private: System::Void btn_es_stock_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		monControleur->afficher_form("article", 0);
	}
	private: System::Void btn_es_stock_a_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		monControleur->afficher_form("article", 2);
	}
	private: System::Void btn_es_stock_m_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		monControleur->afficher_form("article", 3);
	}
	private: System::Void btn_es_stock_s_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		monControleur->afficher_form("article", 4);
	}
	private: System::Void btn_es_stock_r_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		monControleur->afficher_form("article", 1);
	}

	private: System::Void btn_mon_compte_Click(System::Object^ sender, System::EventArgs^ e) {

	}

	private: System::Void btn_es_stat_Click_1(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		monControleur->afficher_form("stats", 0);
	}
		   //private void btn
	private: System::Void btn_mon_compte_Click_1(System::Object^ sender, System::EventArgs^ e) 
	{
		this->Hide();
		monControleur->afficher_form("monCompte",0);
	}
};
}


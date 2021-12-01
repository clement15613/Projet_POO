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
	private: System::Windows::Forms::Button^ esp_pers;
		   Controleur^ aff_pers;
	private: System::Windows::Forms::Button^ esp_pers_m;
	protected:


	private: System::Windows::Forms::Button^ esp_pers_a;
	private: System::Windows::Forms::Button^ esp_pers_s;
	private: System::Windows::Forms::Button^ esp_pers_r;







	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;

	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;

	private: System::Windows::Forms::Button^ button20;









	private: System::Windows::Forms::Button^ button30;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button19;
	protected:

	protected:









	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Accueil::typeid));
			this->esp_pers = (gcnew System::Windows::Forms::Button());
			this->esp_pers_m = (gcnew System::Windows::Forms::Button());
			this->esp_pers_a = (gcnew System::Windows::Forms::Button());
			this->esp_pers_s = (gcnew System::Windows::Forms::Button());
			this->esp_pers_r = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// esp_pers
			// 
			this->esp_pers->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(225)), static_cast<System::Int32>(static_cast<System::Byte>(225)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->esp_pers->Font = (gcnew System::Drawing::Font(L"Century", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->esp_pers->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->esp_pers->Location = System::Drawing::Point(12, 12);
			this->esp_pers->Name = L"esp_pers";
			this->esp_pers->Size = System::Drawing::Size(336, 69);
			this->esp_pers->TabIndex = 0;
			this->esp_pers->Text = L"Espace personnel";
			this->esp_pers->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->esp_pers->UseVisualStyleBackColor = false;
			this->esp_pers->Click += gcnew System::EventHandler(this, &Accueil::button1_Click);
			// 
			// esp_pers_m
			// 
			this->esp_pers_m->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(225)), static_cast<System::Int32>(static_cast<System::Byte>(225)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->esp_pers_m->Font = (gcnew System::Drawing::Font(L"Century", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->esp_pers_m->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"esp_pers_m.Image")));
			this->esp_pers_m->Location = System::Drawing::Point(183, 87);
			this->esp_pers_m->Name = L"esp_pers_m";
			this->esp_pers_m->Size = System::Drawing::Size(165, 69);
			this->esp_pers_m->TabIndex = 1;
			this->esp_pers_m->Text = L"   Modifier";
			this->esp_pers_m->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->esp_pers_m->UseVisualStyleBackColor = false;
			// 
			// esp_pers_a
			// 
			this->esp_pers_a->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(225)), static_cast<System::Int32>(static_cast<System::Byte>(225)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->esp_pers_a->Font = (gcnew System::Drawing::Font(L"Century", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->esp_pers_a->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"esp_pers_a.Image")));
			this->esp_pers_a->Location = System::Drawing::Point(12, 87);
			this->esp_pers_a->Name = L"esp_pers_a";
			this->esp_pers_a->Size = System::Drawing::Size(165, 69);
			this->esp_pers_a->TabIndex = 2;
			this->esp_pers_a->Text = L"    Ajouter";
			this->esp_pers_a->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->esp_pers_a->UseVisualStyleBackColor = false;
			// 
			// esp_pers_s
			// 
			this->esp_pers_s->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(225)), static_cast<System::Int32>(static_cast<System::Byte>(225)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->esp_pers_s->Font = (gcnew System::Drawing::Font(L"Century", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->esp_pers_s->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"esp_pers_s.Image")));
			this->esp_pers_s->Location = System::Drawing::Point(12, 162);
			this->esp_pers_s->Name = L"esp_pers_s";
			this->esp_pers_s->Size = System::Drawing::Size(165, 69);
			this->esp_pers_s->TabIndex = 3;
			this->esp_pers_s->Text = L"   Supprimer";
			this->esp_pers_s->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->esp_pers_s->UseVisualStyleBackColor = false;
			// 
			// esp_pers_r
			// 
			this->esp_pers_r->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(225)), static_cast<System::Int32>(static_cast<System::Byte>(225)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->esp_pers_r->Font = (gcnew System::Drawing::Font(L"Century", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->esp_pers_r->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"esp_pers_r.Image")));
			this->esp_pers_r->Location = System::Drawing::Point(183, 162);
			this->esp_pers_r->Name = L"esp_pers_r";
			this->esp_pers_r->Size = System::Drawing::Size(165, 69);
			this->esp_pers_r->TabIndex = 4;
			this->esp_pers_r->Text = L"Rechercher";
			this->esp_pers_r->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->esp_pers_r->UseVisualStyleBackColor = false;
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(225)), static_cast<System::Int32>(static_cast<System::Byte>(225)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->button10->Font = (gcnew System::Drawing::Font(L"Century", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button10->Location = System::Drawing::Point(412, 12);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(336, 69);
			this->button10->TabIndex = 5;
			this->button10->Text = L"Espace Client";
			this->button10->UseVisualStyleBackColor = false;
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(225)), static_cast<System::Int32>(static_cast<System::Byte>(225)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->button11->Font = (gcnew System::Drawing::Font(L"Century", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button11.Image")));
			this->button11->Location = System::Drawing::Point(979, 162);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(165, 69);
			this->button11->TabIndex = 14;
			this->button11->Text = L"Rechercher";
			this->button11->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button11->UseVisualStyleBackColor = false;
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(225)), static_cast<System::Int32>(static_cast<System::Byte>(225)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->button12->Font = (gcnew System::Drawing::Font(L"Century", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button12.Image")));
			this->button12->Location = System::Drawing::Point(808, 162);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(165, 69);
			this->button12->TabIndex = 13;
			this->button12->Text = L"Supprimer";
			this->button12->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button12->UseVisualStyleBackColor = false;
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(225)), static_cast<System::Int32>(static_cast<System::Byte>(225)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->button13->Font = (gcnew System::Drawing::Font(L"Century", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button13.Image")));
			this->button13->Location = System::Drawing::Point(808, 87);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(165, 69);
			this->button13->TabIndex = 12;
			this->button13->Text = L"Ajouter";
			this->button13->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button13->UseVisualStyleBackColor = false;
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(225)), static_cast<System::Int32>(static_cast<System::Byte>(225)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->button15->Font = (gcnew System::Drawing::Font(L"Century", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button15->Location = System::Drawing::Point(808, 12);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(336, 69);
			this->button15->TabIndex = 10;
			this->button15->Text = L"Espace Commande";
			this->button15->UseVisualStyleBackColor = false;
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(225)), static_cast<System::Int32>(static_cast<System::Byte>(225)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->button16->Font = (gcnew System::Drawing::Font(L"Century", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button16.Image")));
			this->button16->Location = System::Drawing::Point(584, 456);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(165, 69);
			this->button16->TabIndex = 19;
			this->button16->Text = L"Rechercher";
			this->button16->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button16->UseVisualStyleBackColor = false;
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(225)), static_cast<System::Int32>(static_cast<System::Byte>(225)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->button17->Font = (gcnew System::Drawing::Font(L"Century", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button17.Image")));
			this->button17->Location = System::Drawing::Point(412, 459);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(165, 69);
			this->button17->TabIndex = 18;
			this->button17->Text = L"Supprimer";
			this->button17->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button17->UseVisualStyleBackColor = false;
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(225)), static_cast<System::Int32>(static_cast<System::Byte>(225)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->button18->Font = (gcnew System::Drawing::Font(L"Century", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button18->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button18.Image")));
			this->button18->Location = System::Drawing::Point(412, 384);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(165, 69);
			this->button18->TabIndex = 17;
			this->button18->Text = L"Ajouter";
			this->button18->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button18->UseVisualStyleBackColor = false;
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(225)), static_cast<System::Int32>(static_cast<System::Byte>(225)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->button20->Font = (gcnew System::Drawing::Font(L"Century", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button20->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button20->Location = System::Drawing::Point(412, 309);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(336, 69);
			this->button20->TabIndex = 15;
			this->button20->Text = L"Espace Stock";
			this->button20->UseVisualStyleBackColor = false;
			// 
			// button30
			// 
			this->button30->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(225)), static_cast<System::Int32>(static_cast<System::Byte>(225)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->button30->Font = (gcnew System::Drawing::Font(L"Century", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button30->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button30.Image")));
			this->button30->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button30->Location = System::Drawing::Point(806, 309);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(336, 219);
			this->button30->TabIndex = 25;
			this->button30->Text = L"    Espace \r\n    Statistique";
			this->button30->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button30->UseVisualStyleBackColor = false;
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(225)), static_cast<System::Int32>(static_cast<System::Byte>(225)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->button21->Font = (gcnew System::Drawing::Font(L"Century", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button21->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button21.Image")));
			this->button21->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button21->Location = System::Drawing::Point(12, 306);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(336, 219);
			this->button21->TabIndex = 26;
			this->button21->Text = L"Mon compte";
			this->button21->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button21->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button21->UseVisualStyleBackColor = false;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(225)), static_cast<System::Int32>(static_cast<System::Byte>(225)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->button6->Font = (gcnew System::Drawing::Font(L"Century", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.Image")));
			this->button6->Location = System::Drawing::Point(583, 162);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(165, 69);
			this->button6->TabIndex = 30;
			this->button6->Text = L"Rechercher";
			this->button6->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button6->UseVisualStyleBackColor = false;
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(225)), static_cast<System::Int32>(static_cast<System::Byte>(225)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->button7->Font = (gcnew System::Drawing::Font(L"Century", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button7.Image")));
			this->button7->Location = System::Drawing::Point(412, 162);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(165, 69);
			this->button7->TabIndex = 29;
			this->button7->Text = L"   Supprimer";
			this->button7->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button7->UseVisualStyleBackColor = false;
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(225)), static_cast<System::Int32>(static_cast<System::Byte>(225)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->button8->Font = (gcnew System::Drawing::Font(L"Century", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button8.Image")));
			this->button8->Location = System::Drawing::Point(584, 87);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(165, 69);
			this->button8->TabIndex = 27;
			this->button8->Text = L"   Modifier";
			this->button8->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button8->UseVisualStyleBackColor = false;
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(225)), static_cast<System::Int32>(static_cast<System::Byte>(225)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->button9->Font = (gcnew System::Drawing::Font(L"Century", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button9.Image")));
			this->button9->Location = System::Drawing::Point(412, 87);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(165, 69);
			this->button9->TabIndex = 28;
			this->button9->Text = L"    Ajouter";
			this->button9->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button9->UseVisualStyleBackColor = false;
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(225)), static_cast<System::Int32>(static_cast<System::Byte>(225)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->button14->Font = (gcnew System::Drawing::Font(L"Century", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button14.Image")));
			this->button14->Location = System::Drawing::Point(979, 87);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(165, 69);
			this->button14->TabIndex = 31;
			this->button14->Text = L"   Modifier";
			this->button14->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button14->UseVisualStyleBackColor = false;
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(225)), static_cast<System::Int32>(static_cast<System::Byte>(225)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->button19->Font = (gcnew System::Drawing::Font(L"Century", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button19->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button19.Image")));
			this->button19->Location = System::Drawing::Point(583, 384);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(165, 69);
			this->button19->TabIndex = 32;
			this->button19->Text = L"   Modifier";
			this->button19->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button19->UseVisualStyleBackColor = false;
			// 
			// Accueil
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(240)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->ClientSize = System::Drawing::Size(1324, 692);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button30);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->esp_pers_r);
			this->Controls->Add(this->esp_pers_s);
			this->Controls->Add(this->esp_pers_m);
			this->Controls->Add(this->esp_pers);
			this->Controls->Add(this->esp_pers_a);
			this->Controls->Add(this->button21);
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
		aff_pers = gcnew Controleur;
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		aff_pers->afficher_form("personnel");
	}
};
}

#pragma once
#include <cstdlib>
#include <ctime>
#include "Thailand.h"
#include "Myanmar.h"
#include "Vietnam.h"
#include "Taiwan.h"
#include "Bhutan.h"
#include "Japan.h"
#include "Korea.h"
#include "China.h"
#include "Brazil.h"
#include "France.h"
#include "USA.h"
#include "Switzerland.h"
#include "england.h"


namespace mono2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class Game : public System::Windows::Forms::Form
	{
	public:
		Game(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			srand(time(0));
			int Thailand_player1 = 0;
			int count_player2 = 0;
			Thailand_player1 = 1;
			if (Thailand_player1 == 1) {
				Thailand1->Show();
			}
			
			
			
			
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Game()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ DICE;
	private: System::Windows::Forms::PictureBox^ dice1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ money;
	private: System::Windows::Forms::Label^ Property;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ Thailand1;
	private: System::Windows::Forms::PictureBox^ Myanmar1;
	private: System::Windows::Forms::PictureBox^ Vietnam1;
	private: System::Windows::Forms::PictureBox^ Taiwan1;
	private: System::Windows::Forms::PictureBox^ Bhutan1;
	private: System::Windows::Forms::PictureBox^ China1;
	private: System::Windows::Forms::PictureBox^ USA1;



















	private: System::Windows::Forms::PictureBox^ Japan1;
	private: System::Windows::Forms::PictureBox^ Korea1;
	private: System::Windows::Forms::PictureBox^ France1;



	private: System::Windows::Forms::PictureBox^ Brazil1;
	private: System::Windows::Forms::PictureBox^ Switzerland1;
	private: System::Windows::Forms::PictureBox^ England1;
	private: System::Windows::Forms::PictureBox^ England2;




	private: System::Windows::Forms::PictureBox^ Switzerland2;

	private: System::Windows::Forms::PictureBox^ Brazil2;
	private: System::Windows::Forms::PictureBox^ France2;


	private: System::Windows::Forms::PictureBox^ Korea2;

	private: System::Windows::Forms::PictureBox^ Japan2;
	private: System::Windows::Forms::PictureBox^ USA2;


	private: System::Windows::Forms::PictureBox^ Chaina2;

	private: System::Windows::Forms::PictureBox^ Bhutan2;

	private: System::Windows::Forms::PictureBox^ Taiwan2;

	private: System::Windows::Forms::PictureBox^ Vietnam2;

	private: System::Windows::Forms::PictureBox^ Myanmar2;

	private: System::Windows::Forms::PictureBox^ Thailand2;

	private: System::Windows::Forms::PictureBox^ pictureBox29;
	private: System::Windows::Forms::Label^ property_player2;
	private: System::Windows::Forms::Label^ money_player2;
	private: System::Windows::Forms::Label^ Player2;
private: System::Windows::Forms::PictureBox^ dice2;
private: System::Windows::Forms::PictureBox^ dice3;
private: System::Windows::Forms::PictureBox^ dice4;
private: System::Windows::Forms::PictureBox^ dice5;
private: System::Windows::Forms::PictureBox^ dice6;











	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Game::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->DICE = (gcnew System::Windows::Forms::Button());
			this->dice1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->money = (gcnew System::Windows::Forms::Label());
			this->Property = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->Thailand1 = (gcnew System::Windows::Forms::PictureBox());
			this->Myanmar1 = (gcnew System::Windows::Forms::PictureBox());
			this->Vietnam1 = (gcnew System::Windows::Forms::PictureBox());
			this->Taiwan1 = (gcnew System::Windows::Forms::PictureBox());
			this->Bhutan1 = (gcnew System::Windows::Forms::PictureBox());
			this->China1 = (gcnew System::Windows::Forms::PictureBox());
			this->USA1 = (gcnew System::Windows::Forms::PictureBox());
			this->Japan1 = (gcnew System::Windows::Forms::PictureBox());
			this->Korea1 = (gcnew System::Windows::Forms::PictureBox());
			this->France1 = (gcnew System::Windows::Forms::PictureBox());
			this->Brazil1 = (gcnew System::Windows::Forms::PictureBox());
			this->Switzerland1 = (gcnew System::Windows::Forms::PictureBox());
			this->England1 = (gcnew System::Windows::Forms::PictureBox());
			this->England2 = (gcnew System::Windows::Forms::PictureBox());
			this->Switzerland2 = (gcnew System::Windows::Forms::PictureBox());
			this->Brazil2 = (gcnew System::Windows::Forms::PictureBox());
			this->France2 = (gcnew System::Windows::Forms::PictureBox());
			this->Korea2 = (gcnew System::Windows::Forms::PictureBox());
			this->Japan2 = (gcnew System::Windows::Forms::PictureBox());
			this->USA2 = (gcnew System::Windows::Forms::PictureBox());
			this->Chaina2 = (gcnew System::Windows::Forms::PictureBox());
			this->Bhutan2 = (gcnew System::Windows::Forms::PictureBox());
			this->Taiwan2 = (gcnew System::Windows::Forms::PictureBox());
			this->Vietnam2 = (gcnew System::Windows::Forms::PictureBox());
			this->Myanmar2 = (gcnew System::Windows::Forms::PictureBox());
			this->Thailand2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox29 = (gcnew System::Windows::Forms::PictureBox());
			this->property_player2 = (gcnew System::Windows::Forms::Label());
			this->money_player2 = (gcnew System::Windows::Forms::Label());
			this->Player2 = (gcnew System::Windows::Forms::Label());
			this->dice2 = (gcnew System::Windows::Forms::PictureBox());
			this->dice3 = (gcnew System::Windows::Forms::PictureBox());
			this->dice4 = (gcnew System::Windows::Forms::PictureBox());
			this->dice5 = (gcnew System::Windows::Forms::PictureBox());
			this->dice6 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dice1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Thailand1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Myanmar1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Vietnam1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Taiwan1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Bhutan1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->China1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->USA1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Japan1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Korea1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->France1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Brazil1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Switzerland1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->England1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->England2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Switzerland2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Brazil2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->France2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Korea2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Japan2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->USA2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Chaina2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Bhutan2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Taiwan2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Vietnam2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Myanmar2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Thailand2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dice2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dice3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dice4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dice5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dice6))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1000, 1000);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// DICE
			// 
			this->DICE->BackColor = System::Drawing::Color::Teal;
			this->DICE->Location = System::Drawing::Point(469, 764);
			this->DICE->Name = L"DICE";
			this->DICE->Size = System::Drawing::Size(109, 55);
			this->DICE->TabIndex = 1;
			this->DICE->Text = L"DICE";
			this->DICE->UseVisualStyleBackColor = false;
			this->DICE->Click += gcnew System::EventHandler(this, &Game::DICE_Click);
			// 
			// dice1
			// 
			this->dice1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"dice1.Image")));
			this->dice1->Location = System::Drawing::Point(468, 632);
			this->dice1->Name = L"dice1";
			this->dice1->Size = System::Drawing::Size(110, 105);
			this->dice1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->dice1->TabIndex = 2;
			this->dice1->TabStop = false;
			this->dice1->Hide();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(1131, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(145, 42);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Player1";
			// 
			// money
			// 
			this->money->AutoSize = true;
			this->money->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->money->ForeColor = System::Drawing::Color::Black;
			this->money->Location = System::Drawing::Point(1132, 72);
			this->money->Name = L"money";
			this->money->Size = System::Drawing::Size(111, 36);
			this->money->TabIndex = 4;
			this->money->Text = L"money:";
			// 
			// Property
			// 
			this->Property->AutoSize = true;
			this->Property->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->Property->ForeColor = System::Drawing::Color::Black;
			this->Property->Location = System::Drawing::Point(1132, 118);
			this->Property->Name = L"Property";
			this->Property->Size = System::Drawing::Size(125, 36);
			this->Property->TabIndex = 5;
			this->Property->Text = L"property";
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::SystemColors::Info;
			this->pictureBox2->Location = System::Drawing::Point(1138, 174);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(344, 306);
			this->pictureBox2->TabIndex = 6;
			this->pictureBox2->TabStop = false;
			// 
			// Thailand1
			// 
			this->Thailand1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Thailand1->Location = System::Drawing::Point(1161, 189);
			this->Thailand1->Name = L"Thailand1";
			this->Thailand1->Size = System::Drawing::Size(47, 51);
			this->Thailand1->TabIndex = 24;
			this->Thailand1->TabStop = false;
			this->Thailand1->Visible = false;
			this->Thailand1->Click += gcnew System::EventHandler(this, &Game::Thailand1_Click);
			// 
			// Myanmar1
			// 
			this->Myanmar1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Myanmar1->Location = System::Drawing::Point(1243, 189);
			this->Myanmar1->Name = L"Myanmar1";
			this->Myanmar1->Size = System::Drawing::Size(47, 51);
			this->Myanmar1->TabIndex = 26;
			this->Myanmar1->TabStop = false;
			this->Myanmar1->Click += gcnew System::EventHandler(this, &Game::Myanmar1_Click);
			// 
			// Vietnam1
			// 
			this->Vietnam1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Vietnam1->Location = System::Drawing::Point(1326, 189);
			this->Vietnam1->Name = L"Vietnam1";
			this->Vietnam1->Size = System::Drawing::Size(47, 51);
			this->Vietnam1->TabIndex = 27;
			this->Vietnam1->TabStop = false;
			this->Vietnam1->Click += gcnew System::EventHandler(this, &Game::Vietnam1_Click);
			// 
			// Taiwan1
			// 
			this->Taiwan1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Taiwan1->Location = System::Drawing::Point(1411, 189);
			this->Taiwan1->Name = L"Taiwan1";
			this->Taiwan1->Size = System::Drawing::Size(47, 51);
			this->Taiwan1->TabIndex = 28;
			this->Taiwan1->TabStop = false;
			this->Taiwan1->Click += gcnew System::EventHandler(this, &Game::Taiwan1_Click);
			// 
			// Bhutan1
			// 
			this->Bhutan1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->Bhutan1->Location = System::Drawing::Point(1161, 264);
			this->Bhutan1->Name = L"Bhutan1";
			this->Bhutan1->Size = System::Drawing::Size(47, 51);
			this->Bhutan1->TabIndex = 29;
			this->Bhutan1->TabStop = false;
			this->Bhutan1->Click += gcnew System::EventHandler(this, &Game::Bhutan1_Click);
			// 
			// China1
			// 
			this->China1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->China1->Location = System::Drawing::Point(1161, 338);
			this->China1->Name = L"China1";
			this->China1->Size = System::Drawing::Size(47, 51);
			this->China1->TabIndex = 30;
			this->China1->TabStop = false;
			this->China1->Click += gcnew System::EventHandler(this, &Game::China1_Click);
			// 
			// USA1
			// 
			this->USA1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->USA1->Location = System::Drawing::Point(1161, 412);
			this->USA1->Name = L"USA1";
			this->USA1->Size = System::Drawing::Size(47, 51);
			this->USA1->TabIndex = 31;
			this->USA1->TabStop = false;
			this->USA1->Click += gcnew System::EventHandler(this, &Game::USA1_Click);
			// 
			// Japan1
			// 
			this->Japan1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->Japan1->Location = System::Drawing::Point(1243, 264);
			this->Japan1->Name = L"Japan1";
			this->Japan1->Size = System::Drawing::Size(47, 51);
			this->Japan1->TabIndex = 32;
			this->Japan1->TabStop = false;
			this->Japan1->Click += gcnew System::EventHandler(this, &Game::Japan1_Click);
			// 
			// Korea1
			// 
			this->Korea1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->Korea1->Location = System::Drawing::Point(1326, 264);
			this->Korea1->Name = L"Korea1";
			this->Korea1->Size = System::Drawing::Size(47, 51);
			this->Korea1->TabIndex = 33;
			this->Korea1->TabStop = false;
			this->Korea1->Click += gcnew System::EventHandler(this, &Game::Korea1_Click);
			// 
			// France1
			// 
			this->France1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->France1->Location = System::Drawing::Point(1326, 338);
			this->France1->Name = L"France1";
			this->France1->Size = System::Drawing::Size(47, 51);
			this->France1->TabIndex = 34;
			this->France1->TabStop = false;
			this->France1->Click += gcnew System::EventHandler(this, &Game::France1_Click);
			// 
			// Brazil1
			// 
			this->Brazil1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->Brazil1->Location = System::Drawing::Point(1243, 338);
			this->Brazil1->Name = L"Brazil1";
			this->Brazil1->Size = System::Drawing::Size(47, 51);
			this->Brazil1->TabIndex = 35;
			this->Brazil1->TabStop = false;
			this->Brazil1->Click += gcnew System::EventHandler(this, &Game::Brazil1_Click);
			// 
			// Switzerland1
			// 
			this->Switzerland1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->Switzerland1->Location = System::Drawing::Point(1243, 412);
			this->Switzerland1->Name = L"Switzerland1";
			this->Switzerland1->Size = System::Drawing::Size(47, 51);
			this->Switzerland1->TabIndex = 36;
			this->Switzerland1->TabStop = false;
			this->Switzerland1->Click += gcnew System::EventHandler(this, &Game::Switzerland1_Click);
			// 
			// England1
			// 
			this->England1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->England1->Location = System::Drawing::Point(1326, 412);
			this->England1->Name = L"England1";
			this->England1->Size = System::Drawing::Size(47, 51);
			this->England1->TabIndex = 37;
			this->England1->TabStop = false;
			this->England1->Click += gcnew System::EventHandler(this, &Game::England1_Click);
			// 
			// England2
			// 
			this->England2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->England2->Location = System::Drawing::Point(1326, 898);
			this->England2->Name = L"England2";
			this->England2->Size = System::Drawing::Size(47, 51);
			this->England2->TabIndex = 54;
			this->England2->TabStop = false;
			this->England2->Click += gcnew System::EventHandler(this, &Game::England2_Click);
			// 
			// Switzerland2
			// 
			this->Switzerland2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->Switzerland2->Location = System::Drawing::Point(1243, 898);
			this->Switzerland2->Name = L"Switzerland2";
			this->Switzerland2->Size = System::Drawing::Size(47, 51);
			this->Switzerland2->TabIndex = 53;
			this->Switzerland2->TabStop = false;
			this->Switzerland2->Click += gcnew System::EventHandler(this, &Game::Switzerland2_Click);
			// 
			// Brazil2
			// 
			this->Brazil2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->Brazil2->Location = System::Drawing::Point(1243, 824);
			this->Brazil2->Name = L"Brazil2";
			this->Brazil2->Size = System::Drawing::Size(47, 51);
			this->Brazil2->TabIndex = 52;
			this->Brazil2->TabStop = false;
			this->Brazil2->Click += gcnew System::EventHandler(this, &Game::Brazil2_Click);
			// 
			// France2
			// 
			this->France2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->France2->Location = System::Drawing::Point(1326, 824);
			this->France2->Name = L"France2";
			this->France2->Size = System::Drawing::Size(47, 51);
			this->France2->TabIndex = 51;
			this->France2->TabStop = false;
			this->France2->Click += gcnew System::EventHandler(this, &Game::France2_Click);
			// 
			// Korea2
			// 
			this->Korea2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->Korea2->Location = System::Drawing::Point(1326, 750);
			this->Korea2->Name = L"Korea2";
			this->Korea2->Size = System::Drawing::Size(47, 51);
			this->Korea2->TabIndex = 50;
			this->Korea2->TabStop = false;
			this->Korea2->Click += gcnew System::EventHandler(this, &Game::Korea2_Click);
			// 
			// Japan2
			// 
			this->Japan2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->Japan2->Location = System::Drawing::Point(1243, 750);
			this->Japan2->Name = L"Japan2";
			this->Japan2->Size = System::Drawing::Size(47, 51);
			this->Japan2->TabIndex = 49;
			this->Japan2->TabStop = false;
			this->Japan2->Click += gcnew System::EventHandler(this, &Game::Japan2_Click);
			// 
			// USA2
			// 
			this->USA2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->USA2->Location = System::Drawing::Point(1161, 898);
			this->USA2->Name = L"USA2";
			this->USA2->Size = System::Drawing::Size(47, 51);
			this->USA2->TabIndex = 48;
			this->USA2->TabStop = false;
			this->USA2->Click += gcnew System::EventHandler(this, &Game::USA2_Click);
			// 
			// Chaina2
			// 
			this->Chaina2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->Chaina2->Location = System::Drawing::Point(1161, 824);
			this->Chaina2->Name = L"Chaina2";
			this->Chaina2->Size = System::Drawing::Size(47, 51);
			this->Chaina2->TabIndex = 47;
			this->Chaina2->TabStop = false;
			this->Chaina2->Click += gcnew System::EventHandler(this, &Game::Chaina2_Click);
			// 
			// Bhutan2
			// 
			this->Bhutan2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->Bhutan2->Location = System::Drawing::Point(1161, 750);
			this->Bhutan2->Name = L"Bhutan2";
			this->Bhutan2->Size = System::Drawing::Size(47, 51);
			this->Bhutan2->TabIndex = 46;
			this->Bhutan2->TabStop = false;
			this->Bhutan2->Click += gcnew System::EventHandler(this, &Game::Bhutan2_Click);
			// 
			// Taiwan2
			// 
			this->Taiwan2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Taiwan2->Location = System::Drawing::Point(1411, 675);
			this->Taiwan2->Name = L"Taiwan2";
			this->Taiwan2->Size = System::Drawing::Size(47, 51);
			this->Taiwan2->TabIndex = 45;
			this->Taiwan2->TabStop = false;
			this->Taiwan2->Click += gcnew System::EventHandler(this, &Game::Taiwan2_Click);
			// 
			// Vietnam2
			// 
			this->Vietnam2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Vietnam2->Location = System::Drawing::Point(1326, 675);
			this->Vietnam2->Name = L"Vietnam2";
			this->Vietnam2->Size = System::Drawing::Size(47, 51);
			this->Vietnam2->TabIndex = 44;
			this->Vietnam2->TabStop = false;
			this->Vietnam2->Click += gcnew System::EventHandler(this, &Game::Vietnam2_Click);
			// 
			// Myanmar2
			// 
			this->Myanmar2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Myanmar2->Location = System::Drawing::Point(1243, 675);
			this->Myanmar2->Name = L"Myanmar2";
			this->Myanmar2->Size = System::Drawing::Size(47, 51);
			this->Myanmar2->TabIndex = 43;
			this->Myanmar2->TabStop = false;
			this->Myanmar2->Click += gcnew System::EventHandler(this, &Game::Myanmar2_Click);
			// 
			// Thailand2
			// 
			this->Thailand2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Thailand2->Location = System::Drawing::Point(1161, 675);
			this->Thailand2->Name = L"Thailand2";
			this->Thailand2->Size = System::Drawing::Size(47, 51);
			this->Thailand2->TabIndex = 42;
			this->Thailand2->TabStop = false;
			this->Thailand2->Click += gcnew System::EventHandler(this, &Game::Thailand2_Click);
			// 
			// pictureBox29
			// 
			this->pictureBox29->BackColor = System::Drawing::SystemColors::Info;
			this->pictureBox29->Location = System::Drawing::Point(1138, 660);
			this->pictureBox29->Name = L"pictureBox29";
			this->pictureBox29->Size = System::Drawing::Size(344, 306);
			this->pictureBox29->TabIndex = 41;
			this->pictureBox29->TabStop = false;
			// 
			// property_player2
			// 
			this->property_player2->AutoSize = true;
			this->property_player2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->property_player2->ForeColor = System::Drawing::Color::Black;
			this->property_player2->Location = System::Drawing::Point(1132, 604);
			this->property_player2->Name = L"property_player2";
			this->property_player2->Size = System::Drawing::Size(125, 36);
			this->property_player2->TabIndex = 40;
			this->property_player2->Text = L"property";
			// 
			// money_player2
			// 
			this->money_player2->AutoSize = true;
			this->money_player2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->money_player2->ForeColor = System::Drawing::Color::Black;
			this->money_player2->Location = System::Drawing::Point(1132, 558);
			this->money_player2->Name = L"money_player2";
			this->money_player2->Size = System::Drawing::Size(111, 36);
			this->money_player2->TabIndex = 39;
			this->money_player2->Text = L"money:";
			// 
			// Player2
			// 
			this->Player2->AutoSize = true;
			this->Player2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22));
			this->Player2->ForeColor = System::Drawing::Color::Black;
			this->Player2->Location = System::Drawing::Point(1131, 505);
			this->Player2->Name = L"Player2";
			this->Player2->Size = System::Drawing::Size(145, 42);
			this->Player2->TabIndex = 38;
			this->Player2->Text = L"Player2";
			// 
			// dice2
			// 
			this->dice2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"dice2.Image")));
			this->dice2->Location = System::Drawing::Point(469, 632);
			this->dice2->Name = L"dice2";
			this->dice2->Size = System::Drawing::Size(110, 105);
			this->dice2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->dice2->TabIndex = 55;
			this->dice2->TabStop = false;
			this->dice2->Hide();
			// 
			// dice3
			// 
			this->dice3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"dice3.Image")));
			this->dice3->Location = System::Drawing::Point(468, 632);
			this->dice3->Name = L"dice3";
			this->dice3->Size = System::Drawing::Size(110, 105);
			this->dice3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->dice3->TabIndex = 56;
			this->dice3->TabStop = false;
			this->dice3->Hide();
			// 
			// dice4
			// 
			this->dice4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"dice4.Image")));
			this->dice4->Location = System::Drawing::Point(468, 632);
			this->dice4->Name = L"dice4";
			this->dice4->Size = System::Drawing::Size(110, 105);
			this->dice4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->dice4->TabIndex = 57;
			this->dice4->TabStop = false;
			this->dice4->Hide();
			// 
			// dice5
			// 
			this->dice5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"dice5.Image")));
			this->dice5->Location = System::Drawing::Point(468, 632);
			this->dice5->Name = L"dice5";
			this->dice5->Size = System::Drawing::Size(110, 105);
			this->dice5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->dice5->TabIndex = 58;
			this->dice5->TabStop = false;
			this->dice5->Hide();
			// 
			// dice6
			// 
			this->dice6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"dice6.Image")));
			this->dice6->Location = System::Drawing::Point(469, 632);
			this->dice6->Name = L"dice6";
			this->dice6->Size = System::Drawing::Size(110, 105);
			this->dice6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->dice6->TabIndex = 59;
			this->dice6->TabStop = false;
			this->dice6->Hide();
			// 
			// Game
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1924, 1055);
			this->Controls->Add(this->dice6);
			this->Controls->Add(this->dice5);
			this->Controls->Add(this->dice4);
			this->Controls->Add(this->dice3);
			this->Controls->Add(this->dice2);
			this->Controls->Add(this->England2);
			this->Controls->Add(this->Switzerland2);
			this->Controls->Add(this->Brazil2);
			this->Controls->Add(this->France2);
			this->Controls->Add(this->Korea2);
			this->Controls->Add(this->Japan2);
			this->Controls->Add(this->USA2);
			this->Controls->Add(this->Chaina2);
			this->Controls->Add(this->Bhutan2);
			this->Controls->Add(this->Taiwan2);
			this->Controls->Add(this->Vietnam2);
			this->Controls->Add(this->Myanmar2);
			this->Controls->Add(this->Thailand2);
			this->Controls->Add(this->pictureBox29);
			this->Controls->Add(this->property_player2);
			this->Controls->Add(this->money_player2);
			this->Controls->Add(this->Player2);
			this->Controls->Add(this->England1);
			this->Controls->Add(this->Switzerland1);
			this->Controls->Add(this->Brazil1);
			this->Controls->Add(this->France1);
			this->Controls->Add(this->Korea1);
			this->Controls->Add(this->Japan1);
			this->Controls->Add(this->USA1);
			this->Controls->Add(this->China1);
			this->Controls->Add(this->Bhutan1);
			this->Controls->Add(this->Taiwan1);
			this->Controls->Add(this->Vietnam1);
			this->Controls->Add(this->Myanmar1);
			this->Controls->Add(this->Thailand1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->Property);
			this->Controls->Add(this->money);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dice1);
			this->Controls->Add(this->DICE);
			this->Controls->Add(this->pictureBox1);
			this->ForeColor = System::Drawing::Color::White;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"Game";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm1";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dice1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Thailand1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Myanmar1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Vietnam1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Taiwan1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Bhutan1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->China1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->USA1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Japan1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Korea1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->France1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Brazil1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Switzerland1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->England1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->England2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Switzerland2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Brazil2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->France2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Korea2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Japan2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->USA2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Chaina2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Bhutan2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Taiwan2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Vietnam2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Myanmar2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Thailand2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dice2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dice3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dice4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dice5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dice6))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void DICE_Click(System::Object^ sender, System::EventArgs^ e) {
		
		int roll = rand() % 6 + 1;
		switch (roll)
		{
		case 1:
			dice1->Show();
			break;
		case 2:
			dice2->Show();
			break;
		case 3:
			dice3->Show();
			break;
		case 4:
			dice4->Show();
			break;
		case 5:
			dice5->Show();
			break;
		default:
			dice6->Show();
			break;
		}
		
	}




private: System::Void Thailand1_Click(System::Object^ sender, System::EventArgs^ e) {
	Thailand^ thai = gcnew Thailand;
	thai->Show();
}
private: System::Void Thailand2_Click(System::Object^ sender, System::EventArgs^ e) {
	Thailand^ thai = gcnew Thailand;
	thai->Show();
}
private: System::Void Myanmar1_Click(System::Object^ sender, System::EventArgs^ e) {
	Myanmar^ myanmar = gcnew Myanmar;
	myanmar->Show();
}
private: System::Void Myanmar2_Click(System::Object^ sender, System::EventArgs^ e) {
	Myanmar^ myanmar = gcnew Myanmar;
	myanmar->Show();
}
private: System::Void Vietnam1_Click(System::Object^ sender, System::EventArgs^ e) {
	Vietnam^ vietnam = gcnew Vietnam;
	vietnam->Show();
}
private: System::Void Vietnam2_Click(System::Object^ sender, System::EventArgs^ e) {
	Vietnam^ vietnam = gcnew Vietnam;
	vietnam->Show();
}
private: System::Void Taiwan1_Click(System::Object^ sender, System::EventArgs^ e) {
	Taiwan^ taiwan = gcnew Taiwan;
	taiwan->Show();
}
private: System::Void Taiwan2_Click(System::Object^ sender, System::EventArgs^ e) {
	Taiwan^ taiwan = gcnew Taiwan;
	taiwan->Show();
}
private: System::Void Bhutan1_Click(System::Object^ sender, System::EventArgs^ e) {
	Bhutan^ bhutan = gcnew Bhutan;
	bhutan->Show();
}
private: System::Void Bhutan2_Click(System::Object^ sender, System::EventArgs^ e) {
	Bhutan^ bhutan = gcnew Bhutan;
	bhutan->Show();
}
private: System::Void Japan1_Click(System::Object^ sender, System::EventArgs^ e) {
	Japan^ japan = gcnew Japan;
	japan->Show();
}
private: System::Void Japan2_Click(System::Object^ sender, System::EventArgs^ e) {
	Japan^ japan = gcnew Japan;
	japan->Show();
}
private: System::Void Korea1_Click(System::Object^ sender, System::EventArgs^ e) {
	Korea^ korea = gcnew Korea;
	korea->Show();
}
private: System::Void Korea2_Click(System::Object^ sender, System::EventArgs^ e) {
	Korea^ korea = gcnew Korea;
	korea->Show();
}
private: System::Void China1_Click(System::Object^ sender, System::EventArgs^ e) {
	China^ china = gcnew China;
	china->Show();
}
private: System::Void Chaina2_Click(System::Object^ sender, System::EventArgs^ e) {
	China^ china = gcnew China;
	china->Show();
}
private: System::Void Brazil1_Click(System::Object^ sender, System::EventArgs^ e) {
	Brazil^ brazil = gcnew Brazil;
	brazil->Show();
}
private: System::Void Brazil2_Click(System::Object^ sender, System::EventArgs^ e) {
	Brazil^ brazil = gcnew Brazil;
	brazil->Show();
}
private: System::Void France1_Click(System::Object^ sender, System::EventArgs^ e) {
	France^ france = gcnew France;
	france->Show();
}
private: System::Void France2_Click(System::Object^ sender, System::EventArgs^ e) {
	France^ france = gcnew France;
	france->Show();
}
private: System::Void USA1_Click(System::Object^ sender, System::EventArgs^ e) {
	USA^ usa = gcnew USA;
	usa->Show();
}
private: System::Void USA2_Click(System::Object^ sender, System::EventArgs^ e) {
	USA^ usa = gcnew USA;
	usa->Show();
}
private: System::Void Switzerland1_Click(System::Object^ sender, System::EventArgs^ e) {
	Switzerland^ switzerland = gcnew Switzerland;
	switzerland->Show();
}
private: System::Void Switzerland2_Click(System::Object^ sender, System::EventArgs^ e) {
	Switzerland^ switzerland = gcnew Switzerland;
	switzerland->Show();
}
private: System::Void England1_Click(System::Object^ sender, System::EventArgs^ e) {
	england^ eng = gcnew england;
	eng->Show();
}
private: System::Void England2_Click(System::Object^ sender, System::EventArgs^ e) {
	england^ eng = gcnew england;
	eng->Show();
}
};

}

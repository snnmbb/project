#pragma once

#include "Game.h"

namespace mono2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ MONOPOLY;
	protected:
	private: System::Windows::Forms::Button^ play;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->MONOPOLY = (gcnew System::Windows::Forms::Label());
			this->play = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// MONOPOLY
			// 
			this->MONOPOLY->AutoSize = true;
			this->MONOPOLY->BackColor = System::Drawing::Color::YellowGreen;
			this->MONOPOLY->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 40));
			this->MONOPOLY->Location = System::Drawing::Point(881, 337);
			this->MONOPOLY->Name = L"MONOPOLY";
			this->MONOPOLY->Size = System::Drawing::Size(420, 76);
			this->MONOPOLY->TabIndex = 0;
			this->MONOPOLY->Text = L"MONOPOLY";
			// 
			// play
			// 
			this->play->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25));
			this->play->Location = System::Drawing::Point(995, 539);
			this->play->Name = L"play";
			this->play->Size = System::Drawing::Size(208, 66);
			this->play->TabIndex = 1;
			this->play->Text = L"PLAY";
			this->play->UseVisualStyleBackColor = true;
			this->play->Click += gcnew System::EventHandler(this, &MyForm::play_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1902, 1033);
			this->Controls->Add(this->play);
			this->Controls->Add(this->MONOPOLY);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void play_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		Game^ f1 = gcnew Game();
		f1->ShowDialog();
	}
	};
}

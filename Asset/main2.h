#pragma once

#include "main3.h"

namespace Project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for main2
	/// </summary>
	public ref class main2 : public System::Windows::Forms::Form
	{
	public:
		main2(void)
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
		~main2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ charac;
	protected:
	private: System::Windows::Forms::Button^ next;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(main2::typeid));
			this->charac = (gcnew System::Windows::Forms::Label());
			this->next = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// charac
			// 
			this->charac->AutoSize = true;
			this->charac->BackColor = System::Drawing::Color::Transparent;
			this->charac->Font = (gcnew System::Drawing::Font(L"ISOCTEUR", 72, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->charac->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->charac->Location = System::Drawing::Point(478, 161);
			this->charac->Name = L"charac";
			this->charac->Size = System::Drawing::Size(836, 148);
			this->charac->TabIndex = 0;
			this->charac->Text = L"CHARACTER";
			// 
			// next
			// 
			this->next->BackColor = System::Drawing::Color::Transparent;
			this->next->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->next->Font = (gcnew System::Drawing::Font(L"Square721 BT", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->next->ForeColor = System::Drawing::SystemColors::Desktop;
			this->next->Location = System::Drawing::Point(1512, 814);
			this->next->Name = L"next";
			this->next->Size = System::Drawing::Size(275, 112);
			this->next->TabIndex = 1;
			this->next->Text = L"NEXT";
			this->next->UseVisualStyleBackColor = false;
			this->next->Click += gcnew System::EventHandler(this, &main2::next_Click);
			// 
			// main2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1902, 1033);
			this->Controls->Add(this->next);
			this->Controls->Add(this->charac);
			this->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->Name = L"main2";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"main2";
			this->TransparencyKey = System::Drawing::Color::Transparent;
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void next_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		main3^ f1 = gcnew main3();
		f1->ShowDialog();
	}
	};
}

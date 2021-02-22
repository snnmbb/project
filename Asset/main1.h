#pragma once

#include "main2.h"

namespace Project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for main1
	/// </summary>
	public ref class main1 : public System::Windows::Forms::Form
	{
	public:
		main1(void)
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
		~main1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ name;
	private: System::Windows::Forms::Button^ start;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(main1::typeid));
			this->name = (gcnew System::Windows::Forms::Label());
			this->start = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// name
			// 
			this->name->AllowDrop = true;
			this->name->AutoEllipsis = true;
			this->name->AutoSize = true;
			this->name->BackColor = System::Drawing::Color::WhiteSmoke;
			this->name->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->name->Font = (gcnew System::Drawing::Font(L"Swis721 BdCnOul BT", 85.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->name->ForeColor = System::Drawing::SystemColors::InfoText;
			this->name->Location = System::Drawing::Point(374, 392);
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(1113, 173);
			this->name->TabIndex = 0;
			this->name->Text = L"MONOPOLY GAME";
			// 
			// start
			// 
			this->start->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->start->Font = (gcnew System::Drawing::Font(L"Square721 Cn BT", 72, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->start->Location = System::Drawing::Point(506, 785);
			this->start->Name = L"start";
			this->start->Size = System::Drawing::Size(883, 146);
			this->start->TabIndex = 1;
			this->start->Text = L"START TO PLAY";
			this->start->UseVisualStyleBackColor = true;
			this->start->Click += gcnew System::EventHandler(this, &main1::start_Click);
			// 
			// main1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1902, 1033);
			this->Controls->Add(this->start);
			this->Controls->Add(this->name);
			this->DoubleBuffered = true;
			this->Name = L"main1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"main1";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void start_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		main2^ f1 = gcnew main2();
		f1->ShowDialog();
	}
	};
}

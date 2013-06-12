#pragma once

namespace Hackmaster3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Welcome_Screen
	/// </summary>
	public ref class Welcome_Screen : public System::Windows::Forms::Form
	{
	public:
		Welcome_Screen(void)
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
		~Welcome_Screen()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	protected: 
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Button^  Next_Window;
	private: System::Windows::Forms::Label^  label8;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Welcome_Screen::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->Next_Window = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->ImageLocation = L"C:\\Users\\Daeleth\\C++ workspace\\Hackmaster 3\\Hackmaster 3\\Hacklogo.gif";
			this->pictureBox1->Location = System::Drawing::Point(177, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(451, 152);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Papyrus", 26.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(262, 167);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(281, 55);
			this->label1->TabIndex = 1;
			this->label1->Text = L"WELCOME!";
			this->label1->Click += gcnew System::EventHandler(this, &Welcome_Screen::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Papyrus", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(40, 218);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(438, 30);
			this->label2->TabIndex = 2;
			this->label2->Text = L"We\'re glad you chose HackMaster as your preferred";
			this->label2->Click += gcnew System::EventHandler(this, &Welcome_Screen::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Papyrus", 14.25F, System::Drawing::FontStyle::Strikeout, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(472, 218);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(132, 30);
			this->label3->TabIndex = 3;
			this->label3->Text = L"death simulator";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Papyrus", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(595, 218);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(168, 30);
			this->label4->TabIndex = 4;
			this->label4->Text = L"role-playing system.";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Papyrus", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(12, 244);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(802, 30);
			this->label5->TabIndex = 5;
			this->label5->Text = L"This program will run you through all the steps necessary to create a charcter. D" 
				L"on\'t worry about the";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Papyrus", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Black;
			this->label6->Location = System::Drawing::Point(12, 274);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(784, 60);
			this->label6->TabIndex = 6;
			this->label6->Text = L"calculations, we\'ve got those covered for you! Plus, you can\'t even die in creati" 
				L"on!* Doesn\'t that \r\nsound great\? Now, come in here quickly. All of this yelling " 
				L"has attracted wolves. And god-dragons.";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Papyrus", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Black;
			this->label7->Location = System::Drawing::Point(12, 244);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(811, 30);
			this->label7->TabIndex = 5;
			this->label7->Text = L"This program will run you through all the steps necessary to create a character. " 
				L"Don\'t worry about the";
			// 
			// Next_Window
			// 
			this->Next_Window->Font = (gcnew System::Drawing::Font(L"Papyrus", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Next_Window->ForeColor = System::Drawing::Color::Black;
			this->Next_Window->Location = System::Drawing::Point(295, 353);
			this->Next_Window->Name = L"Next_Window";
			this->Next_Window->Size = System::Drawing::Size(213, 72);
			this->Next_Window->TabIndex = 7;
			this->Next_Window->Text = L"Let\'s go!";
			this->Next_Window->UseVisualStyleBackColor = true;
			this->Next_Window->Click += gcnew System::EventHandler(this, &Welcome_Screen::Next_Window_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Papyrus", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::Black;
			this->label8->Location = System::Drawing::Point(545, 371);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(242, 54);
			this->label8->TabIndex = 8;
			this->label8->Text = L"*You can totally die in character creation.\r\nWe are not responsible for the amoun" 
				L"t of crying\r\nthat may be caused due to such an event.";
			// 
			// Welcome_Screen
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(816, 437);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->Next_Window);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"Welcome_Screen";
			this->Text = L"You must gather your party before venturing forth";
			this->Load += gcnew System::EventHandler(this, &Welcome_Screen::Welcome_Screen_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void Next_Window_Click(System::Object^  sender, System::EventArgs^  e) {
			 Close();
		 }

private: System::Void Welcome_Screen_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}

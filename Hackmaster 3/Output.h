#pragma once

#include <string>					//Needed for conversion of global st::string variable

namespace Hackmaster3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Output
	/// </summary>
	public ref class Output : public System::Windows::Forms::Form
	{
	public:
		Output(void)
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
		~Output()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  StrOut;
	private: System::Windows::Forms::Label^  IntOut;
	private: System::Windows::Forms::Label^  WisOut;
	private: System::Windows::Forms::Label^  DexOut;
	private: System::Windows::Forms::Label^  ConOut;
	private: System::Windows::Forms::Label^  LksOut;
	private: System::Windows::Forms::Label^  ChaOut;
	private: System::Windows::Forms::Label^  ChaPerOut;
	private: System::Windows::Forms::Label^  LksPerOut;
	private: System::Windows::Forms::Label^  ConPerOut;
	private: System::Windows::Forms::Label^  DexPerOut;
	private: System::Windows::Forms::Label^  WisPerOut;
	private: System::Windows::Forms::Label^  IntPerOut;
	private: System::Windows::Forms::Label^  StrPerOut;
	private: System::Windows::Forms::Label^  RaceOut;
	private: System::Windows::Forms::Label^  ClaOut;


	private: System::Windows::Forms::Label^  DmgModOut;
	private: System::Windows::Forms::Label^  FeatOut;
	private: System::Windows::Forms::Label^  LiftOut;
	private: System::Windows::Forms::Label^  CarryOut;
	private: System::Windows::Forms::Label^  DragOut;
	private: System::Windows::Forms::Label^  AtkIntelOut;
	private: System::Windows::Forms::Label^  WisInitOut;
	private: System::Windows::Forms::Label^  WisDefOut;
	private: System::Windows::Forms::Label^  DexInitOut;
	private: System::Windows::Forms::Label^  DexAtkOut;


	private: System::Windows::Forms::Label^  DexDefOut;

	private: System::Windows::Forms::Label^  TurnOut;

	private: System::Windows::Forms::Label^  HonOut;

	private: System::Windows::Forms::Label^  BPOut;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Output::typeid));
			this->StrOut = (gcnew System::Windows::Forms::Label());
			this->IntOut = (gcnew System::Windows::Forms::Label());
			this->WisOut = (gcnew System::Windows::Forms::Label());
			this->DexOut = (gcnew System::Windows::Forms::Label());
			this->ConOut = (gcnew System::Windows::Forms::Label());
			this->LksOut = (gcnew System::Windows::Forms::Label());
			this->ChaOut = (gcnew System::Windows::Forms::Label());
			this->ChaPerOut = (gcnew System::Windows::Forms::Label());
			this->LksPerOut = (gcnew System::Windows::Forms::Label());
			this->ConPerOut = (gcnew System::Windows::Forms::Label());
			this->DexPerOut = (gcnew System::Windows::Forms::Label());
			this->WisPerOut = (gcnew System::Windows::Forms::Label());
			this->IntPerOut = (gcnew System::Windows::Forms::Label());
			this->StrPerOut = (gcnew System::Windows::Forms::Label());
			this->RaceOut = (gcnew System::Windows::Forms::Label());
			this->ClaOut = (gcnew System::Windows::Forms::Label());
			this->DmgModOut = (gcnew System::Windows::Forms::Label());
			this->FeatOut = (gcnew System::Windows::Forms::Label());
			this->LiftOut = (gcnew System::Windows::Forms::Label());
			this->CarryOut = (gcnew System::Windows::Forms::Label());
			this->DragOut = (gcnew System::Windows::Forms::Label());
			this->AtkIntelOut = (gcnew System::Windows::Forms::Label());
			this->WisInitOut = (gcnew System::Windows::Forms::Label());
			this->WisDefOut = (gcnew System::Windows::Forms::Label());
			this->DexInitOut = (gcnew System::Windows::Forms::Label());
			this->DexAtkOut = (gcnew System::Windows::Forms::Label());
			this->DexDefOut = (gcnew System::Windows::Forms::Label());
			this->TurnOut = (gcnew System::Windows::Forms::Label());
			this->HonOut = (gcnew System::Windows::Forms::Label());
			this->BPOut = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// StrOut
			// 
			this->StrOut->AutoSize = true;
			this->StrOut->BackColor = System::Drawing::Color::Transparent;
			this->StrOut->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->StrOut->ForeColor = System::Drawing::Color::Black;
			this->StrOut->Location = System::Drawing::Point(57, 159);
			this->StrOut->Name = L"StrOut";
			this->StrOut->Size = System::Drawing::Size(27, 20);
			this->StrOut->TabIndex = 0;
			this->StrOut->Text = L"18";
			this->StrOut->Click += gcnew System::EventHandler(this, &Output::StrOut_Click);
			// 
			// IntOut
			// 
			this->IntOut->AutoSize = true;
			this->IntOut->BackColor = System::Drawing::Color::Transparent;
			this->IntOut->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->IntOut->ForeColor = System::Drawing::Color::Black;
			this->IntOut->Location = System::Drawing::Point(57, 190);
			this->IntOut->Name = L"IntOut";
			this->IntOut->Size = System::Drawing::Size(27, 20);
			this->IntOut->TabIndex = 1;
			this->IntOut->Text = L"18";
			// 
			// WisOut
			// 
			this->WisOut->AutoSize = true;
			this->WisOut->BackColor = System::Drawing::Color::Transparent;
			this->WisOut->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->WisOut->ForeColor = System::Drawing::Color::Black;
			this->WisOut->Location = System::Drawing::Point(57, 228);
			this->WisOut->Name = L"WisOut";
			this->WisOut->Size = System::Drawing::Size(27, 20);
			this->WisOut->TabIndex = 2;
			this->WisOut->Text = L"18";
			// 
			// DexOut
			// 
			this->DexOut->AutoSize = true;
			this->DexOut->BackColor = System::Drawing::Color::Transparent;
			this->DexOut->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->DexOut->ForeColor = System::Drawing::Color::Black;
			this->DexOut->Location = System::Drawing::Point(57, 262);
			this->DexOut->Name = L"DexOut";
			this->DexOut->Size = System::Drawing::Size(27, 20);
			this->DexOut->TabIndex = 3;
			this->DexOut->Text = L"18";
			// 
			// ConOut
			// 
			this->ConOut->AutoSize = true;
			this->ConOut->BackColor = System::Drawing::Color::Transparent;
			this->ConOut->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ConOut->ForeColor = System::Drawing::Color::Black;
			this->ConOut->Location = System::Drawing::Point(57, 295);
			this->ConOut->Name = L"ConOut";
			this->ConOut->Size = System::Drawing::Size(27, 20);
			this->ConOut->TabIndex = 4;
			this->ConOut->Text = L"18";
			// 
			// LksOut
			// 
			this->LksOut->AutoSize = true;
			this->LksOut->BackColor = System::Drawing::Color::Transparent;
			this->LksOut->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->LksOut->ForeColor = System::Drawing::Color::Black;
			this->LksOut->Location = System::Drawing::Point(57, 331);
			this->LksOut->Name = L"LksOut";
			this->LksOut->Size = System::Drawing::Size(27, 20);
			this->LksOut->TabIndex = 5;
			this->LksOut->Text = L"18";
			// 
			// ChaOut
			// 
			this->ChaOut->AutoSize = true;
			this->ChaOut->BackColor = System::Drawing::Color::Transparent;
			this->ChaOut->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ChaOut->ForeColor = System::Drawing::Color::Black;
			this->ChaOut->Location = System::Drawing::Point(57, 369);
			this->ChaOut->Name = L"ChaOut";
			this->ChaOut->Size = System::Drawing::Size(27, 20);
			this->ChaOut->TabIndex = 6;
			this->ChaOut->Text = L"18";
			// 
			// ChaPerOut
			// 
			this->ChaPerOut->AutoSize = true;
			this->ChaPerOut->BackColor = System::Drawing::Color::Transparent;
			this->ChaPerOut->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ChaPerOut->ForeColor = System::Drawing::Color::Black;
			this->ChaPerOut->Location = System::Drawing::Point(100, 369);
			this->ChaPerOut->Name = L"ChaPerOut";
			this->ChaPerOut->Size = System::Drawing::Size(27, 20);
			this->ChaPerOut->TabIndex = 13;
			this->ChaPerOut->Text = L"99";
			// 
			// LksPerOut
			// 
			this->LksPerOut->AutoSize = true;
			this->LksPerOut->BackColor = System::Drawing::Color::Transparent;
			this->LksPerOut->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->LksPerOut->ForeColor = System::Drawing::Color::Black;
			this->LksPerOut->Location = System::Drawing::Point(100, 331);
			this->LksPerOut->Name = L"LksPerOut";
			this->LksPerOut->Size = System::Drawing::Size(27, 20);
			this->LksPerOut->TabIndex = 12;
			this->LksPerOut->Text = L"99";
			// 
			// ConPerOut
			// 
			this->ConPerOut->AutoSize = true;
			this->ConPerOut->BackColor = System::Drawing::Color::Transparent;
			this->ConPerOut->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ConPerOut->ForeColor = System::Drawing::Color::Black;
			this->ConPerOut->Location = System::Drawing::Point(100, 295);
			this->ConPerOut->Name = L"ConPerOut";
			this->ConPerOut->Size = System::Drawing::Size(27, 20);
			this->ConPerOut->TabIndex = 11;
			this->ConPerOut->Text = L"99";
			// 
			// DexPerOut
			// 
			this->DexPerOut->AutoSize = true;
			this->DexPerOut->BackColor = System::Drawing::Color::Transparent;
			this->DexPerOut->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->DexPerOut->ForeColor = System::Drawing::Color::Black;
			this->DexPerOut->Location = System::Drawing::Point(100, 262);
			this->DexPerOut->Name = L"DexPerOut";
			this->DexPerOut->Size = System::Drawing::Size(27, 20);
			this->DexPerOut->TabIndex = 10;
			this->DexPerOut->Text = L"99";
			// 
			// WisPerOut
			// 
			this->WisPerOut->AutoSize = true;
			this->WisPerOut->BackColor = System::Drawing::Color::Transparent;
			this->WisPerOut->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->WisPerOut->ForeColor = System::Drawing::Color::Black;
			this->WisPerOut->Location = System::Drawing::Point(100, 228);
			this->WisPerOut->Name = L"WisPerOut";
			this->WisPerOut->Size = System::Drawing::Size(27, 20);
			this->WisPerOut->TabIndex = 9;
			this->WisPerOut->Text = L"99";
			// 
			// IntPerOut
			// 
			this->IntPerOut->AutoSize = true;
			this->IntPerOut->BackColor = System::Drawing::Color::Transparent;
			this->IntPerOut->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->IntPerOut->ForeColor = System::Drawing::Color::Black;
			this->IntPerOut->Location = System::Drawing::Point(100, 190);
			this->IntPerOut->Name = L"IntPerOut";
			this->IntPerOut->Size = System::Drawing::Size(27, 20);
			this->IntPerOut->TabIndex = 8;
			this->IntPerOut->Text = L"99";
			// 
			// StrPerOut
			// 
			this->StrPerOut->AutoSize = true;
			this->StrPerOut->BackColor = System::Drawing::Color::Transparent;
			this->StrPerOut->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->StrPerOut->ForeColor = System::Drawing::Color::Black;
			this->StrPerOut->Location = System::Drawing::Point(100, 159);
			this->StrPerOut->Name = L"StrPerOut";
			this->StrPerOut->Size = System::Drawing::Size(27, 20);
			this->StrPerOut->TabIndex = 7;
			this->StrPerOut->Text = L"99";
			// 
			// RaceOut
			// 
			this->RaceOut->AutoSize = true;
			this->RaceOut->BackColor = System::Drawing::Color::Transparent;
			this->RaceOut->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->RaceOut->ForeColor = System::Drawing::Color::Black;
			this->RaceOut->Location = System::Drawing::Point(61, 58);
			this->RaceOut->Name = L"RaceOut";
			this->RaceOut->Size = System::Drawing::Size(41, 17);
			this->RaceOut->TabIndex = 14;
			this->RaceOut->Text = L"Race";
			// 
			// ClaOut
			// 
			this->ClaOut->AutoSize = true;
			this->ClaOut->BackColor = System::Drawing::Color::Transparent;
			this->ClaOut->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ClaOut->ForeColor = System::Drawing::Color::Black;
			this->ClaOut->Location = System::Drawing::Point(349, 29);
			this->ClaOut->Name = L"ClaOut";
			this->ClaOut->Size = System::Drawing::Size(42, 17);
			this->ClaOut->TabIndex = 15;
			this->ClaOut->Text = L"Class";
			// 
			// DmgModOut
			// 
			this->DmgModOut->AutoSize = true;
			this->DmgModOut->BackColor = System::Drawing::Color::Transparent;
			this->DmgModOut->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->DmgModOut->ForeColor = System::Drawing::Color::Black;
			this->DmgModOut->Location = System::Drawing::Point(219, 159);
			this->DmgModOut->Name = L"DmgModOut";
			this->DmgModOut->Size = System::Drawing::Size(20, 17);
			this->DmgModOut->TabIndex = 16;
			this->DmgModOut->Text = L"5 ";
			// 
			// FeatOut
			// 
			this->FeatOut->AutoSize = true;
			this->FeatOut->BackColor = System::Drawing::Color::Transparent;
			this->FeatOut->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->FeatOut->ForeColor = System::Drawing::Color::Black;
			this->FeatOut->Location = System::Drawing::Point(273, 159);
			this->FeatOut->Name = L"FeatOut";
			this->FeatOut->Size = System::Drawing::Size(24, 17);
			this->FeatOut->TabIndex = 17;
			this->FeatOut->Text = L"20";
			// 
			// LiftOut
			// 
			this->LiftOut->AutoSize = true;
			this->LiftOut->BackColor = System::Drawing::Color::Transparent;
			this->LiftOut->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->LiftOut->ForeColor = System::Drawing::Color::Black;
			this->LiftOut->Location = System::Drawing::Point(333, 159);
			this->LiftOut->Name = L"LiftOut";
			this->LiftOut->Size = System::Drawing::Size(24, 17);
			this->LiftOut->TabIndex = 18;
			this->LiftOut->Text = L"20";
			// 
			// CarryOut
			// 
			this->CarryOut->AutoSize = true;
			this->CarryOut->BackColor = System::Drawing::Color::Transparent;
			this->CarryOut->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->CarryOut->ForeColor = System::Drawing::Color::Black;
			this->CarryOut->Location = System::Drawing::Point(397, 159);
			this->CarryOut->Name = L"CarryOut";
			this->CarryOut->Size = System::Drawing::Size(24, 17);
			this->CarryOut->TabIndex = 19;
			this->CarryOut->Text = L"20";
			// 
			// DragOut
			// 
			this->DragOut->AutoSize = true;
			this->DragOut->BackColor = System::Drawing::Color::Transparent;
			this->DragOut->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->DragOut->ForeColor = System::Drawing::Color::Black;
			this->DragOut->Location = System::Drawing::Point(455, 159);
			this->DragOut->Name = L"DragOut";
			this->DragOut->Size = System::Drawing::Size(24, 17);
			this->DragOut->TabIndex = 20;
			this->DragOut->Text = L"20";
			// 
			// AtkIntelOut
			// 
			this->AtkIntelOut->AutoSize = true;
			this->AtkIntelOut->BackColor = System::Drawing::Color::Transparent;
			this->AtkIntelOut->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->AtkIntelOut->ForeColor = System::Drawing::Color::Black;
			this->AtkIntelOut->Location = System::Drawing::Point(229, 193);
			this->AtkIntelOut->Name = L"AtkIntelOut";
			this->AtkIntelOut->Size = System::Drawing::Size(16, 17);
			this->AtkIntelOut->TabIndex = 21;
			this->AtkIntelOut->Text = L"5";
			// 
			// WisInitOut
			// 
			this->WisInitOut->AutoSize = true;
			this->WisInitOut->BackColor = System::Drawing::Color::Transparent;
			this->WisInitOut->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->WisInitOut->ForeColor = System::Drawing::Color::Black;
			this->WisInitOut->Location = System::Drawing::Point(229, 228);
			this->WisInitOut->Name = L"WisInitOut";
			this->WisInitOut->Size = System::Drawing::Size(16, 17);
			this->WisInitOut->TabIndex = 22;
			this->WisInitOut->Text = L"5";
			// 
			// WisDefOut
			// 
			this->WisDefOut->AutoSize = true;
			this->WisDefOut->BackColor = System::Drawing::Color::Transparent;
			this->WisDefOut->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->WisDefOut->ForeColor = System::Drawing::Color::Black;
			this->WisDefOut->Location = System::Drawing::Point(323, 228);
			this->WisDefOut->Name = L"WisDefOut";
			this->WisDefOut->Size = System::Drawing::Size(16, 17);
			this->WisDefOut->TabIndex = 23;
			this->WisDefOut->Text = L"5";
			// 
			// DexInitOut
			// 
			this->DexInitOut->AutoSize = true;
			this->DexInitOut->BackColor = System::Drawing::Color::Transparent;
			this->DexInitOut->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->DexInitOut->ForeColor = System::Drawing::Color::Black;
			this->DexInitOut->Location = System::Drawing::Point(229, 262);
			this->DexInitOut->Name = L"DexInitOut";
			this->DexInitOut->Size = System::Drawing::Size(16, 17);
			this->DexInitOut->TabIndex = 24;
			this->DexInitOut->Text = L"5";
			// 
			// DexAtkOut
			// 
			this->DexAtkOut->AutoSize = true;
			this->DexAtkOut->BackColor = System::Drawing::Color::Transparent;
			this->DexAtkOut->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->DexAtkOut->ForeColor = System::Drawing::Color::Black;
			this->DexAtkOut->Location = System::Drawing::Point(323, 262);
			this->DexAtkOut->Name = L"DexAtkOut";
			this->DexAtkOut->Size = System::Drawing::Size(16, 17);
			this->DexAtkOut->TabIndex = 25;
			this->DexAtkOut->Text = L"5";
			// 
			// DexDefOut
			// 
			this->DexDefOut->AutoSize = true;
			this->DexDefOut->BackColor = System::Drawing::Color::Transparent;
			this->DexDefOut->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->DexDefOut->ForeColor = System::Drawing::Color::Black;
			this->DexDefOut->Location = System::Drawing::Point(397, 262);
			this->DexDefOut->Name = L"DexDefOut";
			this->DexDefOut->Size = System::Drawing::Size(16, 17);
			this->DexDefOut->TabIndex = 26;
			this->DexDefOut->Text = L"5";
			// 
			// TurnOut
			// 
			this->TurnOut->AutoSize = true;
			this->TurnOut->BackColor = System::Drawing::Color::Transparent;
			this->TurnOut->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->TurnOut->ForeColor = System::Drawing::Color::Black;
			this->TurnOut->Location = System::Drawing::Point(258, 372);
			this->TurnOut->Name = L"TurnOut";
			this->TurnOut->Size = System::Drawing::Size(16, 17);
			this->TurnOut->TabIndex = 27;
			this->TurnOut->Text = L"5";
			// 
			// HonOut
			// 
			this->HonOut->AutoSize = true;
			this->HonOut->BackColor = System::Drawing::Color::Transparent;
			this->HonOut->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->HonOut->ForeColor = System::Drawing::Color::Black;
			this->HonOut->Location = System::Drawing::Point(75, 419);
			this->HonOut->Name = L"HonOut";
			this->HonOut->Size = System::Drawing::Size(30, 24);
			this->HonOut->TabIndex = 28;
			this->HonOut->Text = L"18";
			// 
			// BPOut
			// 
			this->BPOut->AutoSize = true;
			this->BPOut->BackColor = System::Drawing::Color::Transparent;
			this->BPOut->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->BPOut->ForeColor = System::Drawing::Color::Black;
			this->BPOut->Location = System::Drawing::Point(550, 419);
			this->BPOut->Name = L"BPOut";
			this->BPOut->Size = System::Drawing::Size(40, 24);
			this->BPOut->TabIndex = 30;
			this->BPOut->Text = L"100";
			// 
			// Output
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(918, 630);
			this->Controls->Add(this->BPOut);
			this->Controls->Add(this->HonOut);
			this->Controls->Add(this->TurnOut);
			this->Controls->Add(this->DexDefOut);
			this->Controls->Add(this->DexAtkOut);
			this->Controls->Add(this->DexInitOut);
			this->Controls->Add(this->WisDefOut);
			this->Controls->Add(this->WisInitOut);
			this->Controls->Add(this->AtkIntelOut);
			this->Controls->Add(this->DragOut);
			this->Controls->Add(this->CarryOut);
			this->Controls->Add(this->LiftOut);
			this->Controls->Add(this->FeatOut);
			this->Controls->Add(this->DmgModOut);
			this->Controls->Add(this->ClaOut);
			this->Controls->Add(this->RaceOut);
			this->Controls->Add(this->ChaPerOut);
			this->Controls->Add(this->LksPerOut);
			this->Controls->Add(this->ConPerOut);
			this->Controls->Add(this->DexPerOut);
			this->Controls->Add(this->WisPerOut);
			this->Controls->Add(this->IntPerOut);
			this->Controls->Add(this->StrPerOut);
			this->Controls->Add(this->ChaOut);
			this->Controls->Add(this->LksOut);
			this->Controls->Add(this->ConOut);
			this->Controls->Add(this->DexOut);
			this->Controls->Add(this->WisOut);
			this->Controls->Add(this->IntOut);
			this->Controls->Add(this->StrOut);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->Name = L"Output";
			this->Text = L"Output";
			this->Load += gcnew System::EventHandler(this, &Output::Output_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void StrOut_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void Output_Load(System::Object^  sender, System::EventArgs^  e) {
					//Display Base Stats
					StrOut->Text = System::Convert::ToString(floor(streGlobal));
					IntOut->Text = System::Convert::ToString(floor(intelGlobal));
					WisOut->Text = System::Convert::ToString(floor(wisGlobal));
					DexOut->Text = System::Convert::ToString(floor(dexGlobal));
					ConOut->Text = System::Convert::ToString(floor(conGlobal));
					LksOut->Text = System::Convert::ToString(floor(lokGlobal));
					ChaOut->Text = System::Convert::ToString(floor(chaGlobal));
					//Display percentiles
					StrPerOut->Text = System::Convert::ToString(rounder((streGlobal-floor(streGlobal))*100));
					IntPerOut->Text = System::Convert::ToString(rounder((intelGlobal-floor(intelGlobal))*100));
					WisPerOut->Text = System::Convert::ToString(rounder((wisGlobal-floor(wisGlobal))*100));
					DexPerOut->Text = System::Convert::ToString(rounder((dexGlobal-floor(dexGlobal))*100));
					ConPerOut->Text = System::Convert::ToString(rounder((conGlobal-floor(conGlobal))*100));
					LksPerOut->Text = System::Convert::ToString(rounder((lokGlobal-floor(lokGlobal))*100));
					ChaPerOut->Text = System::Convert::ToString(rounder((chaGlobal-floor(chaGlobal))*100));
					//Calculate and Display Honor
					sum = streGlobal+intelGlobal+wisGlobal+dexGlobal+conGlobal+lokGlobal+chaGlobal;
					hon += rounder(sum/7);
					HonOut->Text = System::Convert::ToString(hon);
					//Display BP
					BPOut->Text = System::Convert::ToString(BP);
					//Display Modifiers
					DmgModOut->Text = System::Convert::ToString(dmgmodOut);
					FeatOut->Text = System::Convert::ToString(strfeatOut);
					LiftOut->Text = System::Convert::ToString(liftOut);
					CarryOut->Text = System::Convert::ToString(carryOut);
					DragOut->Text = System::Convert::ToString(dragOut);
					AtkIntelOut->Text = System::Convert::ToString(atkintOut);
					WisInitOut->Text = System::Convert::ToString(wisinitOut);
					WisDefOut->Text = System::Convert::ToString(wisdefOut);
					DexInitOut->Text = System::Convert::ToString(dexinitOut);
					DexAtkOut->Text = System::Convert::ToString(dexatkOut);
					DexDefOut->Text = System::Convert::ToString(dexdefOut);
					TurnOut->Text = System::Convert::ToString(chaturnOut);
					//Display Class and Race
					RaceOut->Text = gcnew String(race.c_str());
					ClaOut->Text = gcnew String(cla.c_str());
			 }
};
}

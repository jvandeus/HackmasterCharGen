#pragma once

namespace Hackmaster3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	extern int RaceFlag;
	extern int ClassFlag;

	/// <summary>
	/// Summary for Race_Selection
	/// </summary>
	public ref class Race_Selection : public System::Windows::Forms::Form
	{
	public:
		Race_Selection(void)
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
		~Race_Selection()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 
	private: System::Windows::Forms::Label^  desc;
	private: System::Windows::Forms::PictureBox^  Portrait;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  nextWindow;
	private: System::Windows::Forms::CheckBox^  sHuman;
	private: System::Windows::Forms::CheckBox^  sDwarf;
	private: System::Windows::Forms::CheckBox^  sElf;
	private: System::Windows::Forms::CheckBox^  sHalfling;
	private: System::Windows::Forms::CheckBox^  sCleric;
	private: System::Windows::Forms::CheckBox^  sFighter;
	private: System::Windows::Forms::CheckBox^  sMage;
	private: System::Windows::Forms::CheckBox^  sTheif;
	private: System::Windows::Forms::Label^  RaceHP;
	private: System::Windows::Forms::Label^  BaseHP;
	private: System::Windows::Forms::Label^  ClassHP;
	private: System::Windows::Forms::Label^  HPMod;
	private: System::Windows::Forms::Label^  StatMod;
	private: System::ComponentModel::IContainer^  components;

	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Race_Selection::typeid));
			this->desc = (gcnew System::Windows::Forms::Label());
			this->Portrait = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->nextWindow = (gcnew System::Windows::Forms::Button());
			this->sHuman = (gcnew System::Windows::Forms::CheckBox());
			this->sDwarf = (gcnew System::Windows::Forms::CheckBox());
			this->sElf = (gcnew System::Windows::Forms::CheckBox());
			this->sHalfling = (gcnew System::Windows::Forms::CheckBox());
			this->sCleric = (gcnew System::Windows::Forms::CheckBox());
			this->sFighter = (gcnew System::Windows::Forms::CheckBox());
			this->sMage = (gcnew System::Windows::Forms::CheckBox());
			this->sTheif = (gcnew System::Windows::Forms::CheckBox());
			this->RaceHP = (gcnew System::Windows::Forms::Label());
			this->BaseHP = (gcnew System::Windows::Forms::Label());
			this->ClassHP = (gcnew System::Windows::Forms::Label());
			this->HPMod = (gcnew System::Windows::Forms::Label());
			this->StatMod = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Portrait))->BeginInit();
			this->SuspendLayout();
			// 
			// desc
			// 
			this->desc->AutoSize = true;
			this->desc->BackColor = System::Drawing::Color::Transparent;
			this->desc->Font = (gcnew System::Drawing::Font(L"Papyrus", 10.25F, System::Drawing::FontStyle::Italic));
			this->desc->ForeColor = System::Drawing::Color::Black;
			this->desc->Location = System::Drawing::Point(12, 287);
			this->desc->Name = L"desc";
			this->desc->Size = System::Drawing::Size(227, 22);
			this->desc->TabIndex = 4;
			this->desc->Text = L"Choose a race to view more details";
			// 
			// Portrait
			// 
			this->Portrait->BackColor = System::Drawing::Color::Transparent;
			this->Portrait->ImageLocation = L"";
			this->Portrait->Location = System::Drawing::Point(563, 57);
			this->Portrait->Name = L"Portrait";
			this->Portrait->Size = System::Drawing::Size(200, 250);
			this->Portrait->TabIndex = 5;
			this->Portrait->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Papyrus", 11.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(25, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(103, 24);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Choose Race";
			this->label1->Click += gcnew System::EventHandler(this, &Race_Selection::label1_Click_1);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Papyrus", 10.25F, System::Drawing::FontStyle::Italic));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(162, 13);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(105, 22);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Choose Class";
			// 
			// nextWindow
			// 
			this->nextWindow->Enabled = false;
			this->nextWindow->Font = (gcnew System::Drawing::Font(L"Papyrus", 14.25F, System::Drawing::FontStyle::Italic));
			this->nextWindow->Location = System::Drawing::Point(450, 346);
			this->nextWindow->Name = L"nextWindow";
			this->nextWindow->Size = System::Drawing::Size(323, 69);
			this->nextWindow->TabIndex = 17;
			this->nextWindow->Text = L"Not Yet...";
			this->nextWindow->UseCompatibleTextRendering = true;
			this->nextWindow->UseVisualStyleBackColor = true;
			this->nextWindow->Click += gcnew System::EventHandler(this, &Race_Selection::nextWindow_Click);
			// 
			// sHuman
			// 
			this->sHuman->AutoSize = true;
			this->sHuman->BackColor = System::Drawing::Color::Transparent;
			this->sHuman->Font = (gcnew System::Drawing::Font(L"Papyrus", 12.25F));
			this->sHuman->ForeColor = System::Drawing::Color::Black;
			this->sHuman->Location = System::Drawing::Point(29, 57);
			this->sHuman->Name = L"sHuman";
			this->sHuman->Size = System::Drawing::Size(84, 31);
			this->sHuman->TabIndex = 18;
			this->sHuman->Text = L"Human";
			this->sHuman->UseVisualStyleBackColor = false;
			this->sHuman->CheckedChanged += gcnew System::EventHandler(this, &Race_Selection::sHuman_CheckedChanged_1);
			// 
			// sDwarf
			// 
			this->sDwarf->AutoSize = true;
			this->sDwarf->BackColor = System::Drawing::Color::Transparent;
			this->sDwarf->Font = (gcnew System::Drawing::Font(L"Papyrus", 12.25F));
			this->sDwarf->ForeColor = System::Drawing::Color::Black;
			this->sDwarf->Location = System::Drawing::Point(29, 122);
			this->sDwarf->Name = L"sDwarf";
			this->sDwarf->Size = System::Drawing::Size(77, 31);
			this->sDwarf->TabIndex = 19;
			this->sDwarf->Text = L"Dwarf";
			this->sDwarf->UseVisualStyleBackColor = false;
			this->sDwarf->CheckedChanged += gcnew System::EventHandler(this, &Race_Selection::sDwarf_CheckedChanged);
			// 
			// sElf
			// 
			this->sElf->AutoSize = true;
			this->sElf->BackColor = System::Drawing::Color::Transparent;
			this->sElf->Font = (gcnew System::Drawing::Font(L"Papyrus", 12.25F));
			this->sElf->ForeColor = System::Drawing::Color::Black;
			this->sElf->Location = System::Drawing::Point(29, 183);
			this->sElf->Name = L"sElf";
			this->sElf->Size = System::Drawing::Size(56, 31);
			this->sElf->TabIndex = 20;
			this->sElf->Text = L"Elf";
			this->sElf->UseVisualStyleBackColor = false;
			this->sElf->CheckedChanged += gcnew System::EventHandler(this, &Race_Selection::sElf_CheckedChanged);
			// 
			// sHalfling
			// 
			this->sHalfling->AutoSize = true;
			this->sHalfling->BackColor = System::Drawing::Color::Transparent;
			this->sHalfling->Font = (gcnew System::Drawing::Font(L"Papyrus", 12.25F));
			this->sHalfling->ForeColor = System::Drawing::Color::Black;
			this->sHalfling->Location = System::Drawing::Point(29, 242);
			this->sHalfling->Name = L"sHalfling";
			this->sHalfling->Size = System::Drawing::Size(89, 31);
			this->sHalfling->TabIndex = 21;
			this->sHalfling->Text = L"Halfling";
			this->sHalfling->UseVisualStyleBackColor = false;
			this->sHalfling->CheckedChanged += gcnew System::EventHandler(this, &Race_Selection::sHalfling_CheckedChanged);
			// 
			// sCleric
			// 
			this->sCleric->AutoSize = true;
			this->sCleric->BackColor = System::Drawing::Color::Transparent;
			this->sCleric->Font = (gcnew System::Drawing::Font(L"Papyrus", 12.25F));
			this->sCleric->ForeColor = System::Drawing::Color::Black;
			this->sCleric->Location = System::Drawing::Point(166, 57);
			this->sCleric->Name = L"sCleric";
			this->sCleric->Size = System::Drawing::Size(76, 31);
			this->sCleric->TabIndex = 22;
			this->sCleric->Text = L"Cleric";
			this->sCleric->UseVisualStyleBackColor = false;
			this->sCleric->CheckedChanged += gcnew System::EventHandler(this, &Race_Selection::sCleric_CheckedChanged_1);
			// 
			// sFighter
			// 
			this->sFighter->AutoSize = true;
			this->sFighter->BackColor = System::Drawing::Color::Transparent;
			this->sFighter->Font = (gcnew System::Drawing::Font(L"Papyrus", 12.25F));
			this->sFighter->ForeColor = System::Drawing::Color::Black;
			this->sFighter->Location = System::Drawing::Point(166, 122);
			this->sFighter->Name = L"sFighter";
			this->sFighter->Size = System::Drawing::Size(83, 31);
			this->sFighter->TabIndex = 23;
			this->sFighter->Text = L"Fighter";
			this->sFighter->UseVisualStyleBackColor = false;
			this->sFighter->CheckedChanged += gcnew System::EventHandler(this, &Race_Selection::sFighter_CheckedChanged);
			// 
			// sMage
			// 
			this->sMage->AutoSize = true;
			this->sMage->BackColor = System::Drawing::Color::Transparent;
			this->sMage->Font = (gcnew System::Drawing::Font(L"Papyrus", 12.25F));
			this->sMage->ForeColor = System::Drawing::Color::Black;
			this->sMage->Location = System::Drawing::Point(165, 183);
			this->sMage->Name = L"sMage";
			this->sMage->Size = System::Drawing::Size(76, 31);
			this->sMage->TabIndex = 24;
			this->sMage->Text = L"Mage";
			this->sMage->UseVisualStyleBackColor = false;
			this->sMage->CheckedChanged += gcnew System::EventHandler(this, &Race_Selection::sMage_CheckedChanged);
			// 
			// sTheif
			// 
			this->sTheif->AutoSize = true;
			this->sTheif->BackColor = System::Drawing::Color::Transparent;
			this->sTheif->Font = (gcnew System::Drawing::Font(L"Papyrus", 12.25F));
			this->sTheif->ForeColor = System::Drawing::Color::Black;
			this->sTheif->Location = System::Drawing::Point(165, 242);
			this->sTheif->Name = L"sTheif";
			this->sTheif->Size = System::Drawing::Size(73, 31);
			this->sTheif->TabIndex = 25;
			this->sTheif->Text = L"Theif";
			this->sTheif->UseVisualStyleBackColor = false;
			this->sTheif->CheckedChanged += gcnew System::EventHandler(this, &Race_Selection::sTheif_CheckedChanged);
			// 
			// RaceHP
			// 
			this->RaceHP->AutoSize = true;
			this->RaceHP->BackColor = System::Drawing::Color::Transparent;
			this->RaceHP->Font = (gcnew System::Drawing::Font(L"Papyrus", 12.25F));
			this->RaceHP->ForeColor = System::Drawing::Color::Black;
			this->RaceHP->Location = System::Drawing::Point(342, 57);
			this->RaceHP->Name = L"RaceHP";
			this->RaceHP->Size = System::Drawing::Size(0, 27);
			this->RaceHP->TabIndex = 27;
			// 
			// BaseHP
			// 
			this->BaseHP->AutoSize = true;
			this->BaseHP->BackColor = System::Drawing::Color::Transparent;
			this->BaseHP->Font = (gcnew System::Drawing::Font(L"Papyrus", 12.25F));
			this->BaseHP->ForeColor = System::Drawing::Color::Black;
			this->BaseHP->Location = System::Drawing::Point(342, 122);
			this->BaseHP->Name = L"BaseHP";
			this->BaseHP->Size = System::Drawing::Size(0, 27);
			this->BaseHP->TabIndex = 28;
			// 
			// ClassHP
			// 
			this->ClassHP->AutoSize = true;
			this->ClassHP->BackColor = System::Drawing::Color::Transparent;
			this->ClassHP->Font = (gcnew System::Drawing::Font(L"Papyrus", 12.25F));
			this->ClassHP->ForeColor = System::Drawing::Color::Black;
			this->ClassHP->Location = System::Drawing::Point(342, 183);
			this->ClassHP->Name = L"ClassHP";
			this->ClassHP->Size = System::Drawing::Size(0, 27);
			this->ClassHP->TabIndex = 29;
			// 
			// HPMod
			// 
			this->HPMod->AutoSize = true;
			this->HPMod->BackColor = System::Drawing::Color::Transparent;
			this->HPMod->Font = (gcnew System::Drawing::Font(L"Papyrus", 12.25F));
			this->HPMod->ForeColor = System::Drawing::Color::Black;
			this->HPMod->Location = System::Drawing::Point(299, 246);
			this->HPMod->Name = L"HPMod";
			this->HPMod->Size = System::Drawing::Size(0, 27);
			this->HPMod->TabIndex = 30;
			// 
			// StatMod
			// 
			this->StatMod->AutoSize = true;
			this->StatMod->BackColor = System::Drawing::Color::Transparent;
			this->StatMod->Font = (gcnew System::Drawing::Font(L"Papyrus", 12.25F));
			this->StatMod->ForeColor = System::Drawing::Color::Black;
			this->StatMod->Location = System::Drawing::Point(402, 246);
			this->StatMod->Name = L"StatMod";
			this->StatMod->Size = System::Drawing::Size(0, 27);
			this->StatMod->TabIndex = 31;
			this->StatMod->Click += gcnew System::EventHandler(this, &Race_Selection::label3_Click);
			// 
			// Race_Selection
			// 
			this->AllowDrop = true;
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(785, 427);
			this->Controls->Add(this->StatMod);
			this->Controls->Add(this->HPMod);
			this->Controls->Add(this->ClassHP);
			this->Controls->Add(this->BaseHP);
			this->Controls->Add(this->RaceHP);
			this->Controls->Add(this->sTheif);
			this->Controls->Add(this->sMage);
			this->Controls->Add(this->sFighter);
			this->Controls->Add(this->sCleric);
			this->Controls->Add(this->sHalfling);
			this->Controls->Add(this->sElf);
			this->Controls->Add(this->sDwarf);
			this->Controls->Add(this->sHuman);
			this->Controls->Add(this->nextWindow);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Portrait);
			this->Controls->Add(this->desc);
			this->Font = (gcnew System::Drawing::Font(L"Papyrus", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Race_Selection";
			this->Text = L"CHOOSE THY RACE";
			this->Load += gcnew System::EventHandler(this, &Race_Selection::Race_Selection_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Portrait))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	//private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
			// }
	//private: System::Void Human_Click(System::Object^  sender, System::EventArgs^  e) {	 
			// }
private: System::Void label1_Click_1(System::Object^  sender, System::EventArgs^  e) {
		 }
//private: System::Void SCleric_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		// }
//private: System::Void SHuman_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		// }
private: System::Void sHuman_CheckedChanged_1(System::Object^  sender, System::EventArgs^  e) {
			 race = "Human";
			 sDwarf->Checked = false;
			 sElf->Checked = false;
			 sHalfling->Checked = false;
			 desc->Text = "Humans are versatile and pretty good at everything.";
			 RaceHP->Text = "Human";
			 BaseHP->Text = "Base : 10 HP";
			 Portrait->Load("human.jpg");
			RaceFlag = 1;
			 if(RaceFlag == 1 && ClassFlag == 1){
				 nextWindow->Enabled = true;
				 nextWindow->Text = "For glory!";
			 }
		 }
private: System::Void sDwarf_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 race = "Dwarf";
			 sHuman->Checked = false;
			 sElf->Checked = false;
			 sHalfling->Checked = false;
			 desc->Text = "Most dwarves are rugged, brave and boisterous, with a love of strong drink.\n Dwarves make good fighters.";
			 RaceHP->Text = "Dwarf";
			 BaseHP->Text = "Base : 10 HP";
			 Portrait->Load("dwarf.jpg");
			 RaceFlag = 1;
			 if(RaceFlag == 1 && ClassFlag == 1){
				 nextWindow->Enabled = true;
				 nextWindow->Text = "Strike the earth!";
			 }
		 }
private: System::Void sElf_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 race = "Elf";
			 sHuman->Checked = false;
			 sDwarf->Checked = false;
			 sHalfling->Checked = false;
			 desc->Text = "The typical elf is fascinated with magic and they typically make good mages.";
			 RaceHP->Text = "Elf";
			 BaseHP->Text = "Base : 5 HP";
			 Portrait->Load("elf.jpg");
			 RaceFlag = 1;
			 if(RaceFlag == 1 && ClassFlag == 1){
				 nextWindow->Enabled = true;
				 nextWindow->Text = "Knowledge rules all!";
			 }
		 }
private: System::Void Race_Selection_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void sHalfling_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 race = "Halfling";
			 sHuman->Checked = false;
			 sDwarf->Checked = false;
			 sElf->Checked = false;
			 desc->Text = "An average halfling is amiable with a preference for creature comforts.\n Their small size makes them excellent thieves.";
			 RaceHP->Text = "Halfing";
			 BaseHP->Text = "Base : 5 HP";
			 Portrait->Load("halfling.jpg");
			 RaceFlag = 1;
			 if(RaceFlag == 1 && ClassFlag == 1){
				 nextWindow->Enabled = true;
				 nextWindow->Text = "Don't underestimate me!";
			 }
		 }
private: System::Void sCleric_CheckedChanged_1(System::Object^  sender, System::EventArgs^  e) {
			 cla = "Cleric";
			 sFighter->Checked = false;
			 sMage->Checked =  false;
			 sTheif->Checked = false;
			 desc->Text = "Clerics are members of the clergy and set out into the world to spread\n the teachings of their god. They are adequate combatants and have the ability\n to use magic to heal their allies. If you decide to play a cleric,\n it's beneficial if you have a good Wisdom score.";
			 ClassHP->Text = "Cleric";
			 HPMod->Text = "+1d8 HP";
			 StatMod->Text = "+2 Wis";
			 ClassFlag = 1;
			 if(RaceFlag == 1 && ClassFlag == 1){
				 nextWindow->Enabled = true;
				 nextWindow->Text = "Praise the gods!";
			 }
		 }
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void sFighter_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 cla = "Fighter";
			 sCleric->Checked = false;
			 sMage->Checked = false;
			 sTheif->Checked = false;
			 desc->Text = "Fighters are good at combat. This is an excellent choice for a novice player\n as fighters are usually in the thick of the action - providing you with\n fairly unambiguous options to keep you engaged in the game.\n You should consider a fighter if you have average or above average\n scores in Strength and/or Constitution.";
			 ClassHP->Text = "Fighter";
			 HPMod->Text = "+1d10 HP";
			 StatMod->Text = "+1 Str +1 Con";
			 ClassFlag = 1;
			 if(RaceFlag == 1 && ClassFlag == 1){
				 nextWindow->Enabled = true;
				 nextWindow->Text = "Fight for honor!";
			 }
		 }
private: System::Void sMage_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 cla = "Mage";
			 sCleric->Checked = false;
			 sFighter->Checked = false;
			 sTheif->Checked = false;
			 desc->Text = "Mages are weak at combat and use their magic spells to hurt or impede enemies.\n A mage character should have Intelligence as one of his strongest scores.";
			 ClassHP->Text = "Mage";
			 HPMod->Text = "+1d4 HP";
			 StatMod->Text = "+2 Int";
			 ClassFlag = 1;
			 if(RaceFlag == 1 && ClassFlag == 1){
				 nextWindow->Enabled = true;
				 nextWindow->Text = "Brains over brawn!";
			 }
		 }
private: System::Void sTheif_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 cla = "Thief";
			 sCleric->Checked = false;
			 sFighter->Checked = false;
			 sMage->Checked = false;
			 desc->Text = "Thieves excel at sneaking around and exploring. They are not as good at fighters\n in combat except when they can attack opponents from behind.\n Consider playing a thief if you have a high Dexterity score.";
			 ClassHP->Text = "Theif";
			 HPMod->Text = "+1d6 HP";
			 StatMod->Text = "+2 Dex";
			 ClassFlag = 1;
			 if(RaceFlag == 1 && ClassFlag == 1){
				 nextWindow->Enabled = true;
				 nextWindow->Text = "Remain unseen!";
			 }
		 }
private: System::Void nextWindow_Click(System::Object^  sender, System::EventArgs^  e) {
			 Close();
		 }
};
}

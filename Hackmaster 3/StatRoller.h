#pragma once

namespace Hackmaster3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;//I added this to try to get stuff to work
	int strflag = 0;
	int intflag = 0;
	int wisflag = 0;
	int dexflag = 0;
	int conflag = 0;
	int lookflag = 0;
	int chaflag = 0;
	double rollt;
	double rollt2;
	int RaceFlag = 0;
	int ClassFlag = 0;

	/// <summary>
	/// Summary for StatRoller
	/// </summary>
	public ref class StatRoller : public System::Windows::Forms::Form
	{
	public:
		StatRoller(void)
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
		~StatRoller()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::NumericUpDown^  stre;
	private: System::Windows::Forms::NumericUpDown^  intel;
	private: System::Windows::Forms::NumericUpDown^  wis;
	private: System::Windows::Forms::NumericUpDown^  dex;

	private: System::Windows::Forms::NumericUpDown^  lks;
	private: System::Windows::Forms::NumericUpDown^  cha;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::NumericUpDown^  con;

	private: System::Windows::Forms::Button^  RollStr;
	private: System::Windows::Forms::Button^  RollIntel;
	private: System::Windows::Forms::Button^  RollWis;
	private: System::Windows::Forms::Button^  RollDex;
	private: System::Windows::Forms::Button^  RollCon;
	private: System::Windows::Forms::Button^  RollLok;
	private: System::Windows::Forms::Button^  RollCha;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  dmgmod;
	private: System::Windows::Forms::Label^  strfeat;
	private: System::Windows::Forms::Label^  lift;
	private: System::Windows::Forms::Label^  carry;
	private: System::Windows::Forms::Label^  drag;
	private: System::Windows::Forms::Label^  atkint;
	private: System::Windows::Forms::Label^  wisinit;
	private: System::Windows::Forms::Label^  wisdef;
	private: System::Windows::Forms::Label^  dexinit;
	private: System::Windows::Forms::Label^  dexatt;
	private: System::Windows::Forms::Label^  dexdef;
	private: System::Windows::Forms::Label^  chaturn;
	private: System::Windows::Forms::NumericUpDown^  strper;
	private: System::Windows::Forms::NumericUpDown^  intelper;
	private: System::Windows::Forms::NumericUpDown^  wisper;
	private: System::Windows::Forms::NumericUpDown^  dexper;
	private: System::Windows::Forms::NumericUpDown^  conper;
	private: System::Windows::Forms::NumericUpDown^  lksper;
	private: System::Windows::Forms::NumericUpDown^  chaper;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Button^  nextWindow;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(StatRoller::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->stre = (gcnew System::Windows::Forms::NumericUpDown());
			this->intel = (gcnew System::Windows::Forms::NumericUpDown());
			this->wis = (gcnew System::Windows::Forms::NumericUpDown());
			this->dex = (gcnew System::Windows::Forms::NumericUpDown());
			this->lks = (gcnew System::Windows::Forms::NumericUpDown());
			this->cha = (gcnew System::Windows::Forms::NumericUpDown());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->con = (gcnew System::Windows::Forms::NumericUpDown());
			this->RollStr = (gcnew System::Windows::Forms::Button());
			this->RollIntel = (gcnew System::Windows::Forms::Button());
			this->RollWis = (gcnew System::Windows::Forms::Button());
			this->RollDex = (gcnew System::Windows::Forms::Button());
			this->RollCon = (gcnew System::Windows::Forms::Button());
			this->RollLok = (gcnew System::Windows::Forms::Button());
			this->RollCha = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->dmgmod = (gcnew System::Windows::Forms::Label());
			this->strfeat = (gcnew System::Windows::Forms::Label());
			this->lift = (gcnew System::Windows::Forms::Label());
			this->carry = (gcnew System::Windows::Forms::Label());
			this->drag = (gcnew System::Windows::Forms::Label());
			this->atkint = (gcnew System::Windows::Forms::Label());
			this->wisinit = (gcnew System::Windows::Forms::Label());
			this->wisdef = (gcnew System::Windows::Forms::Label());
			this->dexinit = (gcnew System::Windows::Forms::Label());
			this->dexatt = (gcnew System::Windows::Forms::Label());
			this->dexdef = (gcnew System::Windows::Forms::Label());
			this->chaturn = (gcnew System::Windows::Forms::Label());
			this->strper = (gcnew System::Windows::Forms::NumericUpDown());
			this->intelper = (gcnew System::Windows::Forms::NumericUpDown());
			this->wisper = (gcnew System::Windows::Forms::NumericUpDown());
			this->dexper = (gcnew System::Windows::Forms::NumericUpDown());
			this->conper = (gcnew System::Windows::Forms::NumericUpDown());
			this->lksper = (gcnew System::Windows::Forms::NumericUpDown());
			this->chaper = (gcnew System::Windows::Forms::NumericUpDown());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->nextWindow = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->stre))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->intel))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->wis))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dex))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->lks))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->cha))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->con))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->strper))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->intelper))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->wisper))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dexper))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->conper))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->lksper))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chaper))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(17, 62);
			this->label1->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(55, 18);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Strength";
			this->label1->Click += gcnew System::EventHandler(this, &StatRoller::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(17, 116);
			this->label2->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(65, 18);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Intelligence";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(17, 172);
			this->label3->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(51, 18);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Wisdom";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(17, 227);
			this->label4->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(57, 18);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Dexterity";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(17, 339);
			this->label5->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(41, 18);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Looks";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->ForeColor = System::Drawing::Color::Black;
			this->label6->Location = System::Drawing::Point(17, 395);
			this->label6->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(61, 18);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Charismsa";
			// 
			// stre
			// 
			this->stre->BackColor = System::Drawing::Color::White;
			this->stre->Enabled = false;
			this->stre->ForeColor = System::Drawing::Color::Black;
			this->stre->InterceptArrowKeys = false;
			this->stre->Location = System::Drawing::Point(107, 61);
			this->stre->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->stre->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {20, 0, 0, 0});
			this->stre->Name = L"stre";
			this->stre->ReadOnly = true;
			this->stre->Size = System::Drawing::Size(59, 25);
			this->stre->TabIndex = 12;
			this->stre->ValueChanged += gcnew System::EventHandler(this, &StatRoller::stre_ValueChanged);
			// 
			// intel
			// 
			this->intel->BackColor = System::Drawing::Color::White;
			this->intel->Enabled = false;
			this->intel->ForeColor = System::Drawing::Color::Black;
			this->intel->InterceptArrowKeys = false;
			this->intel->Location = System::Drawing::Point(107, 116);
			this->intel->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->intel->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {20, 0, 0, 0});
			this->intel->Name = L"intel";
			this->intel->ReadOnly = true;
			this->intel->Size = System::Drawing::Size(59, 25);
			this->intel->TabIndex = 13;
			// 
			// wis
			// 
			this->wis->BackColor = System::Drawing::Color::White;
			this->wis->Enabled = false;
			this->wis->ForeColor = System::Drawing::Color::Black;
			this->wis->InterceptArrowKeys = false;
			this->wis->Location = System::Drawing::Point(107, 170);
			this->wis->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->wis->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {20, 0, 0, 0});
			this->wis->Name = L"wis";
			this->wis->ReadOnly = true;
			this->wis->Size = System::Drawing::Size(59, 25);
			this->wis->TabIndex = 14;
			// 
			// dex
			// 
			this->dex->BackColor = System::Drawing::Color::White;
			this->dex->Enabled = false;
			this->dex->ForeColor = System::Drawing::Color::Black;
			this->dex->InterceptArrowKeys = false;
			this->dex->Location = System::Drawing::Point(107, 224);
			this->dex->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->dex->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {20, 0, 0, 0});
			this->dex->Name = L"dex";
			this->dex->ReadOnly = true;
			this->dex->Size = System::Drawing::Size(59, 25);
			this->dex->TabIndex = 15;
			// 
			// lks
			// 
			this->lks->BackColor = System::Drawing::Color::White;
			this->lks->Enabled = false;
			this->lks->ForeColor = System::Drawing::Color::Black;
			this->lks->InterceptArrowKeys = false;
			this->lks->Location = System::Drawing::Point(107, 332);
			this->lks->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->lks->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {20, 0, 0, 0});
			this->lks->Name = L"lks";
			this->lks->ReadOnly = true;
			this->lks->Size = System::Drawing::Size(59, 25);
			this->lks->TabIndex = 16;
			// 
			// cha
			// 
			this->cha->BackColor = System::Drawing::Color::White;
			this->cha->Enabled = false;
			this->cha->ForeColor = System::Drawing::Color::Black;
			this->cha->InterceptArrowKeys = false;
			this->cha->Location = System::Drawing::Point(107, 392);
			this->cha->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->cha->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {20, 0, 0, 0});
			this->cha->Name = L"cha";
			this->cha->ReadOnly = true;
			this->cha->Size = System::Drawing::Size(59, 25);
			this->cha->TabIndex = 17;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->ForeColor = System::Drawing::Color::Black;
			this->label7->Location = System::Drawing::Point(17, 284);
			this->label7->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(74, 18);
			this->label7->TabIndex = 18;
			this->label7->Text = L"Constitution";
			// 
			// con
			// 
			this->con->BackColor = System::Drawing::Color::White;
			this->con->Enabled = false;
			this->con->ForeColor = System::Drawing::Color::Black;
			this->con->InterceptArrowKeys = false;
			this->con->Location = System::Drawing::Point(107, 280);
			this->con->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->con->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {20, 0, 0, 0});
			this->con->Name = L"con";
			this->con->ReadOnly = true;
			this->con->Size = System::Drawing::Size(59, 25);
			this->con->TabIndex = 19;
			// 
			// RollStr
			// 
			this->RollStr->Location = System::Drawing::Point(277, 56);
			this->RollStr->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->RollStr->Name = L"RollStr";
			this->RollStr->Size = System::Drawing::Size(53, 32);
			this->RollStr->TabIndex = 20;
			this->RollStr->Text = L"Roll";
			this->RollStr->UseVisualStyleBackColor = true;
			this->RollStr->Click += gcnew System::EventHandler(this, &StatRoller::RollStr_Click);
			// 
			// RollIntel
			// 
			this->RollIntel->Location = System::Drawing::Point(277, 111);
			this->RollIntel->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->RollIntel->Name = L"RollIntel";
			this->RollIntel->Size = System::Drawing::Size(53, 32);
			this->RollIntel->TabIndex = 21;
			this->RollIntel->Text = L"Roll";
			this->RollIntel->UseVisualStyleBackColor = true;
			this->RollIntel->Click += gcnew System::EventHandler(this, &StatRoller::RollIntel_Click);
			// 
			// RollWis
			// 
			this->RollWis->Location = System::Drawing::Point(277, 166);
			this->RollWis->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->RollWis->Name = L"RollWis";
			this->RollWis->Size = System::Drawing::Size(53, 32);
			this->RollWis->TabIndex = 22;
			this->RollWis->Text = L"Roll";
			this->RollWis->UseVisualStyleBackColor = true;
			this->RollWis->Click += gcnew System::EventHandler(this, &StatRoller::RollWis_Click);
			// 
			// RollDex
			// 
			this->RollDex->Location = System::Drawing::Point(277, 224);
			this->RollDex->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->RollDex->Name = L"RollDex";
			this->RollDex->Size = System::Drawing::Size(53, 32);
			this->RollDex->TabIndex = 23;
			this->RollDex->Text = L"Roll";
			this->RollDex->UseVisualStyleBackColor = true;
			this->RollDex->Click += gcnew System::EventHandler(this, &StatRoller::RollDex_Click);
			// 
			// RollCon
			// 
			this->RollCon->Location = System::Drawing::Point(277, 278);
			this->RollCon->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->RollCon->Name = L"RollCon";
			this->RollCon->Size = System::Drawing::Size(53, 32);
			this->RollCon->TabIndex = 24;
			this->RollCon->Text = L"Roll";
			this->RollCon->UseVisualStyleBackColor = true;
			this->RollCon->Click += gcnew System::EventHandler(this, &StatRoller::RollCon_Click);
			// 
			// RollLok
			// 
			this->RollLok->Location = System::Drawing::Point(277, 332);
			this->RollLok->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->RollLok->Name = L"RollLok";
			this->RollLok->Size = System::Drawing::Size(53, 32);
			this->RollLok->TabIndex = 25;
			this->RollLok->Text = L"Roll";
			this->RollLok->UseVisualStyleBackColor = true;
			this->RollLok->Click += gcnew System::EventHandler(this, &StatRoller::RollLok_Click);
			// 
			// RollCha
			// 
			this->RollCha->Location = System::Drawing::Point(277, 386);
			this->RollCha->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->RollCha->Name = L"RollCha";
			this->RollCha->Size = System::Drawing::Size(53, 32);
			this->RollCha->TabIndex = 26;
			this->RollCha->Text = L"Roll";
			this->RollCha->UseVisualStyleBackColor = true;
			this->RollCha->Click += gcnew System::EventHandler(this, &StatRoller::RollCha_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox1->ImageLocation = L"C:\\Users\\Daeleth\\C++ workspace\\Hackmaster 3\\Hackmaster 3\\StatModifiers.jpg";
			this->pictureBox1->Location = System::Drawing::Point(367, 43);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(491, 512);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 27;
			this->pictureBox1->TabStop = false;
			// 
			// dmgmod
			// 
			this->dmgmod->AutoSize = true;
			this->dmgmod->BackColor = System::Drawing::SystemColors::Window;
			this->dmgmod->Font = (gcnew System::Drawing::Font(L"Papyrus", 12, System::Drawing::FontStyle::Italic));
			this->dmgmod->ForeColor = System::Drawing::SystemColors::Desktop;
			this->dmgmod->Location = System::Drawing::Point(421, 62);
			this->dmgmod->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->dmgmod->Name = L"dmgmod";
			this->dmgmod->Size = System::Drawing::Size(21, 25);
			this->dmgmod->TabIndex = 28;
			this->dmgmod->Text = L"0";
			this->dmgmod->Click += gcnew System::EventHandler(this, &StatRoller::dmgmod_Click);
			// 
			// strfeat
			// 
			this->strfeat->AutoSize = true;
			this->strfeat->BackColor = System::Drawing::SystemColors::Window;
			this->strfeat->Font = (gcnew System::Drawing::Font(L"Papyrus", 12, System::Drawing::FontStyle::Italic));
			this->strfeat->ForeColor = System::Drawing::SystemColors::Desktop;
			this->strfeat->Location = System::Drawing::Point(517, 62);
			this->strfeat->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->strfeat->Name = L"strfeat";
			this->strfeat->Size = System::Drawing::Size(21, 25);
			this->strfeat->TabIndex = 29;
			this->strfeat->Text = L"0";
			// 
			// lift
			// 
			this->lift->AutoSize = true;
			this->lift->BackColor = System::Drawing::SystemColors::Window;
			this->lift->Font = (gcnew System::Drawing::Font(L"Papyrus", 12, System::Drawing::FontStyle::Italic));
			this->lift->ForeColor = System::Drawing::SystemColors::Desktop;
			this->lift->Location = System::Drawing::Point(617, 62);
			this->lift->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->lift->Name = L"lift";
			this->lift->Size = System::Drawing::Size(21, 25);
			this->lift->TabIndex = 30;
			this->lift->Text = L"0";
			// 
			// carry
			// 
			this->carry->AutoSize = true;
			this->carry->BackColor = System::Drawing::SystemColors::Window;
			this->carry->Font = (gcnew System::Drawing::Font(L"Papyrus", 12, System::Drawing::FontStyle::Italic));
			this->carry->ForeColor = System::Drawing::SystemColors::Desktop;
			this->carry->Location = System::Drawing::Point(711, 62);
			this->carry->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->carry->Name = L"carry";
			this->carry->Size = System::Drawing::Size(21, 25);
			this->carry->TabIndex = 31;
			this->carry->Text = L"0";
			// 
			// drag
			// 
			this->drag->AutoSize = true;
			this->drag->BackColor = System::Drawing::SystemColors::Window;
			this->drag->Font = (gcnew System::Drawing::Font(L"Papyrus", 12, System::Drawing::FontStyle::Italic));
			this->drag->ForeColor = System::Drawing::SystemColors::Desktop;
			this->drag->Location = System::Drawing::Point(805, 62);
			this->drag->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->drag->Name = L"drag";
			this->drag->Size = System::Drawing::Size(21, 25);
			this->drag->TabIndex = 32;
			this->drag->Text = L"0";
			// 
			// atkint
			// 
			this->atkint->AutoSize = true;
			this->atkint->BackColor = System::Drawing::SystemColors::Window;
			this->atkint->Font = (gcnew System::Drawing::Font(L"Papyrus", 12, System::Drawing::FontStyle::Italic));
			this->atkint->ForeColor = System::Drawing::SystemColors::Desktop;
			this->atkint->Location = System::Drawing::Point(421, 116);
			this->atkint->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->atkint->Name = L"atkint";
			this->atkint->Size = System::Drawing::Size(21, 25);
			this->atkint->TabIndex = 33;
			this->atkint->Text = L"0";
			// 
			// wisinit
			// 
			this->wisinit->AutoSize = true;
			this->wisinit->BackColor = System::Drawing::SystemColors::Window;
			this->wisinit->Font = (gcnew System::Drawing::Font(L"Papyrus", 12, System::Drawing::FontStyle::Italic));
			this->wisinit->ForeColor = System::Drawing::SystemColors::Desktop;
			this->wisinit->Location = System::Drawing::Point(421, 172);
			this->wisinit->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->wisinit->Name = L"wisinit";
			this->wisinit->Size = System::Drawing::Size(21, 25);
			this->wisinit->TabIndex = 34;
			this->wisinit->Text = L"0";
			// 
			// wisdef
			// 
			this->wisdef->AutoSize = true;
			this->wisdef->BackColor = System::Drawing::SystemColors::Window;
			this->wisdef->Font = (gcnew System::Drawing::Font(L"Papyrus", 12, System::Drawing::FontStyle::Italic));
			this->wisdef->ForeColor = System::Drawing::SystemColors::Desktop;
			this->wisdef->Location = System::Drawing::Point(576, 170);
			this->wisdef->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->wisdef->Name = L"wisdef";
			this->wisdef->Size = System::Drawing::Size(21, 25);
			this->wisdef->TabIndex = 35;
			this->wisdef->Text = L"0";
			// 
			// dexinit
			// 
			this->dexinit->AutoSize = true;
			this->dexinit->BackColor = System::Drawing::SystemColors::Window;
			this->dexinit->Font = (gcnew System::Drawing::Font(L"Papyrus", 12, System::Drawing::FontStyle::Italic));
			this->dexinit->ForeColor = System::Drawing::SystemColors::Desktop;
			this->dexinit->Location = System::Drawing::Point(421, 227);
			this->dexinit->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->dexinit->Name = L"dexinit";
			this->dexinit->Size = System::Drawing::Size(21, 25);
			this->dexinit->TabIndex = 36;
			this->dexinit->Text = L"0";
			// 
			// dexatt
			// 
			this->dexatt->AutoSize = true;
			this->dexatt->BackColor = System::Drawing::SystemColors::Window;
			this->dexatt->Font = (gcnew System::Drawing::Font(L"Papyrus", 12, System::Drawing::FontStyle::Italic));
			this->dexatt->ForeColor = System::Drawing::SystemColors::Desktop;
			this->dexatt->Location = System::Drawing::Point(576, 227);
			this->dexatt->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->dexatt->Name = L"dexatt";
			this->dexatt->Size = System::Drawing::Size(21, 25);
			this->dexatt->TabIndex = 37;
			this->dexatt->Text = L"0";
			// 
			// dexdef
			// 
			this->dexdef->AutoSize = true;
			this->dexdef->BackColor = System::Drawing::SystemColors::Window;
			this->dexdef->Font = (gcnew System::Drawing::Font(L"Papyrus", 12, System::Drawing::FontStyle::Italic));
			this->dexdef->ForeColor = System::Drawing::SystemColors::Desktop;
			this->dexdef->Location = System::Drawing::Point(711, 227);
			this->dexdef->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->dexdef->Name = L"dexdef";
			this->dexdef->Size = System::Drawing::Size(21, 25);
			this->dexdef->TabIndex = 38;
			this->dexdef->Text = L"0";
			// 
			// chaturn
			// 
			this->chaturn->AutoSize = true;
			this->chaturn->BackColor = System::Drawing::SystemColors::Window;
			this->chaturn->Font = (gcnew System::Drawing::Font(L"Papyrus", 12, System::Drawing::FontStyle::Italic));
			this->chaturn->ForeColor = System::Drawing::SystemColors::Desktop;
			this->chaturn->Location = System::Drawing::Point(479, 395);
			this->chaturn->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->chaturn->Name = L"chaturn";
			this->chaturn->Size = System::Drawing::Size(21, 25);
			this->chaturn->TabIndex = 39;
			this->chaturn->Text = L"0";
			// 
			// strper
			// 
			this->strper->BackColor = System::Drawing::Color::White;
			this->strper->Enabled = false;
			this->strper->ForeColor = System::Drawing::Color::Black;
			this->strper->InterceptArrowKeys = false;
			this->strper->Location = System::Drawing::Point(176, 61);
			this->strper->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->strper->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {99, 0, 0, 0});
			this->strper->Name = L"strper";
			this->strper->ReadOnly = true;
			this->strper->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->strper->Size = System::Drawing::Size(59, 25);
			this->strper->TabIndex = 40;
			// 
			// intelper
			// 
			this->intelper->BackColor = System::Drawing::Color::White;
			this->intelper->Enabled = false;
			this->intelper->ForeColor = System::Drawing::Color::Black;
			this->intelper->InterceptArrowKeys = false;
			this->intelper->Location = System::Drawing::Point(176, 116);
			this->intelper->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->intelper->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {99, 0, 0, 0});
			this->intelper->Name = L"intelper";
			this->intelper->ReadOnly = true;
			this->intelper->Size = System::Drawing::Size(59, 25);
			this->intelper->TabIndex = 41;
			// 
			// wisper
			// 
			this->wisper->BackColor = System::Drawing::Color::White;
			this->wisper->Enabled = false;
			this->wisper->ForeColor = System::Drawing::Color::Black;
			this->wisper->InterceptArrowKeys = false;
			this->wisper->Location = System::Drawing::Point(176, 170);
			this->wisper->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->wisper->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {99, 0, 0, 0});
			this->wisper->Name = L"wisper";
			this->wisper->ReadOnly = true;
			this->wisper->Size = System::Drawing::Size(59, 25);
			this->wisper->TabIndex = 42;
			// 
			// dexper
			// 
			this->dexper->BackColor = System::Drawing::Color::White;
			this->dexper->Enabled = false;
			this->dexper->ForeColor = System::Drawing::Color::Black;
			this->dexper->InterceptArrowKeys = false;
			this->dexper->Location = System::Drawing::Point(176, 224);
			this->dexper->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->dexper->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {99, 0, 0, 0});
			this->dexper->Name = L"dexper";
			this->dexper->ReadOnly = true;
			this->dexper->Size = System::Drawing::Size(59, 25);
			this->dexper->TabIndex = 43;
			// 
			// conper
			// 
			this->conper->BackColor = System::Drawing::Color::White;
			this->conper->Enabled = false;
			this->conper->ForeColor = System::Drawing::Color::Black;
			this->conper->InterceptArrowKeys = false;
			this->conper->Location = System::Drawing::Point(176, 280);
			this->conper->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->conper->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {99, 0, 0, 0});
			this->conper->Name = L"conper";
			this->conper->ReadOnly = true;
			this->conper->Size = System::Drawing::Size(59, 25);
			this->conper->TabIndex = 44;
			// 
			// lksper
			// 
			this->lksper->BackColor = System::Drawing::Color::White;
			this->lksper->Enabled = false;
			this->lksper->ForeColor = System::Drawing::Color::Black;
			this->lksper->InterceptArrowKeys = false;
			this->lksper->Location = System::Drawing::Point(176, 332);
			this->lksper->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->lksper->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {99, 0, 0, 0});
			this->lksper->Name = L"lksper";
			this->lksper->ReadOnly = true;
			this->lksper->Size = System::Drawing::Size(59, 25);
			this->lksper->TabIndex = 45;
			// 
			// chaper
			// 
			this->chaper->BackColor = System::Drawing::Color::White;
			this->chaper->Enabled = false;
			this->chaper->ForeColor = System::Drawing::Color::Black;
			this->chaper->InterceptArrowKeys = false;
			this->chaper->Location = System::Drawing::Point(176, 392);
			this->chaper->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->chaper->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {99, 0, 0, 0});
			this->chaper->Name = L"chaper";
			this->chaper->ReadOnly = true;
			this->chaper->Size = System::Drawing::Size(59, 25);
			this->chaper->TabIndex = 46;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Papyrus", 10, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->label8->ForeColor = System::Drawing::Color::Black;
			this->label8->Location = System::Drawing::Point(172, 31);
			this->label8->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(80, 22);
			this->label8->TabIndex = 47;
			this->label8->Text = L"Percent %";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Papyrus", 12.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->label9->ForeColor = System::Drawing::Color::Black;
			this->label9->Location = System::Drawing::Point(101, 28);
			this->label9->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(65, 27);
			this->label9->TabIndex = 48;
			this->label9->Text = L"Score";
			// 
			// nextWindow
			// 
			this->nextWindow->Enabled = false;
			this->nextWindow->Font = (gcnew System::Drawing::Font(L"Papyrus", 12.25F, System::Drawing::FontStyle::Italic));
			this->nextWindow->Location = System::Drawing::Point(62, 462);
			this->nextWindow->Name = L"nextWindow";
			this->nextWindow->Size = System::Drawing::Size(220, 62);
			this->nextWindow->TabIndex = 49;
			this->nextWindow->Text = L"Not Yet...";
			this->nextWindow->UseVisualStyleBackColor = true;
			this->nextWindow->Click += gcnew System::EventHandler(this, &StatRoller::nextWindow_Click);
			// 
			// StatRoller
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(865, 573);
			this->Controls->Add(this->nextWindow);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->chaper);
			this->Controls->Add(this->lksper);
			this->Controls->Add(this->conper);
			this->Controls->Add(this->dexper);
			this->Controls->Add(this->wisper);
			this->Controls->Add(this->intelper);
			this->Controls->Add(this->strper);
			this->Controls->Add(this->chaturn);
			this->Controls->Add(this->dexdef);
			this->Controls->Add(this->dexatt);
			this->Controls->Add(this->dexinit);
			this->Controls->Add(this->wisdef);
			this->Controls->Add(this->wisinit);
			this->Controls->Add(this->atkint);
			this->Controls->Add(this->drag);
			this->Controls->Add(this->carry);
			this->Controls->Add(this->lift);
			this->Controls->Add(this->strfeat);
			this->Controls->Add(this->dmgmod);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->RollCha);
			this->Controls->Add(this->RollLok);
			this->Controls->Add(this->RollCon);
			this->Controls->Add(this->RollDex);
			this->Controls->Add(this->RollWis);
			this->Controls->Add(this->RollIntel);
			this->Controls->Add(this->RollStr);
			this->Controls->Add(this->con);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->cha);
			this->Controls->Add(this->lks);
			this->Controls->Add(this->dex);
			this->Controls->Add(this->wis);
			this->Controls->Add(this->intel);
			this->Controls->Add(this->stre);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->Font = (gcnew System::Drawing::Font(L"Papyrus", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->Name = L"StatRoller";
			this->Text = L"ROLL THY STATS";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->stre))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->intel))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->wis))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dex))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->lks))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->cha))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->con))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->strper))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->intelper))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->wisper))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dexper))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->conper))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->lksper))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chaper))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void StatRoller_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void stre_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void RollStr_Click(System::Object^  sender, System::EventArgs^  e) {
			 streGlobal = roll(3,6) + roll(1,100)/100.00;					// generate str score
			 rollt = floor(streGlobal);										//this is the base score
			 stre->Text = System::Convert::ToString(rollt);					//Display base
			 rollt2 = (streGlobal-floor(streGlobal))*100;					//this is the percentile from istre
			 strper->Text = System::Convert::ToString(rollt2);				//Display Percentile
			 strflag = 1;
			 //mysql connection stuff and Query
			 MySqlConnection ^MySqlConnection1 = gcnew MySqlConnection("server=localhost;User Id=root;Persist Security Info=True;Password='consequence';database=hackmaster");
			 MySqlConnection1->Open();
			 MySqlCommand ^MySqlCommand1=gcnew MySqlCommand;
			 MySqlDataReader ^result;
			 MySqlCommand1->Connection=MySqlConnection1;
			if(streGlobal - floor(streGlobal) > .5){						//generate the rounded value for the Query
				round = floor(streGlobal)+.5;
			}
			else{
				round = floor(streGlobal);
			}
			 MySqlCommand1->CommandText = "SELECT * FROM str WHERE `Ability Score` = " + round + "";
			 result = MySqlCommand1->ExecuteReader();
			 while (result->Read())
			 {
				 dmgmodOut = System::Convert::ToDouble(result->GetValue(1)->ToString());
				 dmgmod->Text = System::Convert::ToString(dmgmodOut);
				 strfeatOut = System::Convert::ToDouble(result->GetValue(2)->ToString());
				 strfeat->Text = System::Convert::ToString(strfeatOut);
				 liftOut = System::Convert::ToDouble(result->GetValue(3)->ToString());
				 lift->Text = System::Convert::ToString(liftOut);
				 carryOut = System::Convert::ToDouble(result->GetValue(4)->ToString());
				 carry->Text = System::Convert::ToString(carryOut);
				 dragOut = System::Convert::ToDouble(result->GetValue(5)->ToString());
				 drag->Text = System::Convert::ToString(dragOut);
			 }
			 result=nullptr;
			 MySqlCommand1=nullptr;
			 //end connection stuff
			 if(strflag == 1 && intflag == 1 && wisflag == 1 && dexflag == 1 && conflag == 1 && lookflag == 1 && chaflag == 1){
				 nextWindow->Enabled = true;
				 nextWindow->Text = "LEAD ME TO BATTLE!";
			 }
			 RollStr->Enabled = false;
			 RollStr->Text = "Rolled!";
		 }
private: System::Void RollIntel_Click(System::Object^  sender, System::EventArgs^  e) {
			intelGlobal = roll(3,6) + roll(1,100)/100.00;
			rollt = floor(intelGlobal);
			intel->Text = System::Convert::ToString(rollt);
			rollt2 = (intelGlobal-floor(intelGlobal))*100;
			intelper->Text = System::Convert::ToString(rollt2);
			intflag = 1;
			//mysql connection stuff and Query
			MySqlConnection ^MySqlConnection1 = gcnew MySqlConnection("server=localhost;User Id=root;Persist Security Info=True;Password='consequence';database=hackmaster");
			MySqlConnection1->Open();
			MySqlCommand ^MySqlCommand1=gcnew MySqlCommand;
			MySqlDataReader ^result;
			MySqlCommand1->Connection=MySqlConnection1;
			round = floor(intelGlobal);
			MySqlCommand1->CommandText = "SELECT * FROM intel WHERE `Intelligence` = " + round + "";
			result = MySqlCommand1->ExecuteReader();
			while (result->Read())
			{
				atkintOut = System::Convert::ToDouble(result->GetValue(1)->ToString());
				atkint->Text = System::Convert::ToString(atkintOut);
				//add BP
				BP += System::Convert::ToDouble(result->GetValue(2)->ToString());
			}
			result=nullptr;
			MySqlCommand1=nullptr;
			//end connection stuff
			if(strflag == 1 && intflag == 1 && wisflag == 1 && dexflag == 1 && conflag == 1 && lookflag == 1 && chaflag == 1){
				 nextWindow->Enabled = true;
				 nextWindow->Text = "LEAD ME TO BATTLE!";
			}
			RollIntel->Enabled = false;
			RollIntel->Text = "Rolled!";
		 }
private: System::Void nextWindow_Click(System::Object^  sender, System::EventArgs^  e) {
			 Close();
		 }
private: System::Void RollWis_Click(System::Object^  sender, System::EventArgs^  e) {
			 wisGlobal = roll(3,6) + roll(1,100)/100.00;
			 rollt = floor(wisGlobal);
			 wis->Text = System::Convert::ToString(rollt);
			 rollt2 = (wisGlobal-floor(wisGlobal))*100;
			 wisper->Text = System::Convert::ToString(rollt2);
			 wisflag = 1;
			 //mysql connection stuff and Query
			MySqlConnection ^MySqlConnection1 = gcnew MySqlConnection("server=localhost;User Id=root;Persist Security Info=True;Password='consequence';database=hackmaster");
			MySqlConnection1->Open();
			MySqlCommand ^MySqlCommand1=gcnew MySqlCommand;
			MySqlDataReader ^result;
			MySqlCommand1->Connection=MySqlConnection1;
			round = floor(wisGlobal);
			MySqlCommand1->CommandText = "SELECT * FROM wis WHERE `Wisdom` = " + round + "";
			result = MySqlCommand1->ExecuteReader();
			while (result->Read())
			{
				wisinitOut = System::Convert::ToDouble(result->GetValue(1)->ToString());
				wisinit->Text = System::Convert::ToString(wisinitOut);
				wisdefOut =  System::Convert::ToDouble(result->GetValue(3)->ToString());
				wisdef->Text = System::Convert::ToString(wisdefOut);
				//add BP
				BP += System::Convert::ToDouble(result->GetValue(2)->ToString());
			}
			result=nullptr;
			MySqlCommand1=nullptr;
			//end connection stuff
			 if(strflag == 1 && intflag == 1 && wisflag == 1 && dexflag == 1 && conflag == 1 && lookflag == 1 && chaflag == 1){
				 nextWindow->Enabled = true;
				 nextWindow->Text = "LEAD ME TO BATTLE!";
			 }
			 RollWis->Enabled = false;
			 RollWis->Text = "Rolled!";
		 }
private: System::Void RollDex_Click(System::Object^  sender, System::EventArgs^  e) {
			 dexGlobal = roll(3,6) + roll(1,100)/100.00;
			 rollt = floor(dexGlobal);
			 dex->Text = System::Convert::ToString(rollt);
			 rollt2 = (dexGlobal-floor(dexGlobal))*100;
			 dexper->Text = System::Convert::ToString(rollt2);
			 dexflag = 1;
			 //mysql connection stuff and Query
			MySqlConnection ^MySqlConnection1 = gcnew MySqlConnection("server=localhost;User Id=root;Persist Security Info=True;Password='consequence';database=hackmaster");
			MySqlConnection1->Open();
			MySqlCommand ^MySqlCommand1=gcnew MySqlCommand;
			MySqlDataReader ^result;
			MySqlCommand1->Connection=MySqlConnection1;
			if(dexGlobal - floor(dexGlobal) > .5){						//generate the rounded value for the Query
				round = floor(dexGlobal)+.5;
			}
			else{
				round = floor(dexGlobal);
			}
			MySqlCommand1->CommandText = "SELECT * FROM dex WHERE `Dexterity` = " + round + "";
			result = MySqlCommand1->ExecuteReader();
			while (result->Read())
			{
				dexinitOut = System::Convert::ToDouble(result->GetValue(1)->ToString());
				dexinit->Text = System::Convert::ToString(dexinitOut);
				dexatkOut = System::Convert::ToDouble(result->GetValue(2)->ToString());
				dexatt->Text = System::Convert::ToString(dexatkOut);
				dexdefOut = System::Convert::ToDouble(result->GetValue(3)->ToString());
				dexdef->Text = System::Convert::ToString(dexdefOut);
			}
			result=nullptr;
			MySqlCommand1=nullptr;
			//end connection stuff
			 if(strflag == 1 && intflag == 1 && wisflag == 1 && dexflag == 1 && conflag == 1 && lookflag == 1 && chaflag == 1){
				 nextWindow->Enabled = true;
				 nextWindow->Text = "LEAD ME TO BATTLE!";
			 }
			 RollDex->Enabled = false;
			 RollDex->Text = "Rolled!";
		 }
private: System::Void RollCon_Click(System::Object^  sender, System::EventArgs^  e) {
			 conGlobal = roll(3,6) + roll(1,100)/100.00;
			 rollt = floor(conGlobal);
			 con->Text = System::Convert::ToString(rollt);
			 rollt2 = (conGlobal-floor(conGlobal))*100;
			 conper->Text = System::Convert::ToString(rollt2);
			 conflag = 1;
			 if(strflag == 1 && intflag == 1 && wisflag == 1 && dexflag == 1 && conflag == 1 && lookflag == 1 && chaflag == 1){
				 nextWindow->Enabled = true;
				 nextWindow->Text = "LEAD ME TO BATTLE!";
			 }
			 RollCon->Enabled = false;
			 RollCon->Text = "Rolled!";
		 }
private: System::Void RollLok_Click(System::Object^  sender, System::EventArgs^  e) {
			 lokGlobal = roll(3,6) + roll(1,100)/100.00;
			 rollt = floor(lokGlobal);
			 lks->Text = System::Convert::ToString(rollt);
			 rollt2 = (lokGlobal-floor(lokGlobal))*100;
			 lksper->Text = System::Convert::ToString(rollt2);
			 lookflag = 1;
			 //mysql connection stuff and Query
			MySqlConnection ^MySqlConnection1 = gcnew MySqlConnection("server=localhost;User Id=root;Persist Security Info=True;Password='consequence';database=hackmaster");
			MySqlConnection1->Open();
			MySqlCommand ^MySqlCommand1=gcnew MySqlCommand;
			MySqlDataReader ^result;
			MySqlCommand1->Connection=MySqlConnection1;
			round = floor(lokGlobal);
			MySqlCommand1->CommandText = "SELECT * FROM lok WHERE `Looks` = " + round + "";
			result = MySqlCommand1->ExecuteReader();
			while (result->Read())
			{
				chaGlobal += System::Convert::ToDouble(result->GetValue(1)->ToString());
				hon += System::Convert::ToDouble(result->GetValue(2)->ToString());
			}
			 if(strflag == 1 && intflag == 1 && wisflag == 1 && dexflag == 1 && conflag == 1 && lookflag == 1 && chaflag == 1){
				 nextWindow->Enabled = true;
				 nextWindow->Text = "LEAD ME TO BATTLE!";
			 }
			 RollLok->Enabled = false;
			 RollLok->Text = "Rolled!";
		 }
private: System::Void RollCha_Click(System::Object^  sender, System::EventArgs^  e) {
			 chaGlobal += roll(3,6) + roll(1,100)/100.00;
			 rollt = floor(chaGlobal);
			 cha->Text = System::Convert::ToString(rollt);
			 rollt2 = (chaGlobal-floor(chaGlobal))*100;
			 chaper->Text = System::Convert::ToString(rollt2);
			 chaflag = 1;
			 //mysql connection stuff and Query
			MySqlConnection ^MySqlConnection1 = gcnew MySqlConnection("server=localhost;User Id=root;Persist Security Info=True;Password='consequence';database=hackmaster");
			MySqlConnection1->Open();
			MySqlCommand ^MySqlCommand1=gcnew MySqlCommand;
			MySqlDataReader ^result;
			MySqlCommand1->Connection=MySqlConnection1;
			round = floor(chaGlobal);
			MySqlCommand1->CommandText = "SELECT * FROM cha WHERE `Charisma` = " + round + "";
			result = MySqlCommand1->ExecuteReader();
			while (result->Read())
			{
				chaturnOut = System::Convert::ToDouble(result->GetValue(3)->ToString());
				chaturn->Text = System::Convert::ToString(chaturnOut);
				BP += System::Convert::ToDouble(result->GetValue(1)->ToString());
				hon += System::Convert::ToDouble(result->GetValue(2)->ToString());
			}
			result=nullptr;
			MySqlCommand1=nullptr;
			//end connection stuff
			 if(strflag == 1 && intflag == 1 && wisflag == 1 && dexflag == 1 && conflag == 1 && lookflag == 1 && chaflag == 1){
				 nextWindow->Enabled = true;
				 nextWindow->Text = "LEAD ME TO BATTLE!";
			 }
			 RollCha->Enabled = false;
			 RollCha->Text = "Rolled!";
		 }
private: System::Void dmgmod_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}


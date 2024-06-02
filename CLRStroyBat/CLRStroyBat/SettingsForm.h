#pragma once

namespace CLRStroyBat {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для SettingsForm
	/// </summary>
	public ref class SettingsForm : public System::Windows::Forms::Form
	{
	public:
		SettingsForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~SettingsForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::TabPage^ tabPage5;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::ColorDialog^ colorDialog1;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;







	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Label^ label5;





	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label8;

	private: System::Windows::Forms::TabPage^ tabPage6;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::RadioButton^ radioButton7;
	private: System::Windows::Forms::RadioButton^ radioButton6;
	private: System::Windows::Forms::RadioButton^ radioButton5;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;

	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::RadioButton^ radioButton10;
	private: System::Windows::Forms::RadioButton^ radioButton11;
	private: System::Windows::Forms::RadioButton^ radioButton9;
	private: System::Windows::Forms::RadioButton^ radioButton8;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox5;

	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::CheckBox^ checkBox6;
	private: System::Windows::Forms::CheckBox^ checkBox5;
	private: System::Windows::Forms::CheckBox^ checkBox4;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label17;
private: System::Windows::Forms::FontDialog^ fontDialog1;
private: System::Windows::Forms::Label^ label26;
private: System::Windows::Forms::Label^ label25;
private: System::Windows::Forms::Label^ label23;
private: System::Windows::Forms::TextBox^ textBox9;
private: System::Windows::Forms::TextBox^ textBox8;
private: System::Windows::Forms::TextBox^ textBox7;
private: System::Windows::Forms::Label^ label28;
private: System::Windows::Forms::Label^ label27;
private: System::Windows::Forms::Label^ label24;
private: System::Windows::Forms::Label^ label30;
private: System::Windows::Forms::TextBox^ textBox10;
private: System::Windows::Forms::Label^ label29;











	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton7 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton10 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton11 = (gcnew System::Windows::Forms::RadioButton());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton9 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton8 = (gcnew System::Windows::Forms::RadioButton());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->fontDialog1 = (gcnew System::Windows::Forms::FontDialog());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->tabPage6->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->tabPage5->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage6);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->tabPage5);
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tabControl1->Location = System::Drawing::Point(2, 1);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1005, 703);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->checkBox2);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->checkBox1);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Location = System::Drawing::Point(8, 43);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(989, 652);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Основное";
			this->tabPage1->UseVisualStyleBackColor = true;
			this->tabPage1->Click += gcnew System::EventHandler(this, &SettingsForm::tabPage1_Click);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Checked = true;
			this->checkBox2->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox2->Location = System::Drawing::Point(137, 357);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(790, 35);
			this->checkBox2->TabIndex = 3;
			this->checkBox2->Text = L"Заполнять кол-во работ/материалов при первонач. выборе\r\n";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(44, 308);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(883, 33);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Автоматическое заполнение сметы на основание \"Параметров\"";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Checked = true;
			this->checkBox1->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox1->Location = System::Drawing::Point(137, 179);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(383, 35);
			this->checkBox1->TabIndex = 1;
			this->checkBox1->Text = L"Запустить режим \"Сметы\" ";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(44, 129);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(335, 33);
			this->label1->TabIndex = 0;
			this->label1->Text = L"При старте программы:";
			this->label1->Click += gcnew System::EventHandler(this, &SettingsForm::label1_Click);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->groupBox2);
			this->tabPage2->Controls->Add(this->groupBox1);
			this->tabPage2->Controls->Add(this->textBox3);
			this->tabPage2->Controls->Add(this->textBox4);
			this->tabPage2->Controls->Add(this->textBox2);
			this->tabPage2->Controls->Add(this->textBox1);
			this->tabPage2->Controls->Add(this->label12);
			this->tabPage2->Controls->Add(this->label8);
			this->tabPage2->Controls->Add(this->label5);
			this->tabPage2->Controls->Add(this->label4);
			this->tabPage2->Controls->Add(this->label3);
			this->tabPage2->Location = System::Drawing::Point(8, 43);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(989, 652);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Работы, материалы";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->radioButton7);
			this->groupBox2->Controls->Add(this->radioButton6);
			this->groupBox2->Controls->Add(this->radioButton5);
			this->groupBox2->Location = System::Drawing::Point(479, 94);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(482, 173);
			this->groupBox2->TabIndex = 21;
			this->groupBox2->TabStop = false;
			// 
			// radioButton7
			// 
			this->radioButton7->AutoSize = true;
			this->radioButton7->Location = System::Drawing::Point(58, 109);
			this->radioButton7->Name = L"radioButton7";
			this->radioButton7->Size = System::Drawing::Size(340, 33);
			this->radioButton7->TabIndex = 13;
			this->radioButton7->Text = L"Задаётся пользователем";
			this->radioButton7->UseVisualStyleBackColor = true;
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->Location = System::Drawing::Point(58, 70);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(347, 33);
			this->radioButton6->TabIndex = 12;
			this->radioButton6->Text = L"Только по наименованию";
			this->radioButton6->UseVisualStyleBackColor = true;
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Checked = true;
			this->radioButton5->Location = System::Drawing::Point(58, 31);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(366, 33);
			this->radioButton5->TabIndex = 11;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"По группе и наименованию";
			this->radioButton5->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton4);
			this->groupBox1->Controls->Add(this->radioButton3);
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Location = System::Drawing::Point(96, 94);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(228, 196);
			this->groupBox1->TabIndex = 20;
			this->groupBox1->TabStop = false;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(50, 140);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(128, 33);
			this->radioButton4->TabIndex = 10;
			this->radioButton4->Text = L"999,999";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(50, 101);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(115, 33);
			this->radioButton3->TabIndex = 9;
			this->radioButton3->Text = L"999,99\r\n";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(50, 62);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(102, 33);
			this->radioButton2->TabIndex = 8;
			this->radioButton2->Text = L"999,9";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Location = System::Drawing::Point(50, 23);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(83, 33);
			this->radioButton1->TabIndex = 7;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"999";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(606, 496);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(216, 41);
			this->textBox3->TabIndex = 19;
			this->textBox3->Text = L"Стандарт";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(606, 449);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(216, 41);
			this->textBox4->TabIndex = 18;
			this->textBox4->Text = L"Себестоимость";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(253, 496);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(216, 41);
			this->textBox2->TabIndex = 17;
			this->textBox2->Text = L"Стандарт";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(253, 449);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(216, 41);
			this->textBox1->TabIndex = 16;
			this->textBox1->Text = L"Себестоимость";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &SettingsForm::textBox1_TextChanged);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(578, 384);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(283, 33);
			this->label12->TabIndex = 15;
			this->label12->Text = L"Материалы, товары";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(43, 449);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(129, 66);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Наимен.\r\n       цен\r\n";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(247, 384);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(222, 33);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Работы, услуги";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(531, 58);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(302, 33);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Сортировка перечня:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(71, 58);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(275, 33);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Шаблок количеств:\r\n";
			// 
			// tabPage6
			// 
			this->tabPage6->Controls->Add(this->groupBox4);
			this->tabPage6->Controls->Add(this->checkBox3);
			this->tabPage6->Controls->Add(this->label7);
			this->tabPage6->Controls->Add(this->label6);
			this->tabPage6->Controls->Add(this->groupBox3);
			this->tabPage6->Location = System::Drawing::Point(8, 43);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Size = System::Drawing::Size(989, 652);
			this->tabPage6->TabIndex = 5;
			this->tabPage6->Text = L"Справочники";
			this->tabPage6->UseVisualStyleBackColor = true;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->radioButton10);
			this->groupBox4->Controls->Add(this->radioButton11);
			this->groupBox4->Location = System::Drawing::Point(121, 330);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(774, 137);
			this->groupBox4->TabIndex = 6;
			this->groupBox4->TabStop = false;
			// 
			// radioButton10
			// 
			this->radioButton10->AutoSize = true;
			this->radioButton10->Location = System::Drawing::Point(50, 74);
			this->radioButton10->Name = L"radioButton10";
			this->radioButton10->Size = System::Drawing::Size(275, 33);
			this->radioButton10->TabIndex = 1;
			this->radioButton10->Text = L"Фильтрация списка";
			this->radioButton10->UseVisualStyleBackColor = true;
			// 
			// radioButton11
			// 
			this->radioButton11->AutoSize = true;
			this->radioButton11->Checked = true;
			this->radioButton11->Location = System::Drawing::Point(50, 34);
			this->radioButton11->Name = L"radioButton11";
			this->radioButton11->Size = System::Drawing::Size(459, 33);
			this->radioButton11->TabIndex = 0;
			this->radioButton11->TabStop = true;
			this->radioButton11->Text = L"Переход на первую запись в группе";
			this->radioButton11->UseVisualStyleBackColor = true;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Checked = true;
			this->checkBox3->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox3->Location = System::Drawing::Point(121, 519);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(682, 35);
			this->checkBox3->TabIndex = 5;
			this->checkBox3->Text = L"Раскрыть дерево групп при запуске справочников";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(115, 275);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(621, 33);
			this->label7->TabIndex = 4;
			this->label7->Text = L"Действия при выборе группы в дереве групп\r\n";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(115, 72);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(420, 33);
			this->label6->TabIndex = 3;
			this->label6->Text = L"Вид справочников с группами\r\n";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->radioButton9);
			this->groupBox3->Controls->Add(this->radioButton8);
			this->groupBox3->Location = System::Drawing::Point(121, 108);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(774, 137);
			this->groupBox3->TabIndex = 1;
			this->groupBox3->TabStop = false;
			// 
			// radioButton9
			// 
			this->radioButton9->AutoSize = true;
			this->radioButton9->Location = System::Drawing::Point(50, 74);
			this->radioButton9->Name = L"radioButton9";
			this->radioButton9->Size = System::Drawing::Size(595, 33);
			this->radioButton9->TabIndex = 1;
			this->radioButton9->Text = L"Список без групп и без сортировки по группам";
			this->radioButton9->UseVisualStyleBackColor = true;
			// 
			// radioButton8
			// 
			this->radioButton8->AutoSize = true;
			this->radioButton8->Checked = true;
			this->radioButton8->Location = System::Drawing::Point(50, 34);
			this->radioButton8->Name = L"radioButton8";
			this->radioButton8->Size = System::Drawing::Size(663, 33);
			this->radioButton8->TabIndex = 0;
			this->radioButton8->TabStop = true;
			this->radioButton8->Text = L"Список разбит на группы, группы включены в список\r\n";
			this->radioButton8->UseVisualStyleBackColor = true;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->label30);
			this->tabPage3->Controls->Add(this->textBox10);
			this->tabPage3->Controls->Add(this->label29);
			this->tabPage3->Controls->Add(this->label15);
			this->tabPage3->Controls->Add(this->label14);
			this->tabPage3->Controls->Add(this->comboBox1);
			this->tabPage3->Controls->Add(this->textBox6);
			this->tabPage3->Controls->Add(this->textBox5);
			this->tabPage3->Controls->Add(this->label13);
			this->tabPage3->Controls->Add(this->label11);
			this->tabPage3->Controls->Add(this->label10);
			this->tabPage3->Controls->Add(this->label9);
			this->tabPage3->Location = System::Drawing::Point(8, 43);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(989, 652);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Умолчанию";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(775, 295);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(33, 29);
			this->label30->TabIndex = 19;
			this->label30->Text = L"р.";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(669, 289);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(100, 35);
			this->textBox10->TabIndex = 18;
			this->textBox10->Text = L"3";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label29->Location = System::Drawing::Point(449, 289);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(196, 31);
			this->label29->TabIndex = 17;
			this->label29->Text = L"Курс доллара:";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(775, 245);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(48, 29);
			this->label15->TabIndex = 16;
			this->label15->Text = L"дн.";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(775, 193);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(35, 29);
			this->label14->TabIndex = 15;
			this->label14->Text = L"%\r\n";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Открытые", L"В работе", L"Закрытые" });
			this->comboBox1->Location = System::Drawing::Point(580, 504);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(160, 37);
			this->comboBox1->TabIndex = 14;
			this->comboBox1->Text = L"Все";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(669, 239);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 35);
			this->textBox6->TabIndex = 10;
			this->textBox6->Text = L"100";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(669, 190);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 35);
			this->textBox5->TabIndex = 9;
			this->textBox5->Text = L"20";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->Location = System::Drawing::Point(200, 504);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(374, 132);
			this->label13->TabIndex = 7;
			this->label13->Text = L"Фильтр в режиме \"Сметы\"\r\n\r\n\r\n\r\n";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(208, 239);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(437, 33);
			this->label11->TabIndex = 6;
			this->label11->Text = L"Интервал списков документов:\r\n";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(118, 190);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(534, 33);
			this->label10->TabIndex = 5;
			this->label10->Text = L"НДС при создании работ/материалов:\r\n";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(97, 119);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(366, 33);
			this->label9->TabIndex = 4;
			this->label9->Text = L"Значение \"по умолчанию\"\r\n";
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->checkBox6);
			this->tabPage4->Controls->Add(this->checkBox5);
			this->tabPage4->Controls->Add(this->checkBox4);
			this->tabPage4->Controls->Add(this->label16);
			this->tabPage4->Location = System::Drawing::Point(8, 43);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Size = System::Drawing::Size(989, 652);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Печать";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// checkBox6
			// 
			this->checkBox6->AutoSize = true;
			this->checkBox6->Checked = true;
			this->checkBox6->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox6->Location = System::Drawing::Point(258, 322);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->Size = System::Drawing::Size(365, 33);
			this->checkBox6->TabIndex = 8;
			this->checkBox6->Text = L"Окно настройки принтеров";
			this->checkBox6->UseVisualStyleBackColor = true;
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->Checked = true;
			this->checkBox5->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox5->Location = System::Drawing::Point(258, 283);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(128, 33);
			this->checkBox5->TabIndex = 7;
			this->checkBox5->Text = L"Печать";
			this->checkBox5->UseVisualStyleBackColor = true;
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Checked = true;
			this->checkBox4->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox4->Location = System::Drawing::Point(258, 244);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(379, 33);
			this->checkBox4->TabIndex = 6;
			this->checkBox4->Text = L"Предварительный просмотр\r\n";
			this->checkBox4->UseVisualStyleBackColor = true;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label16->Location = System::Drawing::Point(181, 150);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(468, 66);
			this->label16->TabIndex = 5;
			this->label16->Text = L"Действие при печати документов\r\n\r\n";
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->label28);
			this->tabPage5->Controls->Add(this->label27);
			this->tabPage5->Controls->Add(this->label24);
			this->tabPage5->Controls->Add(this->label26);
			this->tabPage5->Controls->Add(this->label25);
			this->tabPage5->Controls->Add(this->label23);
			this->tabPage5->Controls->Add(this->textBox9);
			this->tabPage5->Controls->Add(this->textBox8);
			this->tabPage5->Controls->Add(this->textBox7);
			this->tabPage5->Controls->Add(this->label22);
			this->tabPage5->Controls->Add(this->label21);
			this->tabPage5->Controls->Add(this->label20);
			this->tabPage5->Controls->Add(this->label19);
			this->tabPage5->Controls->Add(this->label18);
			this->tabPage5->Controls->Add(this->label17);
			this->tabPage5->Location = System::Drawing::Point(8, 43);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Size = System::Drawing::Size(989, 652);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"Шрифты";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(347, 408);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(92, 29);
			this->label28->TabIndex = 20;
			this->label28->Text = L"label28";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(347, 360);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(92, 29);
			this->label27->TabIndex = 19;
			this->label27->Text = L"label27";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(347, 317);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(92, 29);
			this->label24->TabIndex = 18;
			this->label24->Text = L"label24";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label26->Location = System::Drawing::Point(720, 408);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(46, 33);
			this->label26->TabIndex = 17;
			this->label26->Text = L"px";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label25->Location = System::Drawing::Point(720, 360);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(46, 33);
			this->label25->TabIndex = 16;
			this->label25->Text = L"px";
			this->label25->Click += gcnew System::EventHandler(this, &SettingsForm::label25_Click);
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label23->Location = System::Drawing::Point(720, 306);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(46, 33);
			this->label23->TabIndex = 15;
			this->label23->Text = L"px";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(673, 405);
			this->textBox9->Multiline = true;
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(41, 40);
			this->textBox9->TabIndex = 14;
			this->textBox9->Text = L"26";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(673, 357);
			this->textBox8->Multiline = true;
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(41, 40);
			this->textBox8->TabIndex = 13;
			this->textBox8->Text = L"26";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(673, 306);
			this->textBox7->Multiline = true;
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(41, 40);
			this->textBox7->TabIndex = 12;
			this->textBox7->Text = L"26";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label22->Location = System::Drawing::Point(127, 404);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(170, 33);
			this->label22->TabIndex = 11;
			this->label22->Text = L"Документы\r\n";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label21->Location = System::Drawing::Point(15, 356);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(282, 33);
			this->label21->TabIndex = 10;
			this->label21->Text = L"Списки документов\r\n";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label20->Location = System::Drawing::Point(104, 313);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(193, 33);
			this->label20->TabIndex = 9;
			this->label20->Text = L"Справочники\r\n";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label19->Location = System::Drawing::Point(667, 215);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(214, 33);
			this->label19->TabIndex = 8;
			this->label19->Text = L"Высота строки\r\n";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label18->Location = System::Drawing::Point(341, 241);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(109, 33);
			this->label18->TabIndex = 7;
			this->label18->Text = L"Шрифт\r\n";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label17->Location = System::Drawing::Point(247, 91);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(489, 66);
			this->label17->TabIndex = 6;
			this->label17->Text = L"Настройки внешнего вида списков\r\n (услуг, деталей, документов и тд.)\r\n";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(10, 739);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(139, 55);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Фон";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &SettingsForm::button1_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(706, 739);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(139, 55);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Ок";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &SettingsForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(860, 739);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(139, 55);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Отмена";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &SettingsForm::button4_Click);
			// 
			// fontDialog1
			// 
			this->fontDialog1->Apply += gcnew System::EventHandler(this, &SettingsForm::fontDialog1_Apply);
			// 
			// SettingsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1006, 831);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->tabControl1);
			this->Name = L"SettingsForm";
			this->Text = L"SettingsForm";
			this->Load += gcnew System::EventHandler(this, &SettingsForm::SettingsForm_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->tabPage6->ResumeLayout(false);
			this->tabPage6->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			this->tabPage5->ResumeLayout(false);
			this->tabPage5->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void SettingsForm_Load(System::Object^ sender, System::EventArgs^ e) {
		this->Text = "Настройки рабочего места";
	}
	private: System::Void tabPage1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::DialogResult eva = colorDialog1->ShowDialog();
	if (eva == System::Windows::Forms::DialogResult::OK) {
		this->BackColor = colorDialog1->Color;
	}

}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void radioButton3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void splitContainer1_Panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	this->Text = "Себестоимость";

}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void groupBox4_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void fontDialog1_Apply(System::Object^ sender, System::EventArgs^ e) {
	//fontDialog1.ShowColor = true;

	//fontDialog1.Font = textBox1.Font;
	//fontDialog1.Color = textBox1.ForeColor;

	//if (fontDialog1.ShowDialog() != DialogResult.Cancel)
	//{
	//	textBox1.Font = fontDialog1.Font;
	//	textBox1.ForeColor = fontDialog1.Color;
	//}
}
private: System::Void label25_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
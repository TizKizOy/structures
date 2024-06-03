#pragma once
#include "AddWorkForm.h"
#include "AddMaterialForm.h"
#include "Database.h"
#include "Delegat.h"

namespace CLRStroyBat {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для ADDForm
	/// </summary>
	public ref class ADDForm : public System::Windows::Forms::Form
	{

	public:
		ADDForm(returnTextBoxData^ sender, String^ id, array<String^>^ data, array<String^>^ dataNum)
		{
			deleg = sender;
			dataId = id;
			arrayId = data;
			dataNumId = dataNum;
			// Здесь должен быть код для загрузки данных из базы данных и заполнения формы !!!!!!!!!
			InitializeComponent();
			DataFromDatabaseTextBoxs();
			DataFromDatabaseWorks();
			DataFromDatabaseMaterials();
			textBox9->ReadOnly = true;
		}

	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ удалитьСтрокуToolStripMenuItem;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column16;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;








		   String^ dataId;
	public:
		ADDForm(String^ id, array<String^>^ data, array<String^>^ dataNum) {
			dataId = id;
			arrayId = data;
			dataNumId = dataNum;
			// Здесь должен быть код для загрузки данных из базы данных и заполнения формы !!!!!!!!!
			InitializeComponent();
			DataFromDatabaseTextBoxs();
			DataFromDatabaseWorks();
			DataFromDatabaseMaterials();
		}

	public:













	public:
		ADDForm(returnTextBoxData^ sender, array<String^>^ data, array<String^>^ dataNum)
		{
			this->InitializeComponent();
			deleg = sender;
			arrayStr = data;
			dataNumId = dataNum;
		};

	private:array<String^>^ arrayId;
	private:array<String^>^ dataNumId;
	private:returnTextBoxData^ deleg;
	private:changeTextBoxData^ changedelog;
	private:array<String^>^ arrayStr;
	public:
		ADDForm(void)
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
		~ADDForm()
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
	private: System::Windows::Forms::TreeView^ treeView1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::DataGridView^ dataGridView3;
	private: System::Windows::Forms::Button^ button2;

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label12;




	private: System::Windows::Forms::MonthCalendar^ monthCalendar1;
	private: System::Windows::Forms::GroupBox^ groupBox1;



	private: System::Windows::Forms::DataGridView^ dataGridView1;




	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label13;
	private: System::ComponentModel::IContainer^ components;


	protected:


	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::Windows::Forms::TreeNode^ treeNode1 = (gcnew System::Windows::Forms::TreeNode(L"Раздел 1"));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->treeView1 = (gcnew System::Windows::Forms::TreeView());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->удалитьСтрокуToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column16 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->contextMenuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->ItemSize = System::Drawing::Size(210, 31);
			this->tabControl1->Location = System::Drawing::Point(358, 14);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1601, 839);
			this->tabControl1->TabIndex = 2;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->textBox8);
			this->tabPage1->Controls->Add(this->label8);
			this->tabPage1->Controls->Add(this->textBox7);
			this->tabPage1->Controls->Add(this->label7);
			this->tabPage1->Controls->Add(this->textBox6);
			this->tabPage1->Controls->Add(this->label6);
			this->tabPage1->Controls->Add(this->textBox5);
			this->tabPage1->Controls->Add(this->textBox4);
			this->tabPage1->Controls->Add(this->textBox3);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->textBox2);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Location = System::Drawing::Point(8, 39);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1585, 792);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Основное";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(209, 564);
			this->textBox8->Multiline = true;
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(1363, 118);
			this->textBox8->TabIndex = 15;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(24, 567);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(166, 25);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Рекомендации:";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(209, 515);
			this->textBox7->Multiline = true;
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(1363, 31);
			this->textBox7->TabIndex = 13;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(28, 518);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(156, 25);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Комментарии:";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(209, 463);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(1363, 31);
			this->textBox6->TabIndex = 11;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(61, 466);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(123, 25);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Доп. инфо:";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(1308, 320);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(164, 31);
			this->textBox5->TabIndex = 9;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(1308, 275);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(164, 31);
			this->textBox4->TabIndex = 8;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(1308, 232);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(164, 31);
			this->textBox3->TabIndex = 7;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(1088, 275);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(182, 25);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Окончание план:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(1114, 323);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(144, 25);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Конец работ:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(1114, 235);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(156, 25);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Начало работ:";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(674, 119);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(898, 39);
			this->textBox2->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(594, 122);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(55, 25);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Тел:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(392, 62);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(1180, 39);
			this->textBox1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(44, 62);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(327, 29);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Полное название клиента:\r\n";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->dataGridView1);
			this->tabPage2->Controls->Add(this->treeView1);
			this->tabPage2->Controls->Add(this->button3);
			this->tabPage2->Controls->Add(this->dataGridView3);
			this->tabPage2->Controls->Add(this->button2);
			this->tabPage2->Location = System::Drawing::Point(8, 39);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1585, 792);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Работы/Материалы";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->dataGridViewTextBoxColumn2,
					this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn4, this->dataGridViewTextBoxColumn5, this->dataGridViewTextBoxColumn6,
					this->dataGridViewTextBoxColumn7, this->dataGridViewTextBoxColumn8, this->Column1
			});
			this->dataGridView1->Location = System::Drawing::Point(263, 18);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 82;
			this->dataGridView1->RowTemplate->Height = 33;
			this->dataGridView1->Size = System::Drawing::Size(1189, 314);
			this->dataGridView1->TabIndex = 7;
			this->dataGridView1->CellMouseUp += gcnew System::Windows::Forms::DataGridViewCellMouseEventHandler(this, &ADDForm::dataGridView1_CellMouseUp);
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"Наименование";
			this->dataGridViewTextBoxColumn2->MinimumWidth = 10;
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->ReadOnly = true;
			this->dataGridViewTextBoxColumn2->Width = 200;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"Артикул";
			this->dataGridViewTextBoxColumn3->MinimumWidth = 10;
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->ReadOnly = true;
			this->dataGridViewTextBoxColumn3->Width = 200;
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->HeaderText = L"Цена руб.";
			this->dataGridViewTextBoxColumn4->MinimumWidth = 10;
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			this->dataGridViewTextBoxColumn4->ReadOnly = true;
			this->dataGridViewTextBoxColumn4->Width = 200;
			// 
			// dataGridViewTextBoxColumn5
			// 
			this->dataGridViewTextBoxColumn5->HeaderText = L"Тип";
			this->dataGridViewTextBoxColumn5->MinimumWidth = 10;
			this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			this->dataGridViewTextBoxColumn5->ReadOnly = true;
			this->dataGridViewTextBoxColumn5->Width = 200;
			// 
			// dataGridViewTextBoxColumn6
			// 
			this->dataGridViewTextBoxColumn6->HeaderText = L"Ед.изм.";
			this->dataGridViewTextBoxColumn6->MinimumWidth = 10;
			this->dataGridViewTextBoxColumn6->Name = L"dataGridViewTextBoxColumn6";
			this->dataGridViewTextBoxColumn6->ReadOnly = true;
			this->dataGridViewTextBoxColumn6->Width = 200;
			// 
			// dataGridViewTextBoxColumn7
			// 
			this->dataGridViewTextBoxColumn7->HeaderText = L"Страна";
			this->dataGridViewTextBoxColumn7->MinimumWidth = 10;
			this->dataGridViewTextBoxColumn7->Name = L"dataGridViewTextBoxColumn7";
			this->dataGridViewTextBoxColumn7->ReadOnly = true;
			this->dataGridViewTextBoxColumn7->Width = 200;
			// 
			// dataGridViewTextBoxColumn8
			// 
			this->dataGridViewTextBoxColumn8->HeaderText = L"Цена $";
			this->dataGridViewTextBoxColumn8->MinimumWidth = 10;
			this->dataGridViewTextBoxColumn8->Name = L"dataGridViewTextBoxColumn8";
			this->dataGridViewTextBoxColumn8->ReadOnly = true;
			this->dataGridViewTextBoxColumn8->Width = 200;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Количество";
			this->Column1->MinimumWidth = 10;
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Width = 200;
			// 
			// treeView1
			// 
			this->treeView1->Location = System::Drawing::Point(15, 18);
			this->treeView1->Name = L"treeView1";
			treeNode1->Name = L"Узел0";
			treeNode1->Text = L"Раздел 1";
			this->treeView1->Nodes->AddRange(gcnew cli::array< System::Windows::Forms::TreeNode^  >(1) { treeNode1 });
			this->treeView1->Size = System::Drawing::Size(227, 314);
			this->treeView1->TabIndex = 6;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(1458, 509);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(121, 74);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Мате-\r\nриалы";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &ADDForm::button3_Click);
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->Column2,
					this->Column3, this->Column4, this->Column6, this->Column7, this->Column16, this->Column5, this->Column8
			});
			this->dataGridView3->Location = System::Drawing::Point(251, 415);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->ReadOnly = true;
			this->dataGridView3->RowHeadersWidth = 60;
			this->dataGridView3->RowTemplate->Height = 33;
			this->dataGridView3->Size = System::Drawing::Size(1189, 314);
			this->dataGridView3->TabIndex = 4;
			this->dataGridView3->CellMouseUp += gcnew System::Windows::Forms::DataGridViewCellMouseEventHandler(this, &ADDForm::dataGridView3_CellMouseUp);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(1458, 121);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(121, 58);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Работы";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &ADDForm::button2_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->ForeColor = System::Drawing::SystemColors::Highlight;
			this->label9->Location = System::Drawing::Point(1193, 876);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(24, 25);
			this->label9->TabIndex = 27;
			this->label9->Text = L"0";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->label10->Location = System::Drawing::Point(1205, 875);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(0, 26);
			this->label10->TabIndex = 26;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->label11->Location = System::Drawing::Point(1062, 874);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(76, 26);
			this->label11->TabIndex = 25;
			this->label11->Text = L"Всего:";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(1502, 862);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(157, 53);
			this->button4->TabIndex = 28;
			this->button4->Text = L"Оформить";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &ADDForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(1820, 862);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(131, 53);
			this->button5->TabIndex = 29;
			this->button5->Text = L"Отмена";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &ADDForm::button5_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->label12->Location = System::Drawing::Point(1273, 874);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(54, 26);
			this->label12->TabIndex = 30;
			this->label12->Text = L"руб.";
			// 
			// monthCalendar1
			// 
			this->monthCalendar1->Location = System::Drawing::Point(18, 357);
			this->monthCalendar1->Name = L"monthCalendar1";
			this->monthCalendar1->TabIndex = 32;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label13);
			this->groupBox1->Controls->Add(this->textBox9);
			this->groupBox1->Controls->Add(this->textBox10);
			this->groupBox1->Controls->Add(this->label15);
			this->groupBox1->Controls->Add(this->label14);
			this->groupBox1->Location = System::Drawing::Point(30, 14);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(299, 314);
			this->groupBox1->TabIndex = 34;
			this->groupBox1->TabStop = false;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->Location = System::Drawing::Point(87, 57);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(102, 33);
			this->label13->TabIndex = 38;
			this->label13->Text = L"Смета";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(93, 127);
			this->textBox9->Multiline = true;
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(121, 41);
			this->textBox9->TabIndex = 37;
			this->textBox9->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &ADDForm::textBox9_KeyPress);
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(93, 182);
			this->textBox10->Multiline = true;
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(121, 41);
			this->textBox10->TabIndex = 36;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(53, 182);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(34, 25);
			this->label15->TabIndex = 35;
			this->label15->Text = L"от";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(53, 130);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(33, 25);
			this->label14->TabIndex = 34;
			this->label14->Text = L"№";
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(32, 32);
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->удалитьСтрокуToolStripMenuItem });
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(257, 42);
			// 
			// удалитьСтрокуToolStripMenuItem
			// 
			this->удалитьСтрокуToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->удалитьСтрокуToolStripMenuItem->Name = L"удалитьСтрокуToolStripMenuItem";
			this->удалитьСтрокуToolStripMenuItem->Size = System::Drawing::Size(256, 38);
			this->удалитьСтрокуToolStripMenuItem->Text = L"Удалить строку";
			this->удалитьСтрокуToolStripMenuItem->Click += gcnew System::EventHandler(this, &ADDForm::удалитьСтрокуToolStripMenuItem_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(366, 860);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(147, 53);
			this->button7->TabIndex = 35;
			this->button7->Text = L"Печать";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &ADDForm::button7_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(1674, 862);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(131, 53);
			this->button1->TabIndex = 36;
			this->button1->Text = L"Изменить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ADDForm::button1_Click);
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Наименование";
			this->Column2->MinimumWidth = 10;
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			this->Column2->Width = 200;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Артикул";
			this->Column3->MinimumWidth = 10;
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			this->Column3->Width = 200;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Цена руб.";
			this->Column4->MinimumWidth = 10;
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			this->Column4->Width = 200;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Ед.изм.";
			this->Column6->MinimumWidth = 10;
			this->Column6->Name = L"Column6";
			this->Column6->ReadOnly = true;
			this->Column6->Width = 200;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"Страна";
			this->Column7->MinimumWidth = 10;
			this->Column7->Name = L"Column7";
			this->Column7->ReadOnly = true;
			this->Column7->Width = 200;
			// 
			// Column16
			// 
			this->Column16->HeaderText = L"Цена $";
			this->Column16->MinimumWidth = 10;
			this->Column16->Name = L"Column16";
			this->Column16->ReadOnly = true;
			this->Column16->Width = 200;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Бренд";
			this->Column5->MinimumWidth = 10;
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			this->Column5->Width = 200;
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"Количество";
			this->Column8->MinimumWidth = 10;
			this->Column8->Name = L"Column8";
			this->Column8->ReadOnly = true;
			this->Column8->Width = 200;
			// 
			// ADDForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(2036, 944);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->monthCalendar1);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->tabControl1);
			this->Name = L"ADDForm";
			this->Text = L"ADDForm";
			this->Load += gcnew System::EventHandler(this, &ADDForm::ADDForm_Load);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &ADDForm::ADDForm_MouseUp);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->contextMenuStrip1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		int countW = 0;
		int countM = 0;
		Database^ db = gcnew Database();

	private: void СonfirmationOfTheDeleteDataGrid1()
	{
		auto result = MessageBox::Show(
			"Вы действительно хотите удалить выбранный фрагмент?",
			"Подтвердите удаление",
			MessageBoxButtons::YesNo,
			MessageBoxIcon::Question);
		if (result == System::Windows::Forms::DialogResult::Yes) {
			dataGridView1->Rows->RemoveAt(dataGridView1->CurrentRow->Index);
			dataGridView1->Refresh();
			SumAndDisplayCosts();
		}
	}
	private: void СonfirmationOfTheDeleteDataGrid3()
	{
		auto result = MessageBox::Show(
			"Вы действительно хотите удалить выбранный фрагмент?",
			"Подтвердите удаление",
			MessageBoxButtons::YesNo,
			MessageBoxIcon::Question);
		if (result == System::Windows::Forms::DialogResult::Yes) {
			dataGridView3->Rows->RemoveAt(dataGridView3->CurrentRow->Index);
			dataGridView3->Refresh();
			SumAndDisplayCosts();
		}
	}
	private: void ShowCMS(System::Windows::Forms::MouseEventArgs^ e) {
		if (e->Button == System::Windows::Forms::MouseButtons::Right) {
			contextMenuStrip1->Show(
				this->MousePosition);
		}
	}

	public:void SumAndDisplayCosts() {
		double total = 0.0;

		int columnIndexPrice = 2; // Индекс столбца 'цена'
		int columnIndexQuantity = 7; // Индекс столбца 'количество'


		// Проходим по всем строкам DataGridView
		for each (DataGridViewRow ^ row in dataGridView1->Rows)
		{
			// Извлекаем значения из ячеек
			double price = Convert::ToDouble(row->Cells[columnIndexPrice]->Value);
			double quantity = Convert::ToDouble(row->Cells[columnIndexQuantity]->Value);

			// Перемножаем и добавляем к общей сумме
			total += price * quantity;
		}


		int columnIndexPrice2 = 2; // Индекс столбца 'цена'
		int columnIndexQuantity2 = 7; // Индекс столбца 'количество'


		// Проходим по всем строкам DataGridView
		for each (DataGridViewRow ^ row in dataGridView3->Rows)
		{
			// Извлекаем значения из ячеек
			double price = Convert::ToDouble(row->Cells[columnIndexPrice2]->Value);
			double quantity = Convert::ToDouble(row->Cells[columnIndexQuantity2]->Value);

			// Перемножаем и добавляем к общей сумме
			total += price * quantity;
		}

		// Отображение общей стоимости в Label
		label9->Text = total.ToString();
	}


		  // Метод для загрузки данных из базы данных и заполнения формы
	public: void DataFromDatabaseTextBoxs() {
		SqlConnection^ Con = gcnew SqlConnection("Data Source=TIZKIZOY\\SQLEXPRESS;Initial Catalog=Plitka;Integrated Security=True;Connect Timeout=30;Encrypt=True;TrustServerCertificate=True;ApplicationIntent=ReadWrite;MultiSubnetFailover=False");
		try {
			Con->Open();
			String^ query = "SELECT * FROM SaveTextBoxs WHERE [idusd] = @dataId";
			SqlCommand^ command = gcnew SqlCommand(query, Con);
			command->Parameters->AddWithValue("@dataId", dataId);

			SqlDataReader^ reader = command->ExecuteReader();
			while (reader->Read()) {
				textBox9->Text = reader["data1"]->ToString();
				textBox10->Text = reader["data2"]->ToString();
				textBox1->Text = reader["data3"]->ToString();
				textBox2->Text = reader["data4"]->ToString();
				textBox3->Text = reader["data5"]->ToString();
				textBox4->Text = reader["data6"]->ToString();
				textBox5->Text = reader["data7"]->ToString();
				textBox6->Text = reader["data8"]->ToString();
				textBox7->Text = reader["data9"]->ToString();
				textBox8->Text = reader["data10"]->ToString();

			}
		}
		catch (SqlException^ ex) { // Обрабатывайте конкретные исключения
			MessageBox::Show("Ошибка базы данных: " + ex->Message);
		}
		catch (Exception^ ex) {
			MessageBox::Show("Общая ошибка: " + ex->Message);
		}
		finally {
			Con->Close();
		}
	}

	public:  void DataFromDatabaseWorks()
	{
		SqlConnection^ Con = gcnew SqlConnection("Data Source=TIZKIZOY\\SQLEXPRESS;Initial Catalog=Plitka;Integrated Security=True;Connect Timeout=30;Encrypt=True;TrustServerCertificate=True;ApplicationIntent=ReadWrite;MultiSubnetFailover=False");
		try {
			Con->Open();
			// SQL запрос для получения данных
			String^ query = "SELECT * FROM SaveTableWork WHERE idusdt = @dataId";
			SqlCommand^ command = gcnew SqlCommand(query, Con);
			command->Parameters->AddWithValue("@dataId", dataId);

			// Выполнение запроса и получение данных
			SqlDataReader^ reader = command->ExecuteReader();

			// Очистка существующих данных в DataGridView
			dataGridView1->Rows->Clear();

			// Чтение данных из SqlDataReader и заполнение DataGridView
			while (reader->Read()) {
				array<Object^>^ row = gcnew array<Object^> {
					reader["Наименование"]->ToString(),
						reader["Артикул"]->ToString(),
						reader["Цена руб."]->ToString(),
						reader["Тип"]->ToString(),
						reader["Ед.изм."]->ToString(),
						reader["Страна"]->ToString(),
						reader["Цена $"]->ToString(),
						reader["Количество"]->ToString(),
				};
				dataGridView1->Rows->Add(row);
			}
			reader->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
		finally {
			// Закрытие соединения с базой данных, если оно было открыто
			if (Con->State == ConnectionState::Open) {
				Con->Close();
			}
		}
	}

	public:  void DataFromDatabaseMaterials()
	{
		SqlConnection^ Con = gcnew SqlConnection("Data Source=TIZKIZOY\\SQLEXPRESS;Initial Catalog=Plitka;Integrated Security=True;Connect Timeout=30;Encrypt=True;TrustServerCertificate=True;ApplicationIntent=ReadWrite;MultiSubnetFailover=False");
		try {
			Con->Open();
			// SQL запрос для получения данных
			String^ query = "SELECT * FROM SaveTableMaterial WHERE idusd = @dataId";
			SqlCommand^ command = gcnew SqlCommand(query, Con);
			command->Parameters->AddWithValue("@dataId", dataId);

			// Выполнение запроса и получение данных
			SqlDataReader^ reader = command->ExecuteReader();

			// Очистка существующих данных в DataGridView
			dataGridView3->Rows->Clear();

			// Чтение данных из SqlDataReader и заполнение DataGridView
			while (reader->Read()) {
				array<Object^>^ row = gcnew array<Object^> {
					reader["Наименование"]->ToString(),
						reader["Артикул"]->ToString(),
						reader["Цена руб."]->ToString(),
						reader["Ед.изм."]->ToString(),
						reader["Страна"]->ToString(),
						reader["Цена $"]->ToString(),
						reader["Бренд"]->ToString(),
						reader["Количество"]->ToString(),
				};
				dataGridView3->Rows->Add(row);
			}
			reader->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
		finally {
			// Закрытие соединения с базой данных, если оно было открыто
			if (Con->State == ConnectionState::Open) {
				Con->Close();
			}
		}
	}

	public: void GetDataWork(DataGridViewRow^ returnedRow,String^ dataNum)
	{
		bool FoundRow = true;
		array<String^>^ columnData = gcnew array<String^>(dataGridView1->Rows->Count - 1);
		String^ str = returnedRow->Cells[1]->Value->ToString();
		// Извлекаем данные из столбца
		for (int i = 0; i < dataGridView1->Rows->Count; ++i) {
			if (dataGridView1->Rows[i]->IsNewRow) continue; // Пропускаем строку для нового ввода
			columnData[i] = dataGridView1->Rows[i]->Cells[1]->Value->ToString();
			if (columnData[i]->Trim() == str->Trim())
			{
				FoundRow = false;
			}
		}

		if (FoundRow)
		{
			dataGridView1->Rows->Add(returnedRow->Cells[0]->Value, returnedRow->Cells[1]->Value, returnedRow->Cells[2]->Value, returnedRow->Cells[3]->Value,
				returnedRow->Cells[4]->Value, returnedRow->Cells[5]->Value, returnedRow->Cells[6]->Value, dataNum);
		}
		else
		{
			MessageBox::Show("Эта позиция уже добавлена");
		}
		SumAndDisplayCosts();
	}
	public: void GetDataMaterial(DataGridViewRow^ returnedRow, String^ dataNum)
	{
		bool FoundRow = true;
		array<String^>^ columnData = gcnew array<String^>(dataGridView3->Rows->Count - 1);
		String^ str = returnedRow->Cells[1]->Value->ToString();
		// Извлекаем данные из столбца
		for (int i = 0; i < dataGridView3->Rows->Count; ++i) {
			if (dataGridView3->Rows[i]->IsNewRow) continue; // Пропускаем строку для нового ввода
			columnData[i] = dataGridView3->Rows[i]->Cells[1]->Value->ToString();
			if (columnData[i]->Trim() == str->Trim())
			{
				FoundRow = false;
			}
		}
		if (FoundRow)
		{
			dataGridView3->Rows->Add(returnedRow->Cells[0]->Value, returnedRow->Cells[1]->Value, returnedRow->Cells[2]->Value, returnedRow->Cells[3]->Value,
				returnedRow->Cells[4]->Value, returnedRow->Cells[5]->Value, returnedRow->Cells[6]->Value, dataNum);
		}
		else
		{
			MessageBox::Show("Эта позиция уже добавлена");
		}
		SumAndDisplayCosts();
	}

	private: System::Void ADDForm_Load(System::Object^ sender, System::EventArgs^ e) {
		this->Text = "Новый документ";
		ADDForm::Width = 1000; //Установка пользовательского размера формы
		ADDForm::Height = 530;
		SumAndDisplayCosts();
		dataGridView3->AutoResizeColumns();//автоподбор ширины
		dataGridView3->RowHeadersWidth = 5; // уменьшение крайнего левого столбца по ширине
		dataGridView3->AutoResizeColumnHeadersHeight();
		dataGridView1->AutoResizeColumns();//автоподбор ширины
		dataGridView1->RowHeadersWidth = 5; // уменьшение крайнего левого столбца по ширине
		textBox1->MaxLength = 30;
		textBox2->MaxLength = 20;
		textBox3->MaxLength = 15;
		textBox4->MaxLength = 15;
		textBox5->MaxLength = 15;
		textBox6->MaxLength = 200;
		textBox7->MaxLength = 200;
		textBox8->MaxLength = 500;
		textBox9->MaxLength = 15;
		textBox10->MaxLength = 15;
	}

	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		AddWorkForm^ f2 = gcnew AddWorkForm(gcnew returnMaterialData(this, &ADDForm::GetDataWork));
		f2->ShowDialog();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

		AddMaterialForm^ f = gcnew AddMaterialForm(gcnew returnMaterialData(this, &ADDForm::GetDataMaterial));
		f->ShowDialog();
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!String::IsNullOrWhiteSpace(textBox9->Text))
		{
			String^ textBoxValue = textBox9->Text;
			bool matchFound = true;

			for (int i = 0; i < dataNumId->Length; i++) {
				if (dataNumId[i]->Trim() == textBoxValue->Trim()) {
					matchFound = false;
					break;
				}
			}

			if (matchFound)
			{
				try {
					db->openConnection();
					db->InsertIntoSaveWork(dataGridView1, textBox9);
					db->InsertIntoSaveMaterials(dataGridView3, textBox9);

					String^ data1 = textBox9->Text;//Номер сметы
					String^ data2 = textBox10->Text;//Дата
					String^ data3 = textBox1->Text;//наименование
					String^ data4 = textBox2->Text;//тел
					String^ data5 = textBox3->Text;//начало работ
					String^ data6 = textBox4->Text;//окончание план
					String^ data7 = textBox5->Text;//окончание работ
					String^ data8 = textBox6->Text;//Доп инфа
					String^ data9 = textBox7->Text;//Комм
					String^ data10 = textBox8->Text;//Рекомендации
					double total1 = Convert::ToDouble(label9->Text);
					db->InsertIntoSaveTextBox(data1, data2, data3, data4, data5, data6, data7, data8, data9, data10, textBox9);

					deleg(data1, data2, data3, data4, data5, data6, data7, data8, data9, data10, total1);

					db->closeConnection();
					MessageBox::Show("Успешно добавлен");
					this->Hide();
				}
				catch (Exception^ ex) {
					MessageBox::Show(ex->Message);
				}
			}
			else
			{
				MessageBox::Show("Вы уже добавили смету с таким номером.\n Если хотите добавить изменения выберите кпоку изменить.");
			}
		}
		else
		{
			MessageBox::Show("Введите номер сметы чтобы оформить её.");
		}
	}

	public: System::Void textBox9_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {

		// Проверяем нажатую клавишу
		Char keyPressed = e->KeyChar;
		String^ textBoxValue = textBox9->Text;

		// Проверяем, является ли символ числом или управляющим символом (например, Backspace)
		if (!Char::IsDigit(keyPressed) && keyPressed != 0x08)
		{
			e->Handled = true; // Отменяем ввод символа
			MessageBox::Show("Введите целое число.");
		}
		else
		{
			// Строим предполагаемое число с учётом нового символа
			String^ expectedNum = textBoxValue + Convert::ToString(keyPressed);

			// Проверяем, содержится ли уже введенное число в массиве строк
			bool numExists = false;
			for each (String ^ str in dataNumId)
			{//Trim() - убирает лишние пробелы для корректного сравнивания!
				if (str->Trim() == expectedNum->Trim())
				{
					numExists = true;
					break;
				}
			}

			if (numExists)
			{
				e->Handled = true; // Отменяем ввод символа
				MessageBox::Show("Это число уже используется.");
			}
		}

	}
	private: System::Void ADDForm_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		this->ShowCMS(e);
	}
	private: System::Void dataGridView1_CellMouseUp(System::Object^ sender, System::Windows::Forms::DataGridViewCellMouseEventArgs^ e) {
		if (e->Button == System::Windows::Forms::MouseButtons::Right)
		{
			this->ShowCMS(e);
		}
	}
	private: System::Void dataGridView3_CellMouseUp(System::Object^ sender, System::Windows::Forms::DataGridViewCellMouseEventArgs^ e) {
		if (e->Button == System::Windows::Forms::MouseButtons::Right)
		{
			this->ShowCMS(e);
		}
	}
	private: System::Void удалитьСтрокуToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		//////////////// надо как-то сделать
	}

	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {

		double sum = 0.0;

		int columnIndexPrice = 2; // Индекс столбца 'цена'
		int columnIndexQuantity = 7; // Индекс столбца 'количество'


		// Проходим по всем строкам DataGridView
		for each (DataGridViewRow ^ row in dataGridView1->Rows)
		{
			// Извлекаем значения из ячеек
			double price = Convert::ToDouble(row->Cells[columnIndexPrice]->Value);
			double quantity = Convert::ToDouble(row->Cells[columnIndexQuantity]->Value);

			// Перемножаем и добавляем к общей сумме
			sum += price * quantity;
		}

		double sum1 = 0.0;
		int columnIndexPrice2 = 2; // Индекс столбца 'цена'
		int columnIndexQuantity2 = 7; // Индекс столбца 'количество'


		// Проходим по всем строкам DataGridView
		for each (DataGridViewRow ^ row in dataGridView3->Rows)
		{
			// Извлекаем значения из ячеек
			double price = Convert::ToDouble(row->Cells[columnIndexPrice2]->Value);
			double quantity = Convert::ToDouble(row->Cells[columnIndexQuantity2]->Value);

			// Перемножаем и добавляем к общей сумме
			sum1 += price * quantity;
		}

		try
		{
			array<String^>^ product = {
		"№", "Наименование", "Артикул", "Цена руб." ,"Тип","Ед.изм.","Страна","Цена $,Количество"
			};

			try
			{
				auto word3 = gcnew Microsoft::Office::Interop::Word::Application();//всегда будет подсвечивать ошибку но компилирует
				word3->Visible = true;//отображать прогу ворд
				auto t = Type::Missing;// t иницилизируется пустым
				auto document2 = word3->Documents->Add(t, t, t, t); //создаём пустую страницу ворда(документ)
				word3->Selection->TypeText("\t\t\t\t\tСМЕТА");//в текущую позицию нахождения курсора записываем текст и курсор смещается каждый раз за последний введенный символ
				word3->Selection->TypeText("\nТаблица №1. Расчёт работ:");
				Object^ t1 = Microsoft::Office::Interop::Word::WdDefaultTableBehavior::wdWord9TableBehavior;//в параметрах документа ворд указываем настройку отображать границы ячеек таблицы
				Object^ t2 = Microsoft::Office::Interop::Word::WdAutoFitBehavior::wdAutoFitContent; // в параметрах документа Ворд указываем настройки автоматически изменять размер ячеек таблицы под
				word3->ActiveDocument->Tables->Add(word3->Selection->Range, dataGridView1->RowCount + 1, dataGridView1->ColumnCount + 1, t1, t2);//записываемое в них содеримое и визуальным показом всех границ ячеек таблицы

				try
				{
					word3->ActiveDocument->Tables[1]->Cell(1, 1)->Range->Text = "N";
					word3->ActiveDocument->Tables[1]->Cell(1, 2)->Range->Text = "Наименование";
					word3->ActiveDocument->Tables[1]->Cell(1, 3)->Range->Text = "Артикул";
					word3->ActiveDocument->Tables[1]->Cell(1, 4)->Range->Text = "Цена руб.";
					word3->ActiveDocument->Tables[1]->Cell(1, 5)->Range->Text = "Тип";
					word3->ActiveDocument->Tables[1]->Cell(1, 6)->Range->Text = "Ед.изм.";
					word3->ActiveDocument->Tables[1]->Cell(1, 7)->Range->Text = "Страна";
					word3->ActiveDocument->Tables[1]->Cell(1, 8)->Range->Text = "Цена $";
					word3->ActiveDocument->Tables[1]->Cell(1, 9)->Range->Text = "Количество";
					int a = 1;
					for (int i = 0; i < dataGridView1->RowCount - 1; i++)
					{
						word3->ActiveDocument->Tables[1]->Cell(i + 2, 1)->Range->Text = a++.ToString();
						for (int j = 0; j < dataGridView1->ColumnCount; j++)
						{
							word3->ActiveDocument->Tables[1]->Cell(i + 2, j + 2)->Range->Text = dataGridView1->Rows[i]->Cells[j]->Value->ToString();
						}
					}

					int lastRow = word3->ActiveDocument->Tables[1]->Rows->Count;
					int lastColumn = word3->ActiveDocument->Tables[1]->Columns->Count;
					word3->ActiveDocument->Tables[1]->Cell(lastRow, 3)->Range->Text = "ИТОГО:";
					word3->ActiveDocument->Tables[1]->Cell(lastRow, 3 + 1)->Range->Text = sum.ToString();


				}
				catch (System::Runtime::InteropServices::COMException^ eva)
				{
					MessageBox::Show(eva->Message);
				}


				Object^ t3 = Microsoft::Office::Interop::Word::WdUnits::wdLine; ////назначаем единицей измерения текста втекущем документе ОднУ строку
				Int32^ str10 = 50; // динамическая целочисленная переменная декларируется и инициализируется 10 - ю, чтобы указывать на 10 - ю строку таблицы
				word3->Selection->MoveDown(t3, str10, t);///переводим текущую позицию курсоря Selection за пределы табл в 10-ю строку, куда введем текст
				word3->Selection->TypeText("Таблица №2. Расчёт материалов:\n");
				word3->ActiveDocument->Tables->Add(word3->Selection->Range, dataGridView3->RowCount + 1, dataGridView3->ColumnCount + 1, t1, t2);//записываемое в них содеримое и визуальным показом всех границ ячеек таблицы
				try
				{
					word3->ActiveDocument->Tables[2]->Cell(1, 1)->Range->Text = "N";
					word3->ActiveDocument->Tables[2]->Cell(1, 2)->Range->Text = "Наименование";
					word3->ActiveDocument->Tables[2]->Cell(1, 3)->Range->Text = "Артикул";
					word3->ActiveDocument->Tables[2]->Cell(1, 4)->Range->Text = "Цена руб.";
					word3->ActiveDocument->Tables[2]->Cell(1, 5)->Range->Text = "Ед.изм.";
					word3->ActiveDocument->Tables[2]->Cell(1, 6)->Range->Text = "Страна";
					word3->ActiveDocument->Tables[2]->Cell(1, 7)->Range->Text = "Цена $";
					word3->ActiveDocument->Tables[2]->Cell(1, 8)->Range->Text = "Бренд";
					word3->ActiveDocument->Tables[2]->Cell(1, 9)->Range->Text = "Количество";

					int b = 1;
					for (int i = 0; i < dataGridView1->RowCount - 1; i++)
					{
						word3->ActiveDocument->Tables[2]->Cell(i + 2, 1)->Range->Text = b++.ToString();
						for (int j = 0; j < dataGridView1->ColumnCount; j++)
						{
							word3->ActiveDocument->Tables[2]->Cell(i + 2, j + 2)->Range->Text = dataGridView3->Rows[i]->Cells[j]->Value->ToString();
						}
					}

					int lastRow2 = word3->ActiveDocument->Tables[2]->Rows->Count;
					int lastColumn2 = word3->ActiveDocument->Tables[2]->Columns->Count;
					word3->ActiveDocument->Tables[2]->Cell(lastRow2, 3)->Range->Text = "ИТОГО:";
					word3->ActiveDocument->Tables[2]->Cell(lastColumn2, 3 + 1)->Range->Text = sum1.ToString();
				}
				catch (System::Runtime::InteropServices::COMException^ eva)
				{
					MessageBox::Show(eva->Message);
				}
				int overSum = sum + sum1;
				Int32^ str100 = 100; // динамическая целочисленная переменная декларируется и инициализируется 10 - ю, чтобы указывать на 10 - ю строку таблицы
				word3->Selection->MoveDown(t3, str100, t);///переводим текущую позицию курсоря Selection за пределы табл в 10-ю строку, куда введем текст
				word3->Selection->TypeText("\t\t\t\t\tВСЕГО: " + overSum.ToString() + " руб.");
				Object^ filename = "C:\\Users\\Захар\\source\\repos\\Laba27\\Шабуневич Захар Т-319.docx";///текучему у дркументу (написал полный путь файлу и указал имя расширение
				word3->ActiveDocument->SaveAs(filename, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t);//Если пользователь сохранит то он сохранит архивированных файла по нашему пути

			}
			catch (System::Exception^ eva)
			{
				MessageBox::Show(eva->Message);
			}
		}
		catch (Exception^ eva)
		{
			MessageBox::Show(eva->Message);
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ textBoxValue1 = textBox9->Text;
		bool matchFound1 = true;

		for (int i = 0; i < dataNumId->Length; i++) {
			if (dataNumId[i]->Trim() == textBoxValue1->Trim()) {
				matchFound1 = false;
				break;
			}
		}

		if (!matchFound1)
		{
			try
			{
				db->openConnection();
				db->RepeatChecFromSaveTableWork(dataGridView1, textBox9);
				db->RepeatChecFromSaveTableMaterial(dataGridView3, textBox9);

				String^ data1 = textBox9->Text;//Номер сметы
				String^ data2 = textBox10->Text;//Дата
				String^ data3 = textBox1->Text;//наименование
				String^ data4 = textBox2->Text;//тел
				String^ data5 = textBox3->Text;//начало работ
				String^ data6 = textBox4->Text;//окончание план
				String^ data7 = textBox5->Text;//окончание работ
				String^ data8 = textBox6->Text;//Доп инфа
				String^ data9 = textBox7->Text;//Комм
				String^ data10 = textBox8->Text;//Рекомендации
				double total1 = Convert::ToDouble(label9->Text);

				db->ChangeSaveTextBox(data1, data2, data3, data4, data5, data6, data7, data8, data9, data10, textBox9);
				deleg(data1, data2, data3, data4, data5, data6, data7, data8, data9, data10, total1);
				db->closeConnection();
				MessageBox::Show("Успешно изменён");
				this->Hide();
			}
			catch (Exception^ eva)
			{
				MessageBox::Show(eva->Message);
			}
		}
		else
		{
			MessageBox::Show("Вы не оформляли смету с таким номер.\n Чтобы внести изменения нужно сначала оформить смету.");
		}
	}
	};
}
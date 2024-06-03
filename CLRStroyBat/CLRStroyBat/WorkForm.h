#pragma once
#include "Database.h"

namespace CLRStroyBat {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	/// <summary>
	/// Сводка для WorkForm
	/// </summary>
	public ref class WorkForm : public System::Windows::Forms::Form
	{
	public:
		WorkForm(void)
		{
			InitializeComponent();
			this->StartPosition = FormStartPosition::CenterParent;

			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~WorkForm()
		{
			if (components)
			{
				delete components;
			}
		}


	private: System::Windows::Forms::Button^ button5;

	private: System::Windows::Forms::Button^ button3;


	private: System::Windows::Forms::TreeView^ treeView1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ dfsfsdfToolStripMenuItem;








	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;



	private: System::Windows::Forms::ToolStripMenuItem^ удалитьToolStripMenuItem;
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
			System::Windows::Forms::TreeNode^ treeNode1 = (gcnew System::Windows::Forms::TreeNode(L"Демонтажные работы"));
			System::Windows::Forms::TreeNode^ treeNode2 = (gcnew System::Windows::Forms::TreeNode(L"Работа с потолками"));
			System::Windows::Forms::TreeNode^ treeNode3 = (gcnew System::Windows::Forms::TreeNode(L"Работа со стенами"));
			System::Windows::Forms::TreeNode^ treeNode4 = (gcnew System::Windows::Forms::TreeNode(L"Работы с полом"));
			System::Windows::Forms::TreeNode^ treeNode5 = (gcnew System::Windows::Forms::TreeNode(L"Столярные работы"));
			System::Windows::Forms::TreeNode^ treeNode6 = (gcnew System::Windows::Forms::TreeNode(L"Электромонтажные работы"));
			System::Windows::Forms::TreeNode^ treeNode7 = (gcnew System::Windows::Forms::TreeNode(L"Сантехнические работы"));
			System::Windows::Forms::TreeNode^ treeNode8 = (gcnew System::Windows::Forms::TreeNode(L"Дополнительные работы"));
			System::Windows::Forms::TreeNode^ treeNode9 = (gcnew System::Windows::Forms::TreeNode(L"Транспортные расходы"));
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->treeView1 = (gcnew System::Windows::Forms::TreeView());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->dfsfsdfToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->удалитьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->contextMenuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(1951, 710);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(160, 60);
			this->button5->TabIndex = 11;
			this->button5->Text = L"Выход";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &WorkForm::button5_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(1951, 628);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(160, 60);
			this->button3->TabIndex = 9;
			this->button3->Text = L"Удалить";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &WorkForm::button3_Click);
			// 
			// treeView1
			// 
			this->treeView1->Location = System::Drawing::Point(0, 59);
			this->treeView1->Name = L"treeView1";
			treeNode1->Name = L"Узел1";
			treeNode1->NodeFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			treeNode1->Text = L"Демонтажные работы";
			treeNode2->Name = L"Узел5";
			treeNode2->NodeFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			treeNode2->Text = L"Работа с потолками";
			treeNode3->Name = L"Узел6";
			treeNode3->NodeFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			treeNode3->Text = L"Работа со стенами";
			treeNode4->Name = L"Узел7";
			treeNode4->NodeFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			treeNode4->Text = L"Работы с полом";
			treeNode5->Name = L"Узел8";
			treeNode5->NodeFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			treeNode5->Text = L"Столярные работы";
			treeNode6->Name = L"Узел9";
			treeNode6->NodeFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			treeNode6->Text = L"Электромонтажные работы";
			treeNode7->Name = L"Узел10";
			treeNode7->NodeFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			treeNode7->Text = L"Сантехнические работы";
			treeNode8->Name = L"Узел11";
			treeNode8->NodeFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			treeNode8->Text = L"Дополнительные работы";
			treeNode9->Name = L"Узел12";
			treeNode9->NodeFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			treeNode9->Text = L"Транспортные расходы";
			this->treeView1->Nodes->AddRange(gcnew cli::array< System::Windows::Forms::TreeNode^  >(9) {
				treeNode1, treeNode2, treeNode3,
					treeNode4, treeNode5, treeNode6, treeNode7, treeNode8, treeNode9
			});
			this->treeView1->Size = System::Drawing::Size(373, 711);
			this->treeView1->TabIndex = 19;
			this->treeView1->AfterSelect += gcnew System::Windows::Forms::TreeViewEventHandler(this, &WorkForm::treeView1_AfterSelect);
			// 
			// menuStrip1
			// 
			this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(32, 32);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->dfsfsdfToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(2237, 45);
			this->menuStrip1->TabIndex = 20;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &WorkForm::menuStrip1_ItemClicked);
			// 
			// dfsfsdfToolStripMenuItem
			// 
			this->dfsfsdfToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->dfsfsdfToolStripMenuItem->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->dfsfsdfToolStripMenuItem->Name = L"dfsfsdfToolStripMenuItem";
			this->dfsfsdfToolStripMenuItem->Size = System::Drawing::Size(136, 41);
			this->dfsfsdfToolStripMenuItem->Text = L"Главная";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::SystemColors::Highlight;
			this->label4->Location = System::Drawing::Point(94, 801);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(70, 25);
			this->label4->TabIndex = 24;
			this->label4->Text = L"label4";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->label3->Location = System::Drawing::Point(104, 800);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 26);
			this->label3->TabIndex = 23;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->label1->Location = System::Drawing::Point(12, 800);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(76, 26);
			this->label1->TabIndex = 22;
			this->label1->Text = L"Всего:";
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Закупка", L"Стандарт" });
			this->comboBox2->Location = System::Drawing::Point(1743, 7);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(160, 33);
			this->comboBox2->TabIndex = 27;
			this->comboBox2->Text = L"Стандарт";
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &WorkForm::comboBox2_SelectedIndexChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(1650, 7);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(87, 31);
			this->label7->TabIndex = 32;
			this->label7->Text = L"Цена:";
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(379, 59);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->ReadOnly = true;
			this->dataGridView2->RowHeadersWidth = 82;
			this->dataGridView2->RowTemplate->Height = 33;
			this->dataGridView2->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView2->Size = System::Drawing::Size(1505, 711);
			this->dataGridView2->TabIndex = 33;
			this->dataGridView2->CellMouseUp += gcnew System::Windows::Forms::DataGridViewCellMouseEventHandler(this, &WorkForm::dataGridView2_CellMouseUp);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(784, 790);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(123, 36);
			this->button6->TabIndex = 34;
			this->button6->Text = L"Поиск";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &WorkForm::button6_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->label2->Location = System::Drawing::Point(384, 793);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(276, 26);
			this->label2->TabIndex = 35;
			this->label2->Text = L"Введите нужный артикул:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(666, 790);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 31);
			this->textBox1->TabIndex = 36;
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(32, 32);
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->удалитьToolStripMenuItem });
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(177, 42);
			// 
			// удалитьToolStripMenuItem
			// 
			this->удалитьToolStripMenuItem->Name = L"удалитьToolStripMenuItem";
			this->удалитьToolStripMenuItem->Size = System::Drawing::Size(176, 38);
			this->удалитьToolStripMenuItem->Text = L"Удалить";
			this->удалитьToolStripMenuItem->Click += gcnew System::EventHandler(this, &WorkForm::удалитьToolStripMenuItem_Click);
			// 
			// WorkForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(2237, 871);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->treeView1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"WorkForm";
			this->Text = L"WorkForm";
			this->Load += gcnew System::EventHandler(this, &WorkForm::WorkForm_Load);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &WorkForm::WorkForm_MouseUp);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->contextMenuStrip1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		DataTable^ dtR;
		int count = 0;
		Database^ db = gcnew Database();

	private: void СonfirmationOfTheExit()
	{
		auto result = MessageBox::Show(
			"Вы действительно хотите выйти из программы?",
			"Подтвердите выход",
			MessageBoxButtons::YesNo,
			MessageBoxIcon::Question);
		if (result == System::Windows::Forms::DialogResult::Yes) {
			this->Close();
		}
	}

	private: void СonfirmationOfTheDelete()
	{
		auto result = MessageBox::Show(
			"Вы действительно хотите удалить выбранный фрагмент?",
			"Подтвердите удаление",
			MessageBoxButtons::YesNo,
			MessageBoxIcon::Question);
		if (result == System::Windows::Forms::DialogResult::Yes) {
			dataGridView2->Rows->RemoveAt(dataGridView2->CurrentRow->Index);
			dataGridView2->Refresh();
			count--;
			label4->Text = count.ToString();
		}
	}


	private: void ShowCMS(System::Windows::Forms::MouseEventArgs^ e) {
		if (e->Button == System::Windows::Forms::MouseButtons::Right) {
			contextMenuStrip1->Show(
				this->MousePosition);
		}
	}

	private: System::Void WorkForm_Load(System::Object^ sender, System::EventArgs^ e) {
		this->Text = "Справочник работ";
		WorkForm::Width = 1090; //Установка пользовательского размера формы
		WorkForm::Height = 490;

		dataGridView2->AutoResizeColumns();//автоподбор ширины
		dataGridView2->RowHeadersWidth = 5; // уменьшение крайнего левого столбца по ширине


		db->openConnection();
		dataGridView2->DataSource = db->getTableWork();
		db->closeConnection();

		for (int i = 0; i < dataGridView2->Rows->Count - 9; i++)
		{
			count++;
		}
		label4->Text = count.ToString();
	}

	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		СonfirmationOfTheExit();
	}

	private: System::Void treeView1_AfterSelect(System::Object^ sender, System::Windows::Forms::TreeViewEventArgs^ e) {

		int id = Convert::ToInt32(treeView1->SelectedNode->Index);

		switch (id)
		{
		case 0:
		{
			dataGridView2->ClearSelection();
			dataGridView2->Rows[0]->Selected = true;
			break;
		}
		case 1:
		{
			dataGridView2->ClearSelection();
			dataGridView2->Rows[12]->Selected = true;
			break;
		}
		case 2:
		{
			dataGridView2->ClearSelection();
			dataGridView2->Rows[24]->Selected = true;
			break;
		}
		case 3:
		{
			dataGridView2->ClearSelection();
			dataGridView2->Rows[43]->Selected = true;
			break;
		}
		case 4:
		{
			dataGridView2->ClearSelection();
			dataGridView2->Rows[57]->Selected = true;
			break;
		}
		case 5:
		{
			dataGridView2->ClearSelection();
			dataGridView2->Rows[63]->Selected = true;
			break;
		}
		case 6:
		{
			dataGridView2->ClearSelection();
			dataGridView2->Rows[70]->Selected = true;
			break;
		}
		case 7:
		{
			dataGridView2->ClearSelection();
			dataGridView2->Rows[74]->Selected = true;
			break;
		}
		case 8:
		{
			dataGridView2->ClearSelection();
			dataGridView2->Rows[78]->Selected = true;
			break;
		}
		default:
		{
			MessageBox::Show("Ты где-то ошибся в коде");
		}
		}
	}

	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {

		for (int i = 0; i < dataGridView2->RowCount; i++)
		{
			dataGridView2->Rows[i]->Selected = false;
			for (int j = 0; j < dataGridView2->ColumnCount; j++)
				if (dataGridView2->Rows[i]->Cells[j]->Value != nullptr)
					if (dataGridView2->Rows[i]->Cells[j]->Value->ToString()->Contains(textBox1->Text))
					{
						dataGridView2->Rows[i]->Selected = true;
						break;
					}
		}
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		СonfirmationOfTheDelete();
	}

	private: System::Void WorkForm_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		this->ShowCMS(e);
	}

	private: System::Void удалитьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		СonfirmationOfTheDelete();
	}
	private: System::Void dataGridView2_CellMouseUp(System::Object^ sender, System::Windows::Forms::DataGridViewCellMouseEventArgs^ e) {
		if (e->Button == System::Windows::Forms::MouseButtons::Right)
		{
			this->ShowCMS(e);
		}
	}


	private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ selectedValue = this->comboBox2->SelectedItem->ToString();

		if (selectedValue == "Закупка")
		{
			db->openConnection();
			dataGridView2->DataSource = db->getTableWorkZakup();
			db->closeConnection();
		}

		else if (selectedValue == "Стандарт")
		{
			db->openConnection();
			dataGridView2->DataSource = db->getTableWork();
			db->closeConnection();
		}
	}
private: System::Void menuStrip1_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e) {
}
};
}
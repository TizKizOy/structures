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
	/// Сводка для MaterialsForm
	/// </summary>
	public ref class MaterialsForm : public System::Windows::Forms::Form
	{
	public:
		MaterialsForm(void)
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
		~MaterialsForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:









	private: System::Windows::Forms::TreeView^ treeView1;


	private: System::Windows::Forms::Button^ button3;

	private: System::Windows::Forms::Button^ button5;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;


	private: System::Windows::Forms::ToolStripMenuItem^ fgdgdfgToolStripMenuItem;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;


	private: System::Windows::Forms::ToolStripMenuItem^ удалитьToolStripMenuItem;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::ComboBox^ comboBox2;

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
			System::Windows::Forms::TreeNode^ treeNode1 = (gcnew System::Windows::Forms::TreeNode(L"Материал для работ с потолком"));
			System::Windows::Forms::TreeNode^ treeNode2 = (gcnew System::Windows::Forms::TreeNode(L"Материал для работ со стенами"));
			System::Windows::Forms::TreeNode^ treeNode3 = (gcnew System::Windows::Forms::TreeNode(L"Материал для работ с полом"));
			System::Windows::Forms::TreeNode^ treeNode4 = (gcnew System::Windows::Forms::TreeNode(L"Материал для столярных раьот"));
			System::Windows::Forms::TreeNode^ treeNode5 = (gcnew System::Windows::Forms::TreeNode(L"Материал для электромантажных работ"));
			System::Windows::Forms::TreeNode^ treeNode6 = (gcnew System::Windows::Forms::TreeNode(L"Расходный инструмент"));
			this->treeView1 = (gcnew System::Windows::Forms::TreeView());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->fgdgdfgToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->удалитьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->contextMenuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// treeView1
			// 
			this->treeView1->Location = System::Drawing::Point(0, 60);
			this->treeView1->Name = L"treeView1";
			treeNode1->Name = L"Узел1";
			treeNode1->NodeFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			treeNode1->Text = L"Материал для работ с потолком";
			treeNode2->Name = L"Узел2";
			treeNode2->NodeFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			treeNode2->Text = L"Материал для работ со стенами";
			treeNode3->Name = L"Узел3";
			treeNode3->NodeFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			treeNode3->Text = L"Материал для работ с полом";
			treeNode4->Name = L"Узел4";
			treeNode4->NodeFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			treeNode4->Text = L"Материал для столярных раьот";
			treeNode5->Name = L"Узел5";
			treeNode5->NodeFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			treeNode5->Text = L"Материал для электромантажных работ";
			treeNode6->Name = L"Узел6";
			treeNode6->NodeFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			treeNode6->Text = L"Расходный инструмент";
			this->treeView1->Nodes->AddRange(gcnew cli::array< System::Windows::Forms::TreeNode^  >(6) {
				treeNode1, treeNode2, treeNode3,
					treeNode4, treeNode5, treeNode6
			});
			this->treeView1->Size = System::Drawing::Size(369, 807);
			this->treeView1->TabIndex = 18;
			this->treeView1->AfterSelect += gcnew System::Windows::Forms::TreeViewEventHandler(this, &MaterialsForm::treeView1_AfterSelect);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(1748, 721);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(160, 60);
			this->button3->TabIndex = 22;
			this->button3->Text = L"Удалить";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MaterialsForm::button3_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(1748, 807);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(160, 60);
			this->button5->TabIndex = 24;
			this->button5->Text = L"Выход";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MaterialsForm::button5_Click_1);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->label1->Location = System::Drawing::Point(12, 900);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(76, 26);
			this->label1->TabIndex = 26;
			this->label1->Text = L"Всего:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->label3->Location = System::Drawing::Point(104, 900);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 26);
			this->label3->TabIndex = 27;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::SystemColors::Highlight;
			this->label4->Location = System::Drawing::Point(94, 901);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(70, 25);
			this->label4->TabIndex = 28;
			this->label4->Text = L"label4";
			// 
			// fgdgdfgToolStripMenuItem
			// 
			this->fgdgdfgToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->fgdgdfgToolStripMenuItem->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->fgdgdfgToolStripMenuItem->Name = L"fgdgdfgToolStripMenuItem";
			this->fgdgdfgToolStripMenuItem->Size = System::Drawing::Size(136, 41);
			this->fgdgdfgToolStripMenuItem->Text = L"Главная";
			// 
			// menuStrip1
			// 
			this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(32, 32);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->fgdgdfgToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1992, 45);
			this->menuStrip1->TabIndex = 19;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(1461, 7);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(87, 31);
			this->label7->TabIndex = 31;
			this->label7->Text = L"Цена:";
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(375, 60);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->ReadOnly = true;
			this->dataGridView2->RowHeadersWidth = 82;
			this->dataGridView2->RowTemplate->Height = 33;
			this->dataGridView2->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView2->Size = System::Drawing::Size(1339, 807);
			this->dataGridView2->TabIndex = 34;
			this->dataGridView2->CellMouseUp += gcnew System::Windows::Forms::DataGridViewCellMouseEventHandler(this, &MaterialsForm::dataGridView2_CellMouseUp);
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
			this->удалитьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MaterialsForm::удалитьToolStripMenuItem_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(661, 897);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 31);
			this->textBox1->TabIndex = 39;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->label2->Location = System::Drawing::Point(379, 900);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(276, 26);
			this->label2->TabIndex = 38;
			this->label2->Text = L"Введите нужный артикул:";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(779, 897);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(123, 36);
			this->button6->TabIndex = 37;
			this->button6->Text = L"Поиск";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MaterialsForm::button6_Click);
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Закупка", L"Стандарт" });
			this->comboBox2->Location = System::Drawing::Point(1554, 7);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(160, 33);
			this->comboBox2->TabIndex = 40;
			this->comboBox2->Text = L"Стандарт";
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MaterialsForm::comboBox2_SelectedIndexChanged_1);
			// 
			// MaterialsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1992, 988);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->treeView1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MaterialsForm";
			this->Text = L"MaterialsForm";
			this->Load += gcnew System::EventHandler(this, &MaterialsForm::MaterialsForm_Load);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MaterialsForm::MaterialsForm_MouseUp);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->contextMenuStrip1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		Database^ db = gcnew Database();
		DataTable^ dtR;
		int count = 0;

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

	private: System::Void MaterialsForm_Load(System::Object^ sender, System::EventArgs^ e) {
		this->Text = "Справочник Материалов";
		MaterialsForm::Width = 990; //Установка пользовательского размера формы
		MaterialsForm::Height = 545;
		dataGridView2->AutoResizeColumns();//автоподбор ширины
		dataGridView2->RowHeadersWidth = 5; // уменьшение крайнего левого столбца по ширине

		db->openConnection();
		dataGridView2->DataSource = db->getTableMaterial();
		db->closeConnection();

		for (int i = 0; i < dataGridView2->Rows->Count - 6; i++)
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
			dataGridView2->Rows[9]->Selected = true;
			break;
		}
		case 2:
		{
			dataGridView2->ClearSelection();
			dataGridView2->Rows[23]->Selected = true;
			break;
		}
		case 3:
		{
			dataGridView2->ClearSelection();
			dataGridView2->Rows[30]->Selected = true;
			break;
		}
		case 4:
		{
			dataGridView2->ClearSelection();
			dataGridView2->Rows[33]->Selected = true;
			break;
		}
		case 5:
		{
			dataGridView2->ClearSelection();
			dataGridView2->Rows[36]->Selected = true;
			break;
		}
		default:
		{
			MessageBox::Show("Ты где-то ошибся в коде");
		}
		}

	}

	private: System::Void button5_Click_1(System::Object^ sender, System::EventArgs^ e) {
		СonfirmationOfTheExit();
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
	private: System::Void MaterialsForm_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
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

	private: System::Void comboBox2_SelectedIndexChanged_1(System::Object^ sender, System::EventArgs^ e) {
		String^ selectedValue = this->comboBox2->SelectedItem->ToString();

		if (selectedValue == "Закупка")
		{
			db->openConnection();
			dataGridView2->DataSource = db->getTableMaterialZakup();
			db->closeConnection();
		}

		else if (selectedValue == "Стандарт")
		{
			db->openConnection();
			dataGridView2->DataSource = db->getTableMaterial();
			db->closeConnection();
		}
	}

};
}

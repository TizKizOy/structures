#pragma once
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
	/// Сводка для AddWorkForm
	/// </summary>
	public ref class AddWorkForm : public System::Windows::Forms::Form
	{
	private:
		returnMaterialData^ deleg;
	public:
		AddWorkForm(returnMaterialData^ sender) {
			this->InitializeComponent();
			deleg = sender;
		};
	public:
		AddWorkForm(void)
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
		~AddWorkForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TreeView^ treeView1;









	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::TreeNode^ treeNode1 = (gcnew System::Windows::Forms::TreeNode(L"Демонтажные работы"));
			System::Windows::Forms::TreeNode^ treeNode2 = (gcnew System::Windows::Forms::TreeNode(L"Работа с потолками"));
			System::Windows::Forms::TreeNode^ treeNode3 = (gcnew System::Windows::Forms::TreeNode(L"Работа со стенами"));
			System::Windows::Forms::TreeNode^ treeNode4 = (gcnew System::Windows::Forms::TreeNode(L"Работы с полом"));
			System::Windows::Forms::TreeNode^ treeNode5 = (gcnew System::Windows::Forms::TreeNode(L"Столярные работы"));
			System::Windows::Forms::TreeNode^ treeNode6 = (gcnew System::Windows::Forms::TreeNode(L"Электромонтажные работы"));
			System::Windows::Forms::TreeNode^ treeNode7 = (gcnew System::Windows::Forms::TreeNode(L"Сантехнические работы"));
			System::Windows::Forms::TreeNode^ treeNode8 = (gcnew System::Windows::Forms::TreeNode(L"Дополнительные работы"));
			System::Windows::Forms::TreeNode^ treeNode9 = (gcnew System::Windows::Forms::TreeNode(L"Транспортные расходы"));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->treeView1 = (gcnew System::Windows::Forms::TreeView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(678, 743);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 31);
			this->textBox1->TabIndex = 44;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->label2->Location = System::Drawing::Point(396, 746);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(276, 26);
			this->label2->TabIndex = 43;
			this->label2->Text = L"Введите нужный артикул:";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(796, 743);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(123, 36);
			this->button6->TabIndex = 42;
			this->button6->Text = L"Поиск";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &AddWorkForm::button6_Click);
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(391, 12);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->ReadOnly = true;
			this->dataGridView2->RowHeadersWidth = 82;
			this->dataGridView2->RowTemplate->Height = 33;
			this->dataGridView2->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView2->Size = System::Drawing::Size(1505, 711);
			this->dataGridView2->TabIndex = 41;
			this->dataGridView2->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &AddWorkForm::dataGridView2_MouseDoubleClick);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::SystemColors::Highlight;
			this->label4->Location = System::Drawing::Point(106, 754);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(70, 25);
			this->label4->TabIndex = 40;
			this->label4->Text = L"label4";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->label3->Location = System::Drawing::Point(116, 753);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 26);
			this->label3->TabIndex = 39;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->label1->Location = System::Drawing::Point(24, 753);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(76, 26);
			this->label1->TabIndex = 38;
			this->label1->Text = L"Всего:";
			// 
			// treeView1
			// 
			this->treeView1->Location = System::Drawing::Point(12, 12);
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
			this->treeView1->TabIndex = 37;
			this->treeView1->AfterSelect += gcnew System::Windows::Forms::TreeViewEventHandler(this, &AddWorkForm::treeView1_AfterSelect);
			// 
			// AddWorkForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1968, 809);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->treeView1);
			this->Name = L"AddWorkForm";
			this->Text = L"AddWorkForm";
			this->Load += gcnew System::EventHandler(this, &AddWorkForm::AddWorkForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
		DataTable^ dtR;
		int count = 0;
		Database^ db = gcnew Database();
		//ADDForm^ f2 = gcnew ADDForm();

	private: System::Void AddWorkForm_Load(System::Object^ sender, System::EventArgs^ e) {
		this->Text = "Выбор работ, услуг";
		AddWorkForm::Width = 998; //Установка пользовательского размера формы
		AddWorkForm::Height = 455;

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
	private: System::Void dataGridView2_MouseDoubleClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		// Получаем выбранную строку из DataGridView2 
		DataGridViewRow^ selectedRow = dataGridView2->SelectedRows[0];

		// Проверка значения в ячейке "Цена руб."
		if (selectedRow->Cells["Цена руб."]->Value != DBNull::Value) {
			// Если значение не равно DBNull, вызываем делегат
			deleg(selectedRow);
		}
		else {
			// Если значение равно DBNull, показываем сообщение
			MessageBox::Show("Повторите попытку");
			// Очистка выбора
			dataGridView2->ClearSelection();
			// Пользователь может снова кликнуть на ячейку для выбора
		}

	}

};
}

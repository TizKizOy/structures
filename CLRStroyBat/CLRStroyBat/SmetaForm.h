#pragma once
#include "ADDForm.h"
#include "AddMaterialForm.h"
#include "Database.h"

namespace CLRStroyBat {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Reflection;//��� ms Word
	/// <summary>
	/// ������ ��� SmetaForm
	/// </summary>
	public ref class SmetaForm : public System::Windows::Forms::Form
	{
	public:
		SmetaForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~SmetaForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;

	protected:







































	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(45, 78);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 82;
			this->dataGridView1->RowTemplate->Height = 33;
			this->dataGridView1->Size = System::Drawing::Size(1711, 691);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellMouseDoubleClick += gcnew System::Windows::Forms::DataGridViewCellMouseEventHandler(this, &SmetaForm::dataGridView1_CellMouseDoubleClick);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(1790, 641);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(147, 53);
			this->button7->TabIndex = 16;
			this->button7->Text = L".docx";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &SmetaForm::button7_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(1790, 78);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(147, 60);
			this->button1->TabIndex = 2;
			this->button1->Text = L"��������";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &SmetaForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(1790, 154);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(147, 60);
			this->button2->TabIndex = 3;
			this->button2->Text = L"��������";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &SmetaForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(1790, 230);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(147, 60);
			this->button3->TabIndex = 4;
			this->button3->Text = L"�������";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &SmetaForm::button3_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(1790, 709);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(147, 60);
			this->button5->TabIndex = 6;
			this->button5->Text = L"�����";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &SmetaForm::button5_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->label1->Location = System::Drawing::Point(58, 805);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(76, 26);
			this->label1->TabIndex = 7;
			this->label1->Text = L"�����:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->label2->Location = System::Drawing::Point(1020, 805);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(150, 26);
			this->label2->TabIndex = 8;
			this->label2->Text = L"����� �����:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->label3->Location = System::Drawing::Point(150, 805);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 26);
			this->label3->TabIndex = 9;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::SystemColors::Highlight;
			this->label4->Location = System::Drawing::Point(140, 806);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(24, 25);
			this->label4->TabIndex = 10;
			this->label4->Text = L"0";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->ForeColor = System::Drawing::SystemColors::Highlight;
			this->label5->Location = System::Drawing::Point(1191, 806);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(24, 25);
			this->label5->TabIndex = 11;
			this->label5->Text = L"0";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->label6->Location = System::Drawing::Point(1267, 805);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(57, 26);
			this->label6->TabIndex = 12;
			this->label6->Text = L"���.";
			// 
			// menuStrip1
			// 
			this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(32, 32);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->�������ToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(2079, 49);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(136, 45);
			this->�������ToolStripMenuItem->Text = L"�������";
			// 
			// SmetaForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(2079, 874);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"SmetaForm";
			this->Text = L"SmetaForm";
			this->Load += gcnew System::EventHandler(this, &SmetaForm::SmetaForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		Database^ db = gcnew Database();

	public:void SumAndDisplayCosts() {
		double total = 0.0;

		// ������������ ��������� �� ������� DataGridView
		for each (DataGridViewRow ^ row in dataGridView1->Rows) {
			if (row->Cells["�����, ���."]->Value != nullptr) {
				total += Convert::ToDouble(row->Cells["�����, ���."]->Value);
			}
		}

		// ����������� ����� ��������� � Label
		label5->Text = total.ToString();
	}

	public: void CountTable()
	{
		int count = 0;
		for (int i = 0; i < dataGridView1->RowCount; i++)
		{
			count++;
		}
		label4->Text = count.ToString();
	}

	public: void GetDataTextBox(String^ data1, String^ data2, String^ data3, String^ data4, String^ data5, String^ data6, String^ data7, String^ data8, String^ data9, String^ data10, double total)
	{
		array<String^>^ row = gcnew array<String^> {
			data1,//�����
				data2,//����
				data3,//������������
				data4,//���
				data5,//������ �����
				data6,//��������� ����
				data7,//��������� �����
				data8,//��� ����
				data9,//����
				data10,//������������
		};
		total;
		db->openConnection();
		db->InsertIntoSaveSmetaTextBoxs(data1, data2, data3, data4, total, data5, data6, data7);
		dataGridView1->DataSource = db->getTableSmeta(dataGridView1);
		db->closeConnection();
		CountTable();
	}

	private: System::Void SmetaForm_Load(System::Object^ sender, System::EventArgs^ e) {
		this->Text = "�����";// ����� �������� �����
		SmetaForm::Width = 1010; //��������� ����������������� ������� �����
		SmetaForm::Height = 490;
		dataGridView1->RowHeadersWidth = 5; // ���������� �������� ������ ������� �� ������
		dataGridView1->Rows->Clear();
		db->openConnection();
		dataGridView1->DataSource = db->getTableSmeta(dataGridView1);
		db->closeConnection();
		CountTable();
		SumAndDisplayCosts();
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		Close(); //��������� �����
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		array<String^>^ dataNum = gcnew array<String^>(dataGridView1->RowCount);

		for (int i = 0; i < dataGridView1->RowCount; i++)
		{
			if (dataGridView1->Rows[i]->Cells[0]->Value != nullptr)
			{
				dataNum[i] = dataGridView1->Rows[i]->Cells[0]->Value->ToString();
			}
		}


		array<String^>^ data = gcnew array<String^>(dataGridView1->RowCount);

		for (int i = 0; i < dataGridView1->RowCount; i++)
		{
			if (dataGridView1->Rows[i]->Cells[0]->Value != nullptr)
			{
				data[i] = dataGridView1->Rows[i]->Cells[0]->Value->ToString();
			}
		}

		ADDForm^ f1 = gcnew ADDForm(gcnew returnTextBoxData(this, &SmetaForm::GetDataTextBox), data, dataNum);
		f1->ShowDialog();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		auto result = MessageBox::Show(
			"�� ������������� ������ ������� ��������� ��������?",
			"����������� ��������",
			MessageBoxButtons::YesNo,
			MessageBoxIcon::Question);
		if (result == System::Windows::Forms::DialogResult::Yes) {
			dataGridView1->Rows->RemoveAt(dataGridView1->CurrentRow->Index);
			dataGridView1->Refresh();
		}
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		AddMaterialForm^ f5 = gcnew AddMaterialForm();
		f5->ShowDialog();
	}

	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {


		array<String^>^ product = {
		"��������", "��������", "����������", "��������" ,"��������"
		};

		try
		{
			auto word3 = gcnew Microsoft::Office::Interop::Word::Application();//������ ����� ������������ ������ �� �����������
			word3->Visible = true;//���������� ����� ����
			auto t = Type::Missing;// t ��������������� ������
			auto document2 = word3->Documents->Add(t, t, t, t); //������ ������ �������� �����(��������)
			word3->Selection->TypeText("\t\t\t\t\t�����");//� ������� ������� ���������� ������� ���������� ����� � ������ ��������� ������ ��� �� ��������� ��������� ������
			Object^ t1 = Microsoft::Office::Interop::Word::WdDefaultTableBehavior::wdWord9TableBehavior;//� ���������� ��������� ���� ��������� ��������� ���������� ������� ����� �������
			Object^ t2 = Microsoft::Office::Interop::Word::WdAutoFitBehavior::wdAutoFitContent; // � ���������� ��������� ���� ��������� ��������� ������������� �������� ������ ����� ������� ���
			word3->ActiveDocument->Tables->Add(word3->Selection->Range, 6, 5, t1, t2);//������������ � ��� ��������� � ���������� ������� ���� ������ ����� �������


			//����� �������� ����� ��� ������� �� �� �����������!!!!!!!!!!!!!!!!!!!!

			// ��������� ������� � ����������� ��������
			word3->ActiveDocument->Tables[1]->Cell(1, 1)->Range->Text = "N";
			word3->ActiveDocument->Tables[1]->Cell(1, 2)->Range->Text = "��������� � ������� ��������";
			word3->ActiveDocument->Tables[1]->Cell(1, 3)->Range->Text = "�������� ���������";
			word3->ActiveDocument->Tables[1]->Cell(1, 4)->Range->Text = "����������� ���������";
			word3->ActiveDocument->Tables[1]->Cell(1, 5)->Range->Text = "����� ���������";

			// ��������� ������ � ������ � �������
			for (int row = 2; row <= 6; row++) {
				try
				{
					word3->ActiveDocument->Tables[1]->Cell(row, 1)->Range->InsertAfter(product[row - 2]);
					//word3->ActiveDocument->Tables[1]->Cell(row, 2)->Range->Text = dataGridView1->Rows[row - 2]->Cells[0]->Value->ToString();
					//word3->ActiveDocument->Tables[1]->Cell(row, 3)->Range->Text = dataGridView1->Rows[row - 2]->Cells[1]->Value->ToString();
					//word3->ActiveDocument->Tables[1]->Cell(row, 4)->Range->Text = dataGridView1->Rows[row - 2]->Cells[2]->Value->ToString();
					//word3->ActiveDocument->Tables[1]->Cell(row, 5)->Range->Text = dataGridView1->Rows[row - 2]->Cells[3]->Value->ToString();
				}
				catch (System::Runtime::InteropServices::COMException^ eva)
				{
					MessageBox::Show(eva->Message);///� ���������1 �������� ��������� �� �������������� ��������
					row--;//��� �������� ���������� �������������� ���������, �� �� ���� ���������, ������� ������������ ���������� ���������, ����� � ��������� �������� ��� ����� ������� ��������. ������? J
					//���� try-catch ��������� ������ ����� � ��������� ��������� �������� �����, �� ��� ���� ������������ � ��������� ��������
				}
			}

			Object^ t3 = Microsoft::Office::Interop::Word::WdUnits::wdLine; ////��������� �������� ��������� ������ �������� ��������� ���� ������
			Int32^ str10 = 10; // ������������ ������������� ���������� ������������� � ���������������� 10 - �, ����� ��������� �� 10 - � ������ �������
			word3->Selection->MoveDown(t3, str10, t);///��������� ������� ������� ������� Selection �� ������� ���� � 10-� ������, ���� ������ �����
			word3->Selection->TypeText("\t� ������� ���� ����������� �������� � ������. \
		���� ������. \n\t������ ���������� ������ ������.\n"); // � ����� ���������� ������� ��������� �����
			Object^ filename = "C:\\Users\\�����\\source\\repos\\Laba27\\��������� ����� �-319.docx";///�������� � ��������� (������� ������ ���� ����� � ������ ��� ����������
			word3->ActiveDocument->SaveAs(filename, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t);//���� ������������ �������� �� �� �������� �������������� ����� �� ������ ����

		}
		catch (System::Exception^ eva)
		{
			MessageBox::Show(eva->Message);
		}
	}

	private: System::Void dataGridView1_CellMouseDoubleClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellMouseEventArgs^ e) {

		array<String^>^ dataNum = gcnew array<String^>(dataGridView1->RowCount);

		for (int i = 0; i < dataGridView1->RowCount; i++)
		{
			if (dataGridView1->Rows[i]->Cells[0]->Value != nullptr)
			{
				dataNum[i] = dataGridView1->Rows[i]->Cells[0]->Value->ToString();
				int a = 5;
			}
		}

		array<String^>^ data = gcnew array<String^>(dataGridView1->RowCount);

		for (int i = 0; i < dataGridView1->RowCount; i++)
		{
			if (dataGridView1->Rows[i]->Cells[0]->Value != nullptr)
			{
				data[i] = dataGridView1->Rows[i]->Cells[0]->Value->ToString();
				int a = 5;
			}
		}

		String^ id = Convert::ToString(dataGridView1->Rows[e->RowIndex]->Cells["�"]->Value);
		ADDForm^ f2 = gcnew ADDForm(id, data, dataNum);
		f2->ShowDialog();

	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	};
}

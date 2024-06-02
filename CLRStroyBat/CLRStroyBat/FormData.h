//#pragma once
//namespace CLRStroyBat {
//	using namespace System;
//	using namespace System::Windows::Forms;
//	using namespace System::Collections::Generic;
//
//	public ref class FormData
//	{
//	public:
//		// Данные из текстовых полей
//		String^ textBoxData1;
//		String^ textBoxData2;
//
//		// Данные из первого DataGridView
//		List<RowData^>^ dataGridView1Data;
//
//		// Данные из второго DataGridView
//		List<RowData^>^ dataGridView2Data;
//
//		FormData() {
//			dataGridView1Data = gcnew List<RowData^>();
//			dataGridView2Data = gcnew List<RowData^>();
//		}
//
//		// Метод для добавления данных из текстовых полей
//		void AddTextBoxData(String^ data1, String^ data2) {
//			textBoxData1 = data1;
//			textBoxData2 = data2;
//			// ...
//		}
//
//		// Метод для добавления данных из первого DataGridView
//		void AddDataGridView1Data(DataGridView^ dgv) {
//			for each (DataGridViewRow ^ row in dgv->Rows) {
//				if (!row->IsNewRow) {
//					RowData^ rowData = gcnew RowData(
//						row->Cells[0]->Value->ToString(),
//						row->Cells[1]->Value->ToString(),
//						row->Cells[2]->Value->ToString()
//					);
//					dataGridView1Data->Add(rowData);
//				}
//			}
//		}
//
//		// Метод для добавления данных из второго DataGridView
//		void AddDataGridView2Data(DataGridView^ dgv) {
//			for each (DataGridViewRow ^ row in dgv->Rows) {
//				if (!row->IsNewRow) {
//					RowData^ rowData = gcnew RowData(
//						row->Cells[0]->Value->ToString(),
//						row->Cells[1]->Value->ToString(),
//						row->Cells[2]->Value->ToString()
//					);
//					dataGridView2Data->Add(rowData);
//				}
//			}
//		}
//	};
//
//	// Класс для хранения данных одной строки DataGridView
//	public ref class RowData {
//	public:
//		String^ Column1;
//		String^ Column2;
//		String^ Column3;
//
//		RowData(String^ col1, String^ col2, String^ col3) {
//			Column1 = col1;
//			Column2 = col2;
//			Column3 = col3;
//		}
//	};
//
//
//}
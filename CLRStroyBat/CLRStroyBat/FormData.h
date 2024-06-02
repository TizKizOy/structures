//#pragma once
//namespace CLRStroyBat {
//	using namespace System;
//	using namespace System::Windows::Forms;
//	using namespace System::Collections::Generic;
//
//	public ref class FormData
//	{
//	public:
//		// ������ �� ��������� �����
//		String^ textBoxData1;
//		String^ textBoxData2;
//
//		// ������ �� ������� DataGridView
//		List<RowData^>^ dataGridView1Data;
//
//		// ������ �� ������� DataGridView
//		List<RowData^>^ dataGridView2Data;
//
//		FormData() {
//			dataGridView1Data = gcnew List<RowData^>();
//			dataGridView2Data = gcnew List<RowData^>();
//		}
//
//		// ����� ��� ���������� ������ �� ��������� �����
//		void AddTextBoxData(String^ data1, String^ data2) {
//			textBoxData1 = data1;
//			textBoxData2 = data2;
//			// ...
//		}
//
//		// ����� ��� ���������� ������ �� ������� DataGridView
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
//		// ����� ��� ���������� ������ �� ������� DataGridView
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
//	// ����� ��� �������� ������ ����� ������ DataGridView
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
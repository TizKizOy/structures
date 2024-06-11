#pragma once
namespace CLRStroyBat
{
	using namespace System;
	using namespace System::Windows::Forms;
	public delegate void returnMaterialData(DataGridViewRow^ dtr, String^ dataNum);
	public delegate void returnTextBoxData(String^ data1, String^ data2, String^ data3, String^ data4, String^ data5, String^ data6, String^ data7, String^ data8, String^ data9,String^ data10, double tot);
	public delegate void changeTextBoxData(String^ data1, String^ data2, String^ data3, String^ data4, String^ data5, String^ data6, String^ data7, String^ data8, String^ data9, String^ data10, double tot);
	public delegate void returnNumber(String^ dataNum);
	//public delegate void returnNumRow(String^ dataNum, DataGridViewRow^ dtr);

}
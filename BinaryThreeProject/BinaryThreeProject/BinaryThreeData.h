#pragma once

namespace BinaryThreeProject {
	using namespace System;

	public ref class TreeData
	{
	public:
		TreeData();
		TreeData(TreeData^ elem);
		TreeData(String^ num, String^ autor, String^ name, String^ year, String^ izdatelstvo, String^ kolStr);
		String^ num;
		String^ autor;
		String^ name;
		String^ year;
		String^ izdatelstvo;
		String^ kolStr;

		String^ GetData();
		String^ print();

	};


}

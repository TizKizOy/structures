#include "BinaryThreeData.h"
namespace BinaryThreeProject {
	using namespace System;

	BinaryThreeProject::TreeData::TreeData()
	{
		this->num = nullptr;
		this->autor = nullptr;
		this->name = nullptr;
		this->year = nullptr;
		this->izdatelstvo = nullptr;
		this->kolStr = nullptr;
	}

	TreeData::TreeData(TreeData^ elem)
	{
		this->autor = elem->autor;

	}

	BinaryThreeProject::TreeData::TreeData(String^ num, String^ autor, String^ name, String^ year, String^ izdatelstvo, String^ kolStr)
	{
		this->num = num;
		this->autor = autor;
		this->name = name;
		this->year = year;
		this->izdatelstvo = izdatelstvo;
		this->kolStr = kolStr;
	}

	String^ BinaryThreeProject::TreeData::GetData()
	{
		return
			"Номер книги: " + this->num +
			" Автор: " + this->autor +
			" Название: " + this->name +
			" Год издания: " + this->year +
			" Издательство: " + this->izdatelstvo +
			" Количество страниц: " + this->kolStr;
	}

	String^ TreeData::print()
	{
		return "0";
	}


}

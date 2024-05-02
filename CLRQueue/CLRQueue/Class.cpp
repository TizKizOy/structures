#include "Class.h"
using namespace System;

CLRQueueProject::CLRQueueClass::CLRQueueClass()
{

}

CLRQueueProject::CLRQueueData::CLRQueueData()
{
	this->number = nullptr;
	this->author = nullptr;
	this->title = nullptr;
	this->year = nullptr;
	this->izdatelstvo = nullptr;
	this->page = nullptr;
	this->next = nullptr;
}

CLRQueueProject::CLRQueueData::CLRQueueData(String^ number, String^ author, String^ title, String^ year, String^ izdatelstvo, String^ page)
{
	this->number = number;
	this->author = author;
	this->title = title;
	this->year = year;
	this->izdatelstvo = izdatelstvo;
	this->page = page;
	this->next = nullptr;
}


String^ CLRQueueProject::CLRQueueData::GetData()
{
	return
		"Регист.номер: " + this->number +
		" Автор: " + this->author +
		" Название: " + this->title +
		" Год издания: " + this->year +
		" Издательство: " + this->izdatelstvo +
		" Страниц: " + this->page;
}




bool CLRQueueProject::CLRQueueClass::IsEmpty()
{
	return this->current == nullptr;
}



void CLRQueueProject::CLRQueueClass::Push(String^ number, String^ author, String^ title, String^ year, String^ izdatelstvo, String^ page) {
	if (this->IsEmpty()) {
		this->current = gcnew CLRQueueData(number, author, title, year, izdatelstvo, page);
	}
	CLRQueueData^ tmp = this->current;
	while (tmp->next != nullptr) {
		tmp = tmp->next;
	}
	tmp->next = gcnew  CLRQueueData(number, author, title, year, izdatelstvo, page);

}

String^ CLRQueueProject::CLRQueueClass::Pop() {
	if (this->IsEmpty()) {
		throw gcnew Exception("Пусто");
	}
	String^ toReturn = current->GetData();
	this->current = this->current->next;
	return toReturn;
}

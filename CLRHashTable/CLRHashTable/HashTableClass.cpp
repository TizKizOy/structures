//#include "HashTableClass.h"
//using namespace System;
//Hash::HashTableData::HashTableData()
//{
//	
//}
//
//Hash::HashTableData::HashTableData(String^ autor, String^ genre, String^ name, String^ circulation)
//{
//	this->autor = autor;
//	this->genre = genre;
//	this->name = name;
//	this->circulation = circulation;
//	this->next = nullptr;
//}
//
//String^ Hash::HashTableData::GetData()
//{
//	return
//		"Автор: " + this->autor +
//		". Жанр:" + this->genre +
//		". Название: " + this->name +
//		". Тираж: " + this->circulation;
//
//}
//
////Hash::HashTableClass::HashTableClass()
////{
////	
////}
////
////void Hash::HashTableClass::Push(String^ autor, String^ genre, String^ name, String^ circulation)
////{
////	if (this->IsEmpty()) {
////		this->current = gcnew HashTableData(autor, genre, name, circulation);
////	}
////	HashTableData^ tmp = this->current;
////	while (tmp->next != nullptr) {
////		tmp = tmp->next;
////	}
////	tmp->next = gcnew  HashTableData(autor, genre, name, circulation);
////}
////
////String^ Hash::HashTableClass::Pop()
////{
////	if (this->IsEmpty()) {
////		throw gcnew Exception("Пусто");
////	}
////	String^ toReturn = current->GetData();
////	this->current = this->current->next;
////	return toReturn;
////}
////
////bool Hash::HashTableClass::IsEmpty()
////{
////	return this->current == nullptr;
////}

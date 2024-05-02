#pragma once
namespace CLRQueueProject {
	using namespace System;
	ref class CLRQueueData {

	public:
		CLRQueueData();// конструктор по умолчанию
		CLRQueueData(String^ number, String^ author, String^ title, String^ year, String^ izdatelstvo, String^ page);// конструктор с параметрами
		String^ GetData();


		String^ number;
		String^ author;
		String^ title;
		String^ year;
		String^ izdatelstvo;
		String^ page;

		CLRQueueData^ next;

	};
	ref class CLRQueueClass
	{
	public:
		CLRQueueClass();
		void Push(String^ number, String^ author, String^ title, String^ year, String^ izdatelstvo, String^ page);
		String^ Pop();
		bool IsEmpty();
		CLRQueueData^ current;
	};
}
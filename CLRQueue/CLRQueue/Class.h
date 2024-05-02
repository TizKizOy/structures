#pragma once
namespace CLRQueueProject {
	using namespace System;
	ref class CLRQueueData {

	public:
		CLRQueueData();// ����������� �� ���������
		CLRQueueData(String^ number, String^ author, String^ title, String^ year, String^ izdatelstvo, String^ page);// ����������� � �����������
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
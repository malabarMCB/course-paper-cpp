#pragma once
#include "Book.h"

class SchoolBook:public Book
{
	private:
		string topic;
		int classNumber;

	public:
		SchoolBook(string name, string topic, int classNumber);		
		string GetInfo();
		void Show();
};

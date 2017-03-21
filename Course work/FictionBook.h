#pragma once
#include "Book.h"
class FictionBook: public Book
{
	private:
		string author;
		int publishingYear;

	public:
		FictionBook(string name, string author, int publishingYear);
		string GetInfo();
		void Show();
};

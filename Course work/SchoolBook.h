#pragma once
#include "Book.h"

class SchoolBook:public Book
{
	private:
		string subject;
		int classNumber;

	public:
		SchoolBook(string name, string author, int pages, string subject, int classNum);

		~SchoolBook();

		string GetSubject() const;

		int GetClassNumber() const;

		void Show() const;
};

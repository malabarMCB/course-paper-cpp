#pragma once
#include "Book.h"

class SchoolBook:public Book
{
	private:
		char *subject;
		int classNumber;

	public:
		SchoolBook(char *name, char *author, int pages, char *subject, int classNum);

		~SchoolBook();

		char * GetSubject() const;

		int GetClassNumber() const;

		void Show() const;
};

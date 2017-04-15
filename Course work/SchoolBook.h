#pragma once
#include "Book.h"

class SchoolBook:public Book
{
	private:
		string subject;
		int classNumber;
		bool hasAnswers;

	public:
		SchoolBook(string name, string author, int pageCount, string publishingCity, int publishingYear,
			string publishingCompanyName, string language,string subject, int classNumber, bool hasAnswers);

		~SchoolBook();

		string GetSubject() const;

		int GetClassNumber() const;

		bool HasAnswers() const;

		void Show() const;
};

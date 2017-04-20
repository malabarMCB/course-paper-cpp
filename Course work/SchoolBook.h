#pragma once
#include "Book.h"

class SchoolBook:public Book
{
	private:
		string subject;
		unsigned int classNumber;
		bool hasAnswers;

	public:
		SchoolBook();

		SchoolBook(string name, string author, int pageCount,Publisher publisher,
			string language,string subject, int classNumber, bool hasAnswers);

		~SchoolBook();

		string GetSubject() const;

		int GetClassNumber() const;

		bool HasAnswers() const;

		friend ostream& operator<<(ostream& out, const SchoolBook& book);

		friend istream& operator >> (istream& in, SchoolBook& book);

		void Show() const;

		void Serialize(ofstream* in) const;
};

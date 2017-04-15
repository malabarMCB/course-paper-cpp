#include "SchoolBook.h"

SchoolBook::SchoolBook(string name, string author, int pageCount, string publishingCity, int publishingYear,
	string publishingCompanyName, string language,string subject, int classNumber,bool hasAnswers)
		:Book(name,author,pageCount,publishingCity,publishingYear,publishingCompanyName,language),
		subject(subject),classNumber(classNumber),hasAnswers(hasAnswers)
{

}

SchoolBook::~SchoolBook()
{

}

string SchoolBook::GetSubject() const
{
	return this->subject;
}

int SchoolBook::GetClassNumber() const
{
	return this->classNumber;
}

void SchoolBook::Show() const
{
	Book::Show();

	cout << "Subject: " << subject << "\n"
		<< "For " << classNumber << " class" << endl;
	cout << (hasAnswers) ? "With answers" : "without answers";
}

bool SchoolBook::HasAnswers() const
{
	return this->hasAnswers;
}


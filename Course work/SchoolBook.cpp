#include "SchoolBook.h"
using namespace std;

SchoolBook::SchoolBook(string name, string author, int pageCount, string publishingCity, int publishingYear,
	string publishingCompany, string language, bool hasAnswers)
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
	cout << "This is school book"<<endl;
}

bool SchoolBook::HasAnswers() const
{
	return this->hasAnswers;
}


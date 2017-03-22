#include "SchoolBook.h"
using namespace std;

SchoolBook::SchoolBook(string name, string author, int pages, string subject, int classNum)
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

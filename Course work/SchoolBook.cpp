#include "SchoolBook.h"
#include "iostream"
using namespace std;

//TODO add cunstructor and destructor

char * SchoolBook::GetSubject() const
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

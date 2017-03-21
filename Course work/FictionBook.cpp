#include "FictionBook.h"
#include "iostream"
using namespace std;

//TODO add constructor and destructor
char * FictionBook::GetGenre() const
{
	return this->genre;
}

int FictionBook::GetChapterCount() const
{
	return this->chapterCount;
}

void FictionBook::Show() const
{
	cout << "This is fiction book"<<endl;
}
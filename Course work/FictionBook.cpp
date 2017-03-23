#include "FictionBook.h"
using namespace std;

FictionBook::FictionBook(string name, string author, int pageCount, string publishingCity, int publishingYear,
	string publishingCompany, string language, string genre, int chapterCount, int volNumber)
{

}

FictionBook::~FictionBook()
{

}

string FictionBook::GetGenre() const
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

int FictionBook::GetVolNumber() const
{
	return this->volNumber;
}
#include "FictionBook.h"
using namespace std;

FictionBook::FictionBook(string name, string author, int pages, string genre, int chapters)
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
#include "FictionBook.h"


FictionBook::FictionBook(string name, string author, int pageCount,Publisher publisher, 
	string language, string genre, int chapterCount, int volNumber)
		:Book(name,author,pageCount,publisher,language), genre(genre),
		chapterCount(chapterCount),volNumber(volNumber)
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
	Book::Show();
	cout << "Genre: " << genre << "\n"
		<< "Number of chapters: " << chapterCount << "\n"
		<< "Vol number" << volNumber << endl;
}

int FictionBook::GetVolNumber() const
{
	return this->volNumber;
}
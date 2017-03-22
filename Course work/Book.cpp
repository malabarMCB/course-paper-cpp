#include "Book.h"
using namespace std;

Book::Book(string name, string author, int pages)
	:pageCount(pages)
{
	this->name = name;
	this->author = author;
}

Book::~Book()
{
	
}

int Book::GetPageCount() const
{
	return this->pageCount;
}

string Book::GetAutor() const
{
	return this->author;
}

string Book::GetName() const
{
	return this->name;
}
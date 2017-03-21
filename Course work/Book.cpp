#include "Book.h"
#include "iostream"
using namespace std;

Book::Book(char *name, char *author, int pages)
	:pageCount(pages)
{
	this->name = new char[strlen(name)];
	strcpy(this->name, name);
	this->author = new char[strlen(author)];
	strcpy(this->author, author);
}

Book::~Book()
{
	delete[] this->author;
	delete[] this->name;
}

int Book::GetPageCount() const
{
	return this->pageCount;
}

char * Book::GetAutor() const
{
	return this->author;
}

char * Book::GetName() const
{
	return this->name;
}
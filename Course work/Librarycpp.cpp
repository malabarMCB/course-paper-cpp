#include "Libraryh.h"

Library::Library()
{

}

Library::~Library()
{
	this->Clean();
}

void Library::Show() const
{
	cout << "Boooooks";
}

void Library::Push(Book *book)
{
	cout << "Book added";
}

void Library::Clean()
{
	cout << "Library deleted";
}

void Library::Sort()
{
	cout << "Library sorted";
}

void Library::PrintShoolbooksWithTopic(string topic) const
{
	cout << "Schoolbooks with topic...";
}
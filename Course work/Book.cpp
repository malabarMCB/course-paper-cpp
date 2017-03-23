#include "Book.h"
using namespace std;

Book::Book(string name, string author, int pageCount, string publishingCity, int publishingYear,
	string publishingCompany, string language/*,string info*/)
{

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

string Book::GetPublishingCity() const
{
	return this->publishingCity;
}

int Book::GetPublishingYear() const
{
	return this->publishingYear;
}

string Book::GetPublishingCompany() const
{
	return this->publishingCompany;
}

string Book::GetLanguage() const
{
	return this->language;
}
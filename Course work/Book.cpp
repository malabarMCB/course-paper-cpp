#include "Book.h"

Book::Book()
{

}

Book::Book(string name, string author, unsigned int pageCount,Publisher publisher, string language)
		:name(name),author(author),pageCount(pageCount),language(language),publisher(publisher)
{

}

Book::~Book()
{
	
}

unsigned int Book::GetPageCount() const
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
	return this->publisher.city;
}

unsigned int Book::GetPublishingYear() const
{
	return this->publisher.year;
}

string Book::GetPublishingCompanyName() const
{
	return this->publisher.companyName;
}

string Book::GetLanguage() const
{
	return this->language;
}

void Book::Show() const
{
	cout << "Name: " << name << "\n"
		<< "Author: " << author << "\n"
		<< "Pages: " << pageCount << "\n"
		<< "Language: " << language << "\n"
		<< "Published in " << publisher.city << ", "
		<< publisher.year << " by " << publisher.companyName << endl;
}
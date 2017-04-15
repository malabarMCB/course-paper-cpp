#pragma once
#include "string"
#include "iostream"
using namespace std;

struct Publisher {
	string city;
	int year;
	string companyName;
};

class Book
{
	protected:
		string name;
		string author;
		unsigned int pageCount;
		Publisher publisher;
		string language;

	public:
		Book(string name, string author, int pageCount,Publisher publisher,string language);

		virtual ~Book()=0;

		string GetName() const;

		string GetAutor() const;

		int GetPageCount() const;

		string GetPublishingCity() const;

		int GetPublishingYear() const;

		string GetPublishingCompanyName() const;

		string GetLanguage() const;

		virtual void Show() const;
};

#pragma once
#include "iostream"
using namespace std;

class Book
{
	protected:
		string name;
		string author;
		int pageCount;
		string publishingCity;
		int publishingYear;
		string publishingCompany;
		string language;
		//string info;
		//info- book`s topic(genre for fictionbook or subject for schoolbook)

	public:
		Book(string name, string author, int pageCount,string publishingCity, int publishingYear, 
			string publishingCompany,string language/*,string info*/);

		~Book();

		string GetName() const;

		string GetAutor() const;

		int GetPageCount() const;

		string GetPublishingCity() const;

		int GetPublishingYear() const;

		string GetPublishingCompany() const;

		string GetLanguage() const;

		//string GetInfo() const;

		virtual void Show() const;
};

#pragma once
#include "iostream"
using namespace std;

class Book
{
	protected:
		string name;
		string author;
		int pageCount;

	public:
		Book(string name, string author, int pageCount);

		~Book();

		string GetName() const;

		string GetAutor() const;

		int GetPageCount() const;

		virtual void Show() const;
};

#pragma once
#include "Book.h"

class FictionBook: public Book
{
	private:
		string genre;
		int chapterCount;
		int volNumber;

	public:
		FictionBook(string name, string author, int pageCount, string publishingCity, int publishingYear,
			string publishingCompanyName, string language, string genre, int chapterCount, int volNumber);

		~FictionBook();

		string GetGenre() const;

		int GetChapterCount() const;

		int GetVolNumber() const;

		void Show() const;
};

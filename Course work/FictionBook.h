#pragma once
#include "Book.h"

class FictionBook: public Book
{
	private:
		string genre;
		int chapterCount;

	public:
		FictionBook(string name, string author, int pages, string genre, int chapters);

		~FictionBook();

		string GetGenre() const;

		int GetChapterCount() const;

		void Show() const;
};

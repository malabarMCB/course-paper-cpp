#pragma once
#include "Book.h"
class FictionBook: public Book
{
	private:
		char *genre;
		int chapterCount;

	public:
		FictionBook(char *name, char *author, int pages, char *genre, int chapters);

		char *GetGenre() const;

		int GetChapterCount() const;

		void Show() const;
};

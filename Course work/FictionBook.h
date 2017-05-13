#pragma once
#include "Book.h"

class FictionBook: public Book
{
	private:
		string genre;
		unsigned int chapterCount;
		unsigned int volNumber;

	public:
		FictionBook();

		FictionBook(string name, string author, unsigned int pageCount, Publisher publisher,
			string language, string genre, unsigned int chapterCount, unsigned int volNumber);

		~FictionBook();

		string GetGenre() const;

		unsigned int GetChapterCount() const;

		unsigned int GetVolNumber() const;

		friend ostream& operator<<(ostream& out, const FictionBook& book);

		friend istream& operator>>(istream& in, FictionBook& book);

		void Show() const;

		void Serialize(ofstream* in) const;
};

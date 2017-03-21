#pragma once

class Book
{
	protected:
		char *name;
		char *author;
		int pageCount;

	public:
		Book(char *name, char *author, int pageCount);

		~Book();

		char *GetName() const;

		char *GetAutor() const;

		int GetPageCount() const;

		virtual void Show() const;
};

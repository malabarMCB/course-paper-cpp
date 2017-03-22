#pragma once
#include "Book.h"

//Stack
class Library
{
	private:

	public:

		Library();

		~Library();

		void Show() const;

		void Push(Book *book);

		void Clean();
		
		void Sort();

		void PrintShoolbooksWithTopic(string topic) const;
};

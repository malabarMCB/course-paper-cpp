#pragma once
#include "Book.h"

class BookCreator 
{

	protected:
		string name;
		string author;
		unsigned int pageCount;
		Publisher publisher;
		string language;

		void FlushCinBuffer();
		void Initialize();
	
	public:
		~BookCreator();

		virtual Book* Create()=0;
};

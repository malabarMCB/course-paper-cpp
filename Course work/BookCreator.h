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

		void Initialize();
	
	public:
		~BookCreator();

		//VS underlines it sometimes
		virtual Book* Create()=0;
};

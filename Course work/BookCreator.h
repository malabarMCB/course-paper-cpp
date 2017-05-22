/*
*Гриневич Дмитро БС-51
*Визначення класу BookCreator 
*/
#pragma once
#include "Book.h"

//абстрактний клас для фабричного методу(Factory Method)
class BookCreator 
{
	protected:
		string name;						//ім'я книги
		string author;						//автор книги
		unsigned int pageCount;				//кількість сторінок у книги
		Publisher publisher;				//видавник книги
		string language;					//мова, на якій написана книга

		void FlushCin() const;				//метод для очищення cin
		void Initialize();					//метод для заповнення полів
	
	public:
		virtual ~BookCreator();				//деструктор

		virtual Book* Create()=0;			//метод для створення екземплярів класу похідних від Book
};

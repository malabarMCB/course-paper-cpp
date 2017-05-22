/*
*Гриневич Дмитро БС-51
*Визначення класу FictionBook
*/
#pragma once
#include "Book.h"															// абстрактний клас Book

// клас FictionBook, який успадковує клас Book
class FictionBook: public Book
{
	private:
		string genre;														// жанр художньої книги
		unsigned int chapterCount;											// кількість глав у художній книзі
		unsigned int volNumber;												// номер тому художньої книги

	public:
		FictionBook();														// конструктор за замовчуванням

		FictionBook(string name, string author, 
			unsigned int pageCount, Publisher publisher,
			string language, string genre, 
			unsigned int chapterCount, unsigned int volNumber);				// конструктор з параметрами

		~FictionBook();														// деструктор

		string GetGenre() const;											// метод для отримання жанру художньої книги

		unsigned int GetChapterCount() const;								// метод для отримання кількості глав художньої книги

		unsigned int GetVolNumber() const;									// метод для отримання номеру тому художньої книги

		friend ostream& operator<<(ostream& out, const FictionBook& book);	// перевантаження виводу у потік

		friend istream& operator>>(istream& in, FictionBook& book);			// перевантаження вводу з потоку

		void Show() const;													// метод для відображення книги на консоль

		void Serialize(ofstream* out) const;								// метод для запису книги у потік
};

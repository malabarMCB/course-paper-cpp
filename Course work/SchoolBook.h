/*
*Гриневич Дмитро БС-51
*Визначення класу SchoolBook
*/
#pragma once
#include "Book.h"															// абстрактний клас Book

// клас SchoolBook, який успадковує клас Book
class SchoolBook:public Book
{
	private:
		string subject;														// предмет з якого підручник
		int classNumber;													// номер класу, для якого створений підручник
		bool hasAnswers;													// є чи немає відповідей у підручнику

	public:
		SchoolBook();														// конструктор за замовчуванням

		SchoolBook(string name, string author, 
			int pageCount,Publisher publisher,
			string language,string subject, 
			int classNumber, bool hasAnswers);								// конструктор з параметрами

		~SchoolBook();														// деструктор

		string GetSubject() const;											// метод для отримання предмету з якого підручник

		int GetClassNumber() const;											// метод для отримання номеру класу, для якого створений підручник

		bool HasAnswers() const;											// метод для отримання інформації, є чи немає відповідей у підручнику

		friend ostream& operator<<(ostream& out, const SchoolBook& book);	// перевантаження виводу у потік 

		friend istream& operator >> (istream& in, SchoolBook& book);		// перевантаження вводу з потоку

		void Show() const;													// метод для відображення книги на консоль

		void Serialize(ofstream* out) const;								// метод для запису книги у потік
};

/*
*Гриневич Дмитро БС-51
*Визначення класу Book
*/
#pragma once
#include "string"															// бібліотека для роботи з рядками 
#include "iostream"															// бібліотека для роботи з потоками
using namespace std;														// простір імен std

//структура, що описує видавника книги
struct Publisher {
	string city;															//місто, де була видана книга
	unsigned int year;														//рік, коли була видана книга
	string companyName;														//ім'я друкарської компанії
};

//абстрактний клас Book
class Book
{
	protected:
		string name;														//ім'я книги
		string author;														//автор книги
		unsigned int pageCount;												//кількість сторінок у книги
		Publisher publisher;												//видавник книги
		string language;													//мова, на якій написана книга

	public:
		Book();																// конструктор за замовчуванням

		Book(string name, string author
			, unsigned int pageCount,Publisher publisher,string language);	// конструктор з параметрами

		virtual ~Book();													// деструктор

		string GetName() const;												// метод для отримання ім'я книги

		string GetAutor() const;											// метод для отримання автора книги

		unsigned int GetPageCount() const;									// метод для отримання кількості сторінок книги

		string GetPublishingCity() const;									// метод для отримання міста, де була видана книга

		unsigned int GetPublishingYear() const;								// метод для отримання дати видання книги

		string GetPublishingCompanyName() const;							// метод для отримання ім'я компаній видавника книги

		string GetLanguage() const;											// метод для отримання мови, на якій написана книги

		virtual void Show() const;											// метод для відображення книги на консоль

		virtual void Serialize(ofstream* out) const = 0;					// метод для запису книги у потік
};

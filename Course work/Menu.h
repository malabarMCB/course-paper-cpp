/*
*Гриневич Дмитро БС-51
*Визначення класу Menu
*/
#pragma once
#include "LibrarySerializer.h"

//клас, що являє собою меню
class Menu
{
	private:

		Library* library;				//колекція типу стек

		LibrarySerializer* serializer;	//об'єкт, що здійснює серіалізацію та десеріалізацію колекції

		void CreateSchoolBook();		//метод для створення об'єкту типу SchoolBook та додавання його до колекції

		void CreateFictionBook();		//метод для створення об'єкту типу FictionBook та додавання його до колекції

		void ShowLibrary() const;		//метод для виведення колекції на консоль

		void RemoveLibrary();			//метод для очищення колекції

		void WriteToFile() const;		//метод для запису колекції у файл

		void ReadFormFile();			//метод для зчитування колекції з файлу

		void SortBooks() const;			//метод для сортування колеції

		void MakeRequest() const;		//метод для здійснення запиту до колекції

	public:
		Menu();							// конструктор за замовчуванням

		~Menu();						// деструктор

		void Run();						// метод для запуску меню
};

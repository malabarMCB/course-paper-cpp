/*
*Гриневич Дмитро БС-51
*Визначення класу Library
*/
#pragma once
#include "Book.h"

//структура, що описує вузол стеку
struct Node
{
	Book* value;											//значення, якє знаходиться у вузлі
	Node* next;												//наступний вузол
};

//клас, що являє собою стек
class Library
{
	private:
		Node* head;											//голова стеку
		void Swap(Node* left, Node* right);					// метод для перестановки елементів при сортуванні

	public:
		Library();											// конструктор за замовчуванням

		~Library();											// деструктор

		void Push(Book* book);								// метод додавання єлементу у стек

		void Pop();											// метод видалення єлемента зі стеку

		bool IsEmpty() const;								// метод, який надає інформацію про порожність стеку
		
		int Count() const;									// метод, який повертає кількість елементів у стеку
	
		void Clean();										// метод для очищення стеку

		void Print() const;									// метод для виведеня елеменів стеку на консоль

		Book* operator [](int index) const;					// індексатор
		
		void SortByBookName();								// метод для сортування елементів стеку за ім'ям

		void PrintShoolbooksWithTopic(string topic) const; // метод для виведення на консоль підручників по заданій темі(предмету)
};

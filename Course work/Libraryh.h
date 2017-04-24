#pragma once
#include "Book.h"

struct Node
{
	Book* value;
	Node* next;
};

//Stack
//Find more const methods and add smth to ctor
//Check whole stack because of Count() changing
class Library
{
	private:
		Node* head;

	public:
		Library();

		~Library();

		void Push(Book* book);

		void Pop();

		bool IsEmpty() const;
		
		int Count() const;
	
		void Clean();

		void Print() const;

		Book* operator [](int index) const;
		
		void Sort();

		void PrintShoolbooksWithTopic(string topic) const;
};

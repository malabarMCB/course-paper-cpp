#pragma once
#include "Book.h"

struct Node
{
	Book* value;
	Node* next;
};

//Stack
// Ask about void from Pop and Book* from Peek
class Library
{
	private:
		Node* head;
		int count;

	public:
		Library();

		~Library();

		void Push(Book *book);

		void Pop();

		Book* Peek() const;

		bool IsEmpty() const;
		
		int Count() const;
	
		void Clean();

		void Print() const;

		
		void Sort();

		void PrintShoolbooksWithTopic(string topic) const;
};

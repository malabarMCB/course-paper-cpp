#pragma once
#include "Book.h"

struct Node
{
	Book* value;
	Node* next;
};

//Stack
class Library
{
	private:
		Node* head;
		void Swap(Node* left, Node* right);

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
		
		void SortByBookName();

		void PrintShoolbooksWithTopic(string topic) const;
};

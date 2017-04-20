#include "Libraryh.h"

Library::Library():count(0)
{
	
}

Library::~Library()
{
	this->Clean();
}

void Library::Push(Book* book)
{
	if (IsEmpty()) {
		head = new Node;
		head->value = book;
		head->next = NULL;
	}
	else
	{
		Node *tmpHead = new Node;
		tmpHead->value = book;
		tmpHead->next = head;

		head = tmpHead;
	}

	count++;
}

void Library::Pop()
{
	if (IsEmpty())
	{
		cout << "Empty stack"<<endl;
		return;
	}
	
	Node *tmpHead = head;
	head = head->next;
	count--;

	delete tmpHead;
}

Book* Library::Peek() const
{
	if (IsEmpty())
	{
		cout << "Empty stack"<<endl;
		return NULL;
	}
	return head->value;
}

bool Library::IsEmpty() const
{
	return count == 0;
}

int Library::Count() const
{
	return count;
}

void Library::Clean()
{
	if (count == 0)
		return;

	int num = count;
	for (int i = 0;i < num;i++)
		Pop();
	count = 0;
}

Book* Library::operator [](int index) const
{
	if (index<0 || index>Count())
		return NULL;

	Node* current = head;
	for (int i = 0;i < index;i++)
		current = current->next;

	return current->value;

}

void Library::Print() const
{
	if (IsEmpty())
	{
		cout << "Empty stack"<<endl;
		return;
	}

	Node* current = head;
	for (int i = 0;i < count;i++)
	{
		cout << "Book " << i<<endl;
		current->value->Show();
		cout << "---"<<endl;

		current = current->next;
	}
}

void Library::Sort()
{
	cout << "Sorted"<<endl;
}

void Library::PrintShoolbooksWithTopic(string topic) const
{
	cout << "Schoolbooks with "<<topic<<endl;
}
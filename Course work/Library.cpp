#include "Libraryh.h"

Library::Library()
{
	head = new Node;
	head->value = NULL;
	head->next = NULL;
}

Library::~Library()
{
	this->Clean();
	delete head;
}

void Library::Push(Book* book)
{
	if (IsEmpty()) 
		head->value = book;
	else
	{
		Node *tmpHead = new Node;
		tmpHead->value = book;
		tmpHead->next = head;

		head = tmpHead;
	}
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

	delete tmpHead;
}

bool Library::IsEmpty() const
{
	return Count() == 0;
}

int Library::Count() const
{
	int count = 0;
	Node* current = head;
	do
	{
		if (current->value == NULL)
			break;
		count++;
		current = current->next;

	} while (current!= NULL);

	return count;
}

void Library::Clean()
{
	if (IsEmpty())
		return;

	int count = Count();
	for (int i = 0;i < count-1;i++)
		Pop();
	
	delete head->value;
	head->value = NULL;
}

Book* Library::operator [](int index) const
{
	if (index<0 || index>=Count())
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
	int count = Count();
	for (int i = 0;i <count;i++)
	{
		cout << "Book " << i<<endl;
		current->value->Show();
		cout << "---"<<endl;

		current = current->next;
	}
}

void Library::Swap(Node* left, Node* right)
{
	Book* tmp = left->value;
	left->value = right->value;
	right->value = tmp;
}

void Library::SortByBookName()
{
	int count = Count();

	for (int i = 0;i < count - 1;i++)
	{
		Node* current = head;

		for (int j = 0;j < count - i - 1;j++)
		{
			string str1 = current->value->GetName();
			string str2 = current->next->value->GetName();
			if (str1>str2)
				Swap(current, current->next);
			current = current->next;
		}
	}
}

void Library::PrintShoolbooksWithTopic(string topic) const
{
	cout << "Schoolbooks with "<<topic<<endl;
}
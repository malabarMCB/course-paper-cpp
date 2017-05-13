#include "Libraryh.h"
#include "SchoolBook.h"

Library::Library()
{
	head = NULL;
}

Library::~Library()
{
	this->Clean();
	delete head;
}

void Library::Push(Book* book)
{
	Node *tmpHead = new Node;
	tmpHead->value = book;
	tmpHead->next = head;
	head = tmpHead;
}

void Library::Pop()
{
	if (IsEmpty())
	{
		cout << "Empty stack"<<endl;
		return;
	}
	
	Node *toDelete = head;
	head = head->next;

	delete toDelete;
}

bool Library::IsEmpty() const
{
	return head == NULL;
}

int Library::Count() const
{
	int count = 0;
	Node* current = head;

	while (current!=NULL)
	{
		count++;
		current = current->next;
	}

	return count;
}

void Library::Clean()
{
	if (IsEmpty())
		return;

	int count = Count();
	for (int i = 0;i < count;i++)
		Pop();
	
	head = NULL;
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
			string left = current->value->GetName();
			string right = current->next->value->GetName();
			if (left>right)
				Swap(current, current->next);
			current = current->next;
		}
	}
}

void Library::PrintShoolbooksWithTopic(string topic) const
{
	/*Node* current = head;
	while()*/
}
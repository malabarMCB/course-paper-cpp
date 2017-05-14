/*
*Гриневич Дмитро БС-51
*Визначення методів класу Library
*/
#include "Libraryh.h"
#include "SchoolBook.h"
//-------------------------------------------------------------------------
// конструктор за замовчуванням
Library::Library()
{
	head = NULL;
}
//-------------------------------------------------------------------------
// деструктор
Library::~Library()
{
	this->Clean();
	delete head;
}
//-------------------------------------------------------------------------
// метод додавання єлементу у стек
void Library::Push(Book* book)
{
	Node *tmpHead = new Node;
	tmpHead->value = book;
	tmpHead->next = head;
	head = tmpHead;
}
//-------------------------------------------------------------------------
// метод видалення єлемента зі стеку
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
//-------------------------------------------------------------------------
// метод, який надає інформацію про порожність стеку
bool Library::IsEmpty() const
{
	return head == NULL;
}
//-------------------------------------------------------------------------
// метод, який повертає кількість елементів у стеку
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
//-------------------------------------------------------------------------
// метод для очищення стеку
void Library::Clean()
{
	if (IsEmpty())
		return;

	int count = Count();
	for (int i = 0;i < count;i++)
		Pop();
	
	head = NULL;
}
//-------------------------------------------------------------------------
// індексатор
Book* Library::operator [](int index) const
{
	if (index<0 || index>=Count())
		return NULL;

	Node* current = head;
	for (int i = 0;i < index;i++)
		current = current->next;

	return current->value;

}
//-------------------------------------------------------------------------
// метод для виведеня елеменів стеку на консоль
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
//-------------------------------------------------------------------------
// метод для перестановки елементів при сортуванні
void Library::Swap(Node* left, Node* right)
{
	Book* tmp = left->value;
	left->value = right->value;
	right->value = tmp;
}
//-------------------------------------------------------------------------
// метод для сортування елементів стеку за ім'ям
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
//-------------------------------------------------------------------------
// метод для виведення на консоль підручників по заданій темі(предмету)
void Library::PrintShoolbooksWithTopic(string topic) const
{
	Node* current = head;
	while (current != NULL)
	{
		SchoolBook* schoolBook = dynamic_cast<SchoolBook*>(current->value);
		if (schoolBook != NULL &&  schoolBook->GetSubject() == topic)
			schoolBook->Show();
		
		current = current->next;
	}
}
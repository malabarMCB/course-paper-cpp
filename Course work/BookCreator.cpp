/*
*Гриневич Дмитро БС-51
*Визначення методів класу BookCreator
*/
#include "BookCreator.h"
//-------------------------------------------------------------------------
//деструктор
BookCreator::~BookCreator() {

}
//-------------------------------------------------------------------------
//метод для очищення буферу cin
void BookCreator::FlushCin() const
{
	cin.clear();
	cin.ignore();
}
//-------------------------------------------------------------------------
//метод для заповнення полів
void BookCreator::Initialize()
{
	cout << "Enter name: ";
	getline(cin, name, '\n');

	cout << "Enter author: ";
	getline(cin, author, '\n');

	cout << "Enter number of pages: ";
	while (!(cin >> pageCount) || cin.fail() || pageCount<0)
	{
		cout << "Please, enter correct data" << endl;
		FlushCin();
	}

	cout << "Enter language: ";
	cin >> language;

	FlushCin();

	cout << "Enter publisher company name: ";
	getline(cin, publisher.companyName, '\n');

	cout << "Enter publishing city: ";
	getline(cin, publisher.city, '\n');

	cout << "Enter publishing year: ";
	while (!(cin >> publisher.year) || cin.fail() || publisher.year<0)
	{
		cout << "Please, enter correct data" << endl;
		FlushCin();
	}

	FlushCin();
}
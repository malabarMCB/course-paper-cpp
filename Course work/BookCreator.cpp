#include "BookCreator.h"

BookCreator::~BookCreator() {

}

void BookCreator::FlushCinBuffer()
{
	cin.clear();
	cin.ignore(INT_MAX, '\n');
}

void BookCreator::Initialize()
{
	cout << "Enter name: ";
	getline(cin, name, '\n');

	cout << "Enter author: ";
	getline(cin, author, '\n');

	cout << "Enter number of pages: ";
	cin >> pageCount;

	cout << "Enter language: ";
	cin >> language;

	FlushCinBuffer();

	cout << "Enter publisher company name: ";
	getline(cin, publisher.companyName, '\n');

	cout << "Enter publishing city: ";
	getline(cin, publisher.city, '\n');

	cout << "Enter publishing year: ";
	cin >> publisher.year;

	FlushCinBuffer();
}
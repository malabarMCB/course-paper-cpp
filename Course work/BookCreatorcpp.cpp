#include "BookCreator.h"

BookCreator::~BookCreator() {

}

void BookCreator::Initialize()
{
	cout << "Enter name ";
	cin >> name;

	cout << "Enter author ";
	cin >> author;

	cout << "Enter number of pages ";
	cin >> pageCount;

	cout << "Enter language";
	cin >> language;

	cout << "Enter publisher company name";
	cin >> publisher.companyName;

	cout << "Enter publishing city";
	cin >> publisher.city;

	cout << "Enter publishing year";
	cin >> publisher.year;
}
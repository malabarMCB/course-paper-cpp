/*
*Гриневич Дмитро БС-51
*Визначення методів класу SchoolBookCreator
*/
#include "SchoolBookCreator.h"
//-------------------------------------------------------------------------
//деструктор
SchoolBookCreator::~SchoolBookCreator()
{

}
//-------------------------------------------------------------------------
//метод для створення єкземпляру типу SchoolBook
SchoolBook* SchoolBookCreator::Create()
{
	Initialize();

	string subject;
	unsigned int classNumber;
	bool hasAnswers;

	cout << "Enter subject: ";
	getline(cin, subject, '\n');

	cout << "Enter class number: ";
	while (!(cin >> classNumber) || cin.fail() || classNumber<0)
	{
		cout << "Please, enter correct data" << endl;
		FlushCin();
	}

	int answer;
	do
	{
		cout << "With answers? (no-0, yes-1): ";
		cin >> answer;
		switch (answer)
		{
			case 0:
				hasAnswers = false;
				break;
			case 1:
				hasAnswers = true;
				break;
			default:
				answer = 2;
				break;
		}
	} while (answer==2);

	return new SchoolBook(name, author, pageCount, publisher, language, subject, classNumber, hasAnswers);
}
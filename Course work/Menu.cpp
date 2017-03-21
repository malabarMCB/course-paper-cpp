#include "Menu.h"
#include "iostream"
using namespace std;

void Menu::Run()
{
	int choise;
	char s[10];
	do
	{
		system("cls");
		cout << "--------------------MENU--------------------" <<endl;
		cout << "<1>. Create schoolbook`s object" <<endl;
		cout << "<2>. Create fiction book`s object" <<endl;
		cout << "<3>. Show the library" <<endl;
		cout << "<4>. Remove the library" <<endl;
		cout << "<5>. Save to file" <<endl;
		cout << "<6>. Load from the file" <<endl;
		cout << "<7>. Sort objects" <<endl;
		cout << "<8>. Make request" <<endl;
		cout << "<9>. Leave the program" <<endl;

		cin.getline(s, 10);
		choise = atoi(s);
		switch (choise)
		{
			case 1:
			{
				system("cls");
				this->CreateSchoolBook();
				system("pause");
				break;
			}
			case 2:
			{
				system("cls");
				this->CreateFictionBook();
				system("pause");
				break;
			}
			case 3:
			{
				system("cls");
				this->ShowLibrary();
				system("pause");
				break;
			}
			case 4:
			{
				system("cls");
				this->RemoveLibrary();
				system("pause");
				break;
			}
			case 5:
			{
				system("cls");
				this->WriteToFile();
				system("pause");
				break;
			}
			case 6:
			{
				system("cls");
				this->ReadFormFile();
				system("pause");
				break;
			}
			case 7:
			{
				system("cls");
				this->SortBooks();
				system("pause");
				break;
			}
			case 8:
			{
				system("cls");
				this->MakeRequest();
				system("pause");
				break;
			}
			case 9:
			{
				system("cls");
				//TODO add exit
				system("pause");
				break;
			}
			default:
			{
				cout << "Incorrect choise" << endl;
				system("pause");
			}
		}
	} while (choise != 10);
}

#include "Menu.h"

Menu::Menu()
{
	this->library = new Library();
}

Menu::~Menu()
{
	delete library;
}

void Menu::CreateSchoolBook()
{
	cout << "Enter parameters";
	//library->Push();
}

void Menu::CreateFictionBook()
{
	cout << "Enter parameters";
	//library->Push();
}

void Menu::ShowLibrary() const
{
	library->Show();
}

void Menu::RemoveLibrary()
{
	library->Clean();
}

int Menu::WriteToFile()
{
	cout << "Library serizlized";
	return 1;
}

int Menu::ReadFormFile()
{
	cout << "Library deserialized";
	return 1;
}

void Menu::SortBooks()
{
	cout << "Sorted";
	library->Sort();
}

void Menu::MakeRequest()
{
	library->PrintShoolbooksWithTopic("test topic");
}

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
				CreateSchoolBook();
				system("pause");
				break;
			}
			case 2:
			{
				system("cls");
				CreateFictionBook();
				system("pause");
				break;
			}
			case 3:
			{
				system("cls");
				ShowLibrary();
				system("pause");
				break;
			}
			case 4:
			{
				system("cls");
				RemoveLibrary();
				system("pause");
				break;
			}
			case 5:
			{
				system("cls");
				WriteToFile();
				system("pause");
				break;
			}
			case 6:
			{
				system("cls");
				ReadFormFile();
				system("pause");
				break;
			}
			case 7:
			{
				system("cls");
				SortBooks();
				system("pause");
				break;
			}
			case 8:
			{
				system("cls");
				MakeRequest();
				system("pause");
				break;
			}
			case 9:
			{
				system("cls");
				//Exit
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

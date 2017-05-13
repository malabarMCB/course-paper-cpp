#include "Menu.h"
#include "FictionBookCreator.h"
#include "SchoolBookCreator.h"

Menu::Menu()
{
	library = new Library();
	serializer = new LibrarySerializer;
}

Menu::~Menu()
{
	delete library;
	delete serializer;
}

void Menu::CreateSchoolBook()
{
	SchoolBookCreator bookCreator;
	Book* book = bookCreator.Create();

	library->Push(book);
}

void Menu::CreateFictionBook()
{
	FictionBookCreator bookCreator;
	Book* book = bookCreator.Create();

	library->Push(book);
}

void Menu::ShowLibrary() const
{
	library->Print();
}

void Menu::RemoveLibrary()
{
	library->Clean();
	cout << "Library cleaned" << endl;
}

void Menu::WriteToFile()
{
	string path="collection.dat";
	//cout << "Enter path: ";
	//cin >> path;

	serializer->Serialize(*library, path);
}

void Menu::ReadFormFile()
{
	string path = "collection.dat";
	//cout << "Enter path: ";
	//cin >> path;

	serializer->Deserialize(library, path);
}

void Menu::SortBooks()
{
	library->SortByBookName();
	cout << "Library sorted" << endl;
}

void Menu::MakeRequest()
{
	string topic;
	cout << "Enter topic" << endl;
	cin >> topic;
	library->PrintShoolbooksWithTopic(topic);
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
		cout << "<7>. Sort books" <<endl;
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
			default:
			{
				if (choise < 0 || choise>9)
				{
					cout << "Incorrect choise" << endl;
					system("pause");
				}
				break;
			}
		}
	} while (choise != 9);
}

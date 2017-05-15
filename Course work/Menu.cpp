/*
*Гриневич Дмитро БС-51
*Визначення методів класу Menu
*/
#include "Menu.h"
#include "FictionBookCreator.h"
#include "SchoolBookCreator.h"
//-------------------------------------------------------------------------
// конструктор за замовчуванням
Menu::Menu()
{
	library = new Library;
	serializer = new LibrarySerializer;
}
//-------------------------------------------------------------------------
// деструктор
Menu::~Menu()
{
	delete library;
	delete serializer;
}
//-------------------------------------------------------------------------
//метод для створення об'єкту типу SchoolBook та додавання його до колекції
void Menu::CreateSchoolBook()
{
	SchoolBookCreator bookCreator;
	Book* book = bookCreator.Create();

	library->Push(book);
}
//-------------------------------------------------------------------------
//метод для створення об'єкту типу FictionBook та додавання його до колекції
void Menu::CreateFictionBook()
{
	FictionBookCreator bookCreator;
	Book* book = bookCreator.Create();

	library->Push(book);
}
//-------------------------------------------------------------------------
//метод для виведення колекції на консоль
void Menu::ShowLibrary() const
{
	library->Print();
}
//-------------------------------------------------------------------------
//метод для очищення колекції
void Menu::RemoveLibrary()
{
	library->Clean();
	cout << "Library cleaned" << endl;
}
//-------------------------------------------------------------------------
//метод для запису колекції у файл
void Menu::WriteToFile() const
{
	string path;
	cout << "Enter path: ";
	cin >> path;

	serializer->Serialize(*library, path);
}
//-------------------------------------------------------------------------
//метод для зчитування колекції з файлу
void Menu::ReadFormFile()
{
	string path;
	cout << "Enter path: ";
	cin >> path;

	serializer->Deserialize(library, path);
}
//-------------------------------------------------------------------------
//метод для сортування колеції
void Menu::SortBooks() const
{
	library->SortByBookName();
	cout << "Library sorted" << endl;
}
//-------------------------------------------------------------------------
//метод для здійснення запиту до колекції
void Menu::MakeRequest() const
{
	string topic;
	cout << "Enter topic" << endl;
	cin >> topic;

	cout<<"Number of schoolbooks with "<<topic<<": "<<library->GetShoolbookCountByTopic(topic)<<endl;
}
//-------------------------------------------------------------------------
// метод для запуску меню
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

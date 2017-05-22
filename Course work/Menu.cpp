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

void Menu::RemoveLastElement()
{
	library->Pop();
}

void Menu::GetLibraryCount() const
{
	cout << "Number of books: " << library->Count()<<endl;
}

void Menu::IsLibraryEmpty() const
{
	cout << ((library->IsEmpty()) ? "Library is empty" : "Library isn`t empty")<<endl;
}

void Menu::Run()
{
	int choise;
	char s[10];
	do
	{
		system("cls");
		cout << "--------------------MENU--------------------" <<endl;
		cout << "<1>.  Create schoolbook`s object" <<endl;
		cout << "<2>.  Create fiction book`s object" <<endl;
		cout << "<3>.  Show the library" <<endl;
		cout << "<4>.  Remove last book" << endl;
		cout << "<5>.  Show number of books in the library" << endl;
		cout << "<6>.  Is the library empty?" << endl;
		cout << "<7>.  Remove the library" <<endl;
		cout << "<8>.  Save to file" <<endl;
		cout << "<9>.  Load from the file" <<endl;
		cout << "<10>. Sort books" <<endl;
		cout << "<11>. Make request" <<endl;
		cout << "<12>. Leave the program" <<endl;

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
				RemoveLastElement();
				system("pause");
				break;
			}
			case 5:
			{
				system("cls");
				GetLibraryCount();
				system("pause");
				break;
			}
			case 6:
			{
				system("cls");
				IsLibraryEmpty();
				system("pause");
				break;
			}
			case 7:
			{
				system("cls");
				RemoveLibrary();
				system("pause");
				break;
			}
			case 8:
			{
				system("cls");
				WriteToFile();
				system("pause");
				break;
			}
			case 9:
			{
				system("cls");
				ReadFormFile();
				system("pause");
				break;
			}
			case 10:
			{
				system("cls");
				SortBooks();
				system("pause");
				break;
			}
			case 11:
			{
				system("cls");
				MakeRequest();
				system("pause");
				break;
			}
			default:
			{
				if (choise < 0 || choise>12)
				{
					cout << "Incorrect choise" << endl;
					system("pause");
				}
				break;
			}
		}
	} while (choise != 12);
}

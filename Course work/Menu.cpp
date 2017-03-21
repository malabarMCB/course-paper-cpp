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
		cout << "<8>. Do request" <<endl;
		cout << "<9>. Leave the program" <<endl;

		cin.getline(s, 10);
		choise = atoi(s);
		switch (choise)
		{
			case 1:
			{
				system("cls");
				/*create_passenger();*/
				system("pause");
				break;
			}
			case 2:
			{
				system("cls");
				/*create_freight();*/
				system("pause");
				break;
			}
			case 3:
			{
				system("cls");
				/*show_some();*/
				system("pause");
				break;
			}
			case 4:
			{
				system("cls");
				/*remove_some();*/
				system("pause");
				break;
			}
			case 5:
			{
				system("cls");
				/*save_file();*/
				system("pause");
				break;
			}
			case 6:
			{
				system("cls");
				/*load_from_file();*/
				system("pause");
				break;
			}
			case 7:
			{
				system("cls");
				/*sort_objects();*/
				system("pause");
				break;
			}
			case 8:
			{
				system("cls");
				/*do_request();*/
				system("pause");
				break;
			}
			case 9:
			{
				system("cls");
				/*leave_program();*/
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

#include "Menu.h"

void main()
{
	//TODO add exit in Menu Run() method
	//TODO add normal cunstructor for book`s inherit classes

	Menu *menu= new Menu();

	menu->Run();

	delete menu;
}
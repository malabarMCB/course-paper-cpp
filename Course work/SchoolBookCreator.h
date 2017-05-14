/*
*Гриневич Дмитро БС-51
*Визначення класу SchoolBookCreator
*/
#pragma once
#include "BookCreator.h"
#include "SchoolBook.h"

//конекретний клас для фабричного методу(Factory Method)
class SchoolBookCreator: public BookCreator
{
	public:
		~SchoolBookCreator();	//деструктор

		SchoolBook* Create();	//метод для створення єкземпляру типу SchoolBook
};

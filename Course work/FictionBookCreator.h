/*
*Гриневич Дмитро БС-51
*Визначення класу FictionBookCreator
*/
#pragma once
#include "BookCreator.h"
#include "FictionBook.h"

//конекретний клас для фабричного методу(Factory Method)
class FictionBookCreator : public BookCreator
{

	public:
		~FictionBookCreator();	//деструктор

		FictionBook* Create();	//метод для створення єкземпляру типу FictionBook
};

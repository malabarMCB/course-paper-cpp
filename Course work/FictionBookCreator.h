#pragma once
#include "BookCreator.h"
#include "FictionBook.h"

class FictionBookCreator : public BookCreator
{

	public:
		~FictionBookCreator();

		FictionBook Create();
};

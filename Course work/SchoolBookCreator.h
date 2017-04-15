#pragma once
#include "BookCreator.h"
#include "SchoolBook.h"

class SchoolBookCreator: public BookCreator
{
	public:
		~SchoolBookCreator();

		SchoolBook Create();
};

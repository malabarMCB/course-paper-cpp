#pragma once
#include <string>
using namespace std;

class Book
{
	protected:
		string name;

	public:
		Book(string name);
		string GetName();

		virtual string GetInfo();
		virtual void Show();
};

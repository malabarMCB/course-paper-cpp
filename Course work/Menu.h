#pragma once
#include "Libraryh.h"

class Menu
{
	private:
		void CreateSchoolBook();

		void CreateFictionBook();

		void ShowLibrary();

		void RemoveLibrary();

		int WriteToFile();

		int ReadFormFile();

		void SortBooks();

		void MakeRequest();

	public:
		void Run();
};

#pragma once
#include "Libraryh.h"

class Menu
{
	private:

		Library *library;

		void CreateSchoolBook();

		void CreateFictionBook();

		void ShowLibrary() const;

		void RemoveLibrary();

		int WriteToFile();

		int ReadFormFile();

		void SortBooks();

		void MakeRequest();

	public:
		Menu();

		~Menu();

		void Run();
};

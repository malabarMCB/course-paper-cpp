#pragma once
#include "Libraryh.h"

class Menu
{
	private:
		void CreateSchoolBook();

		void FictionBook();

		void ShowLibrary(Library *library);

		void RemoveLibrary(Library *library);

		int WriteToFile(Library &library);

		int ReadFormFile(Library *library);

		void SortBooks(Library *library);

		void DoRequest(Library *library);

	public:
		void Run();
};

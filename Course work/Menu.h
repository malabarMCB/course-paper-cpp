#pragma once
#include "LibrarySerializer.h"

class Menu
{
	private:

		Library* library;

		LibrarySerializer* serializer;

		void CreateSchoolBook();

		void CreateFictionBook();

		void ShowLibrary() const;

		void RemoveLibrary();

		void WriteToFile();

		void ReadFormFile();

		void SortBooks();

		void MakeRequest();

	public:
		Menu();

		~Menu();

		void Run();
};

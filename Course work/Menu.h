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

		void WriteToFile() const;

		void ReadFormFile();

		void SortBooks() const;

		void MakeRequest() const;

	public:
		Menu();

		~Menu();

		void Run();
};

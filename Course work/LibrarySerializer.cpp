/*
*Гриневич Дмитро БС-51
*Визначення методів класу LibrarySerializer
*/
#include "LibrarySerializer.h"
#include "fstream"							//бібліотека для роботи з потоком
#include "FictionBook.h"
#include "SchoolBook.h"
//-------------------------------------------------------------------------
// деструктор
LibrarySerializer::~LibrarySerializer()
{

}
//-------------------------------------------------------------------------
// метод для серіалізації колекції
void LibrarySerializer::Serialize(Library& library, string path) const
{
	if (library.IsEmpty())
	{
		cout << "SERIALIZATION ERROR! Empty library"<<endl;
		return;
	}

	ofstream streamToFile(path);

	int length = library.Count();
	for (int i = 0;i <length;i++)
		library[i]->Serialize(&streamToFile);

	streamToFile.close();

	cout << "Serialization completed"<<endl;
}
//-------------------------------------------------------------------------
// метод для десеріалізації колекції
void LibrarySerializer::Deserialize(Library* library, string path) const
{
	ifstream streamFromFile(path);

	if (!streamFromFile.is_open())
	{
		cout << "DESEREALIZATION ERROR! Incorrect file name" << endl;
		return;
	}

	FictionBook* fictionBook;
	SchoolBook* schoolBook;
	string bookType;

	getline(streamFromFile,bookType);
	while(!streamFromFile.eof())
	{
		if (bookType == "FictionBook")
		{
			fictionBook = new FictionBook();
			streamFromFile >> (*fictionBook);
			library->Push(fictionBook);
		}
		else if (bookType == "SchoolBook")
		{
			schoolBook = new SchoolBook();
			streamFromFile >> (*schoolBook);
			library->Push(schoolBook);
		}


		getline(streamFromFile, bookType);
	}

	streamFromFile.close();

	cout << "Deserialization completed" << endl;
}

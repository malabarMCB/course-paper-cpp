#include "LibrarySerializer.h"
#include "fstream"
#include "FictionBook.h"
#include "SchoolBook.h"

LibrarySerializer::~LibrarySerializer()
{

}

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

void LibrarySerializer::Deserialize(Library* library, string path) const
{
	ifstream streamFromFile(path);

	if (!streamFromFile.is_open())
		cout << "DESEREALIZATION ERROR! Incorrect file name" << endl;

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

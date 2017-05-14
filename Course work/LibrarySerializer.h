/*
*Гриневич Дмитро БС-51
*Визначення класу LibrarySerializer
*/
#pragma once
#include "Libraryh.h"

// клас LibrarySerializer, який відповідає за серіалізацію колекції Library
class LibrarySerializer
{
	public:
		~LibrarySerializer();									// деструктор

		void Serialize(Library& library, string path) const;	// метод для серіалізації колекції 

		void Deserialize(Library* library, string path) const;	// метод для десеріалізації колекції 
};

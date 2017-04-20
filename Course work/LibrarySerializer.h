#pragma once
#include "Libraryh.h"

class LibrarySerializer
{
	public:
		~LibrarySerializer();

		void Serialize(Library* library, string path) const;

		void Deserialize(Library* library, string path) const;
};

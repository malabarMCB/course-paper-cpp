/*
*Гриневич Дмитро БС-51
*Визначення методів класу FictionBook
*/
#include "FictionBook.h"
#include "fstream" //бібліотека для роботи з файлом
//-------------------------------------------------------------------------
// конструктор за замовчуванням
FictionBook::FictionBook()
{

}
//-------------------------------------------------------------------------
// конструктор з параметрами
FictionBook::FictionBook(string name, string author, unsigned int pageCount,Publisher publisher,
	string language, string genre, unsigned int chapterCount, unsigned int volNumber)
		:Book(name,author,pageCount,publisher,language), genre(genre),
		chapterCount(chapterCount),volNumber(volNumber)
{

}
//-------------------------------------------------------------------------
// деструктор
FictionBook::~FictionBook()
{

}
//-------------------------------------------------------------------------
// метод для отримання жанру художньої книги
string FictionBook::GetGenre() const
{
	return this->genre;
}
//-------------------------------------------------------------------------
// метод для отримання кількості глав художньої книги
unsigned int FictionBook::GetChapterCount() const
{
	return this->chapterCount;
}
//-------------------------------------------------------------------------
// метод для відображення книги на консоль
void FictionBook::Show() const
{
	Book::Show();
	cout << "Genre: " << genre << "\n"
		<< "Number of chapters: " << chapterCount << "\n"
		<< "Vol number " << volNumber << endl;
}
//-------------------------------------------------------------------------
// метод для отримання номеру тому художньої книги
unsigned int FictionBook::GetVolNumber() const
{
	return this->volNumber;
}
//-------------------------------------------------------------------------
// перевантаження виводу у потік
ostream& operator<<(ostream& out, const FictionBook& book)
{
	out << book.GetName() <<"\n"
		<< book.GetAutor() << "\n"
		<< book.GetPageCount() << "\n"
		<< book.GetPublishingCity() << "\n"
		<< book.GetPublishingCompanyName() << "\n"
		<< book.GetPublishingYear() << "\n"
		<< book.GetLanguage() << "\n"
		<< book.GetGenre() << "\n"
		<< book.GetChapterCount() << "\n"
		<< book.GetVolNumber() << endl;

	return out;
}
//-------------------------------------------------------------------------
// перевантаження вводу з потоку
istream& operator>>(istream& in, FictionBook& book)
{
	bool fail = false;

	getline(in,book.name);
	getline(in, book.author);

	in >> book.pageCount;
	in.ignore();
	if (in.fail())
	{
		in.clear();
		fail = true;
	}

	getline(in, book.publisher.city);
	getline(in, book.publisher.companyName);

	in >> book.publisher.year;
	in.ignore();
	if (in.fail())
	{
		in.clear();
		fail = true;
	}

	getline(in, book.language);
	getline(in, book.genre);

	in >> book.chapterCount;
	if (in.fail())
	{
		in.clear();
		fail = true;
	}

	in >> book.volNumber;
	in.ignore();
	if (in.fail())
	{
		in.clear();
		fail = true;
	}

	if (fail)
		throw exception();

	return in;
}
//-------------------------------------------------------------------------
// метод для запису книги у потік
void FictionBook::Serialize(ofstream* out) const
{
	*out <<"FictionBook"<< endl;
	*out << *this;
}
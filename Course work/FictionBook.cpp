#include "FictionBook.h"
#include "fstream"

FictionBook::FictionBook()
{

}

FictionBook::FictionBook(string name, string author, unsigned int pageCount,Publisher publisher,
	string language, string genre, unsigned int chapterCount, unsigned int volNumber)
		:Book(name,author,pageCount,publisher,language), genre(genre),
		chapterCount(chapterCount),volNumber(volNumber)
{

}

FictionBook::~FictionBook()
{

}

string FictionBook::GetGenre() const
{
	return this->genre;
}

unsigned int FictionBook::GetChapterCount() const
{
	return this->chapterCount;
}

void FictionBook::Show() const
{
	Book::Show();
	cout << "Genre: " << genre << "\n"
		<< "Number of chapters: " << chapterCount << "\n"
		<< "Vol number " << volNumber << endl;
}

unsigned int FictionBook::GetVolNumber() const
{
	return this->volNumber;
}

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

istream& operator>>(istream& in, FictionBook& book)
{
	getline(in,book.name);
	getline(in, book.author);

	in >> book.pageCount;
	in.ignore();

	getline(in, book.publisher.city);
	getline(in, book.publisher.companyName);

	in >> book.publisher.year;
	in.ignore();

	getline(in, book.language);
	getline(in, book.genre);
	in >> book.chapterCount;
	in >> book.volNumber;
	in.ignore();

	return in;
}

void FictionBook::Serialize(ofstream* out) const
{
	*out <<"FictionBook"<< endl;
	*out << *this;
}
/*
*Гриневич Дмитро БС-51
*Визначення методів класу SchoolBook
*/
#include "SchoolBook.h"
#include "fstream" //бібліотека для роботи з потоком
//-------------------------------------------------------------------------
// конструктор за замовчуванням
SchoolBook::SchoolBook()
{

}
//-------------------------------------------------------------------------
// конструктор з параметрами
SchoolBook::SchoolBook(string name, string author, unsigned int pageCount,Publisher publisher
			,string language,string subject, unsigned int classNumber,bool hasAnswers)
		:Book(name,author,pageCount,publisher,language),
		subject(subject),classNumber(classNumber),hasAnswers(hasAnswers)
{

}
//-------------------------------------------------------------------------
// деструктор
SchoolBook::~SchoolBook()
{

}
//-------------------------------------------------------------------------
// метод для отримання предмету з якого підручник
string SchoolBook::GetSubject() const
{
	return this->subject;
}
//-------------------------------------------------------------------------
// метод для отримання номеру класу, для якого створений підручник
unsigned int SchoolBook::GetClassNumber() const
{
	return this->classNumber;
}
//-------------------------------------------------------------------------
// метод для відображення книги на консоль
void SchoolBook::Show() const
{
	Book::Show();

	cout << "Subject: " << subject << "\n"
		<< "For " << classNumber << " class" << endl;
	cout << ((hasAnswers) ? "With answers" : "without answers")<<endl;
}
//-------------------------------------------------------------------------
// метод для отримання інформації, є чи немає відповідей у підручнику
bool SchoolBook::HasAnswers() const
{
	return this->hasAnswers;
}
//-------------------------------------------------------------------------
// перевантаження виводу у потік
ostream& operator<<(ostream& out, const SchoolBook& book)
{
	out << book.GetName() << "\n"
		<< book.GetAutor() << "\n"
		<< book.GetPageCount() << "\n"
		<< book.GetPublishingCity() << "\n"
		<< book.GetPublishingCompanyName() << "\n"
		<< book.GetPublishingYear() << "\n"
		<< book.GetLanguage() << "\n"
		<< book.GetSubject() << "\n"
		<< book.GetClassNumber() << "\n"
		<< book.HasAnswers() << endl;

	return out;
}
//-------------------------------------------------------------------------
// перевантаження вводу з потоку
istream& operator >> (istream& in, SchoolBook& book)
{
	getline(in, book.name);
	getline(in, book.author);

	in >> book.pageCount;
	in.ignore();

	getline(in, book.publisher.city);
	getline(in, book.publisher.companyName);

	in >> book.publisher.year;
	in.ignore();

	getline(in, book.language);
	getline(in, book.subject);
	in >> book.classNumber;
	in >> book.hasAnswers;
	in.ignore();

	return in;
}
//-------------------------------------------------------------------------
// метод для запису книги у потік
void SchoolBook::Serialize(ofstream* out) const
{
	*out <<"SchoolBook" << endl;
	*out << *this;
}


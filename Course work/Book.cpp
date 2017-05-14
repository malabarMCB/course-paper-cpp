/*
*Гриневич Дмитро БС-51
*Визначення методів класу Book
*/
#include "Book.h"
//-------------------------------------------------------------------------
// конструктор за замовчуванням
Book::Book()
{

}
//-------------------------------------------------------------------------
// конструктор з параметрами
Book::Book(string name, string author, unsigned int pageCount,Publisher publisher, string language)
		:name(name),author(author),pageCount(pageCount),language(language),publisher(publisher)
{

}
//-------------------------------------------------------------------------
// деструктор
Book::~Book()
{
	
}
//-------------------------------------------------------------------------
// метод для отримання кількості сторінок книги
unsigned int Book::GetPageCount() const
{
	return this->pageCount;
}
//-------------------------------------------------------------------------
// метод для отримання автора книги
string Book::GetAutor() const
{
	return this->author;
}
//-------------------------------------------------------------------------
// метод для отримання ім'я книги
string Book::GetName() const
{
	return this->name;
}
//-------------------------------------------------------------------------
// метод для отримання міста, де була видана книга
string Book::GetPublishingCity() const
{
	return this->publisher.city;
}
//-------------------------------------------------------------------------
// метод для отримання дати видання книги
unsigned int Book::GetPublishingYear() const
{
	return this->publisher.year;
}
//-------------------------------------------------------------------------
// метод для отримання ім'я компаній видавника книги
string Book::GetPublishingCompanyName() const
{
	return this->publisher.companyName;
}
//-------------------------------------------------------------------------
// метод для отримання мови, на якій написана книги
string Book::GetLanguage() const
{
	return this->language;
}
//-------------------------------------------------------------------------
// метод для відображення книги на консоль
void Book::Show() const
{
	cout << "Name: " << name << "\n"
		<< "Author: " << author << "\n"
		<< "Pages: " << pageCount << "\n"
		<< "Language: " << language << "\n"
		<< "Published in " << publisher.city << ", "
		<< publisher.year << " by " << publisher.companyName << endl;
}
#include "Book.h";
#include <iostream>


Book::Book(const char* title, const char* author, const char* year, const char* ISBN)
{
	_title = title;
	_author = author;
	_year = year;
	_ISBN = ISBN;
};

Book::Book(const Book& book) :
	_title(book._title), _author(book._author), _ISBN(book._ISBN), _year(book._year)
{
};

Book::~Book() = default;

const char* Book::getTitle()
{
	return _title;
}

const char* Book::getAuthor()
{
	return _author;
}
const char* Book::getYear()
{
	return _year;
}
const char* Book::getISBN()
{
	return _ISBN;
}


void  Book::printInfo()
{
	std::cout << "Title!: " << _title << std::endl;
	std::cout << "Author: " << _author << std::endl;
	std::cout << "Year: " << _year << std::endl;
	std::cout << "ISBN: " << _ISBN << std::endl;
}

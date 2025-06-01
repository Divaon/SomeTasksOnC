#pragma once


class Book
{
public:

	Book(const char* title, const char* author, const char* year, const char* ISBN);

	Book(const Book& book);

	~Book() ;

	const char* getTitle();
	const char* getAuthor();
	const char* getYear();
	const char* getISBN();

	void printInfo();
	 
private:
	const char* _title;
	const char* _author;
	const char* _ISBN;
	const char* _year;
};


#include <iostream>
#include <stdio.h>
#include "Book.h"


int main()
{

	Book Book1("title", "author", "4214", "ISBN");
	Book1.printInfo();
	Book NewBook(Book1);
	std::cout << std::endl;
	NewBook.printInfo();
	std::cout << std::endl;
	std::cout << NewBook.getTitle() << std::endl;
	std::cout << NewBook.getAuthor() << std::endl;
	std::cout << NewBook.getYear() << std::endl;
	std::cout << NewBook.getISBN() << std::endl;

	
}


#include <iostream>
#include "Sales_item.h"

int main()
{
	//currBook is the book object we are concatenating; we'll read new values into book
	Sales_item currBook, book, bookSum;
	if (std::cin >> currBook)	//check the input is valid
	{
		while (std::cin >> book)
		{
			if (book.isbn() == currBook.isbn())	//check the new input is no different than the last
				currBook += book;		//add one to cnt, see how a single line block needs no curly brackets
			else
			{
				std::cout << currBook << std::endl;
				currBook = book;	//set the current value to the new value
			}
		}
		//the below section accoutns for the last value in the file
		std::cout << currBook <<std::endl;
	}
	return 0;
}

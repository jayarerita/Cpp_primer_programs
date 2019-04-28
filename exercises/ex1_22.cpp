#include <iostream>
#include "Sales_item.h"

int main()
{
	Sales_item book, book_sum;
	while (std::cin >> book)
	{
		book_sum += book;
	}
		std::cout << book_sum << std::endl;
	return 0;
}


#include <iostream>
#include "Sales_item.h"

int main()
{
	Sales_item total;					//variable to hold the data for the next transation
	if (std::cin >> total)				//check the input is a valid
	{
		Sales_item trans;				//varialb to hold the running sum
		while (std::cin >> trans)		//check the next input is valid
		{
			if (total.isbn() == trans.isbn()) 	//compare the isbn's of the last two books
				total += trans;			//if they are the same add to the running total
			else
			{
				std::cout << total << std::endl;	//print out running total
				total = trans; 			//total now refers to the new book
			}
		}
		std::cout << total << std::endl;	//print out last total
	}
	else
	{
		std::cerr << "No data?!" << std::endl;	//error message if first input invalid
		return -1;
	}
	return 0;
}

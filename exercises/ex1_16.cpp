#include <iostream>

int main()
{
	int val = 0, sum = 0;
	std::cout << "Enter as many values as you like: ";
	while (std::cin >> val)
	{	
		sum += val;
		std::cout << ", ";
	}
	std::cout << std::endl;
	std::cout << "The sum is: " << sum << std::endl;
	return 0;
}

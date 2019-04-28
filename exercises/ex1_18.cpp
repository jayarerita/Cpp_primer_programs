#include <iostream>

int main()
{
	//currVal is the nubmer we're counting; we'll read new values into val
	int currVal = 0, val = 0;
	if (std::cin >> currVal)	//check the input is valid
	{
		int cnt = 1;		//all valid inputs are at least shown once
		while (std::cin >> val)
		{
			if (val == currVal)	//check the new input is no different than the last
				++cnt;		//add one to cnt, see how a single line block needs no curly brackets
			else
			{
				std::cout << currVal << " occurs " << cnt << " times." << std::endl;
				currVal = val;	//set the current value to the new value
				cnt = 1;	//reset cnt
			}
		}
		//the below section accoutns for the last value in the file
		std::cout << currVal << " occurs " << cnt << " times." <<std::endl;
	}
	return 0;
}

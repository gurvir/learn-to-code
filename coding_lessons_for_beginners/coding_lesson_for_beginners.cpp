// We include iostream so that we can read and write to and from the screen.
#include <iostream>

// This next line means we do not have to keep writing std::cin when reading from
// the screen and std::cout when writing to the screen. Instead we can just write
// cin and cout.
using namespace std;

// This is a function prototype it tells the main function that this function exists
// but is declared later.

void lesson1_helloWorld();
void lesson2_isTheNumberOddOrEven();

// All c++ programs begin at the main function
int main()
{
	 lesson1_helloWorld();
	 lesson2_isTheNumberOddOrEven();

	 return(0);
}

// This function will write hello red ranger to the screen
void lesson1_helloWorld()
{
	cout<< "Hello red ranger \n";
}

void lesson2_isTheNumberOddOrEven()
{
	int theNumber;
	cout << "Please enter a number and I will tell you if it is odd or even.\n";
	cin >>  theNumber;

	if (cin.fail())
	{
	    // input was not valid
		cout << "You are silly.\n";
	}
	else if (theNumber%2 == 0)
	{
		cout << "your number is even\n";

	}
	else
	{
		cout << "your number is odd\n";

	}
}

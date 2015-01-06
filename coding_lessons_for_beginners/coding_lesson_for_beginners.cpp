// We include iostream so that we can read and write to and from the screen.
#include <iostream>
#include <string>
// This next line means we do not have to keep writing std::cin when reading from
// the screen and std::cout when writing to the screen. Instead we can just write
// cin and cout.
using namespace std;

// Function prototypes tell the main function that the function exists
// but is declared later.

void lesson1_helloWorld();
void lesson2_isTheNumberOddOrEven();
void lesson3_timesTables();

// All c++ programs begin at the main function
int main()
{
	 lesson1_helloWorld();
	 lesson2_isTheNumberOddOrEven();
	 lesson3_timesTables();
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

void lesson3_timesTables()
{
	int multiplier;
	bool stop = false;



	while (stop == false)
	{
		// Ask the user which times tables he wants to do
		cout << "Enter a number to indicate which times table you want to do\n";
		cin >> multiplier;

		if (cin.fail())
		{

			cin.clear();
			cin.ignore(10000, '\n');
			cout << "You were supposed to enter an integer number\n";
		}
		else
		{
			for (int i = 1;i <= 12;i++)
			{

				cout<< i << " X "<< multiplier<< " = "<< i * multiplier<<endl;

			}
			cout<< "Do you want to do another times table. Enter y for yes or n for no \n";

			cin.clear();
			cin.ignore(10000, '\n');
			string answer;
			cin >> answer;

			if (answer == "y" || answer == "Y")
			{
				cin.clear();
				cin.ignore(10000, '\n');

			}
			else
			{
				stop = true;

			}
		}
	}
}

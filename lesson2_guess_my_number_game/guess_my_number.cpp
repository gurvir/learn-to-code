#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
	int theRandomNumber;
	bool isGameOver=false;
	const int MAX_VALUE = 1000;
	const int MIN_VALUE = 1;


	//The computer will generate a random number for the player to guess
	srand(time(NULL));
	theRandomNumber = rand()%MAX_VALUE+MIN_VALUE;

	while ( isGameOver==false)
	{
		int theGuess;
		cout<< "Guess the number, if you can man"<<endl;
		cin>> theGuess;

		if (cin.fail())
		{
			cout<< "The guess should be between "<<
					MIN_VALUE<<" and " << MAX_VALUE<<endl;
			cin.clear();
			cin.ignore(10000, '\n');

		}
		else if(theGuess==theRandomNumber)
		{
			cout<< "well done you have guessed the number"<< endl;
			isGameOver=true;
		}
		else if(theGuess>theRandomNumber)
		{
			cout<< "Too high man"<< endl;
		}
		else
		{
			cout<<"To low man"<<endl;
		}
	}
}

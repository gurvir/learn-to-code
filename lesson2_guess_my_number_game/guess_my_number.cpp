#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
	int theRandomNumber;
	bool isGameOver=false;

	//The computer will generate a random number for the player to guess
	srand(time(NULL));
	theRandomNumber = rand()%1000+1;

	while ( isGameOver==false)
	{
		int theGuess;
		cout<< "Guess the number, if you can man"<<endl;
		cin>> theGuess;

		if(theGuess==theRandomNumber)
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

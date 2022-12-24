#include <stdlib.h>
#include <time.h>
#include <iostream>

int main() 
{
	int secret;; // gets randomm
	int guess;   // User input
	// intialize random seed
	srand(time(NULL));
	secret = int(10.0*((float)rand() / (float)RAND_MAX));
	
	do
	{
	std::cout << "Guess the number(0-10) ";
	std::cin >> guess;
		if (secret < guess)
		{
			std::cout << "The secret number is lower\n";
		} else if (secret > guess)
		{
			std::cout << "Secret number is higher\n";
		}
	}while(secret != guess);

	std:: cout << "Congrats";	
	return 0;
}
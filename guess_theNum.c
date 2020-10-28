#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	time_t t;
	srand((unsigned) time(&t));
	int randomNumber = rand() %21;
	int tries = 5, input;
	printf("this is a guessing game\n");
	printf("i have choosen a num from 0 to 20 and you have to guess that number\n");
	do
	{
		printf("you have %d tries\n", tries);
		printf("enter the number you guessed\n");
		scanf("%d", &input);
		if(input == randomNumber)
		{
			printf("you have won the game, congrats\n");
			exit(0);
		}
		else
		{
			printf("sorry %d is not the number which i have choosen\n", input);
			tries--;
			if(randomNumber>input)
			{
				printf("the number which i have choosen is greater than the one you guessed\n");
			}
			else
			{
				printf("the number which i have choosen is less than the one you guessed\n");
			}
		}
	}while(tries>0);
	printf("you have lost ");
	return 0;
}



	

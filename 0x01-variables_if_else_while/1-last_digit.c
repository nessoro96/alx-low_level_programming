#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main -Entry point
 * Description: a program that store differnt value everytime
 * that show the string 'lasit digit of'
 * number,if the last digit of n is greater than 5 print is greater than 5
 * if the last digit of n is 0: the string and is 0
 * if the last digit is less than 6 and not 0:print is less than 6 and not 0
 * return: Always (success)
*/

int main (void)
{
	int n;
int lastdgt;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdgt = n % 10;
	printf("Last digit of %d is ", n);
	if (lastdgt > 5)
	{
		printf("Last digit of %d is %d and is  greater than 5\n",n,  lastdgt);
	}
	else if (lastdgt == 0)
	{
		printf("Last digit of %d is %d  and is 0\n", n,  lastdgt);
	}
	else if(lastdgt < 6 && lastdgt != 0)
	{
		printf("Last digit of %d  is  %d less than 6 and not 0\n", n,  lastdgt);
	}
	return (0);
}

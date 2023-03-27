#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 (succes)
 *
 * main - tells positive or negative
 */

int main(void)
{
	int n;srand(time(0));


	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* My code starts here */
	if (n > 0)
		printf("%d is positive\n" ,n);
	if else (n == 0)
		printf("%d is zero\n" ,n);
	else (n == 0) 
		printf("%d is negative\n" ,n);
	return (0);
}


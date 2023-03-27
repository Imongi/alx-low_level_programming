#include <stdio.h>

/**
 * main - print the alphabet in lower case
 *
 * Return: 0 is success
 */

int main(void)
{
	char lower;

	for (lower = 'a' ; lower <= 'z' ; lower++)
		putchar(lower);
	putchar('\n');
	return (0);
}

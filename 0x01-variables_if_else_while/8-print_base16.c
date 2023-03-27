#include <stdio.h>

/**
 * main - print all the numbers of base 16 lowercase
 *
 * Return: 0 (Success)
 *
 */

int main(void)
{
	int y;
	char g;

	for (y = '0' ; y <= '9' ; y++)
		putchar (y);
	for (g = 'a' ; g <= 'f' ; g++)
		putchar (g);
	putchar('\n');
	return (0);

}


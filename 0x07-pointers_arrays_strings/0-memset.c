#include "main.h"

/**
 * _memset - fill a block of memmory with a specific value 
 * @s: starting address of memory to be filled 
 * @b:the desired value 
 * @n:number of bytes to be changed
 *
 * return: changed array with new value for n bytes 
 */
char *-memset(char *s, char b, unsigned int n)
{
	int i=0;

	for (; n>0; i++)
	{
		S[i] = b;
		n--;
	}
	return (s);
}

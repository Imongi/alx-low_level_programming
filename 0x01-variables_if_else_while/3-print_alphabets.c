#include <stdio.h>

/**
 * main - print the alphabet in lowercase and uppercase
 *
 * Return: 0 is success
 */

int main(void)
{
    char letter;

    /* Print lowercase alphabet */
    for (letter = 'a'; letter <= 'z'; letter++)
    {
        putchar(letter);
    }

    /* Print uppercase alphabet */
    for (letter = 'A'; letter <= 'Z'; letter++)
    {
        putchar(letter);
    }

    /* Print newline */
    putchar('\n');

    return (0);
}


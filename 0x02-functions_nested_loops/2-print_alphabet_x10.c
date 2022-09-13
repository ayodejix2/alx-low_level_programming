#include "main.h"

/**
 * main - Prints 10x alphabet in lowercase
 * Return: 0
 */

void print_alphabet_x10(void);
{
char c;
	int i = 0;

	while (i <= 9)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}

		_putchar('\n');

		i++;
	}
}

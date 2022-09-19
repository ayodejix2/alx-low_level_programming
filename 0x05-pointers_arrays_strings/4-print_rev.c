#include <stdio.h>
#include "main.h"

/**
 * print_rev - prints a string, followed by a new line
 * @s: input string to print
 * Return: string in reverse
 */

void print_rev(char *s)
{
	int i = 0;
	int i, n;

	for (i = 0; s[i] != '\0'; i++)
	{
		i++;
	}

	for (n = (i - 1); n >= 0; n--)
	{
		putchar(s[n]);
	}
	putchar('\n');
}

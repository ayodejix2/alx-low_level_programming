#include <stdio.h>
#include "main.h"

/**
 * print_rev - prints a string, followed by a new line
 * @s: input string to print
 * Return: string in reverse
 */

void print_rev(char *s)
{
	int i;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (s[i] != '\0')
	{
		putchar(s[i--]);
	}
	putchar('\n');
}

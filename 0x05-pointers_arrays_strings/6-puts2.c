#include "main.h"

/**
 * puts2 - prints out every other char of the string
 * @str: input string to print
 * Return: 0
 */

void puts2(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			putchar(str[i]);
		i++;
	}
	putchar('\n');
}

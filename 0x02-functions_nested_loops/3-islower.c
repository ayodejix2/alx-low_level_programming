#include "main.h"

/**
 * _islower - checks for lowercase letters
 * @c: The character to be checked
 * Return: 1 for lowercase letters or 0 for anything else
 */

int _islower(int c);
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

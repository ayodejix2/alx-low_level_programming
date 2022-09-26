#include "main.h"

/**
 * _strncmp - compares two strings within b bytes
 * @s1: string to check
 * @s2: string to check from
 * @b: number of bytes to check
 * Return: 0 if strings are the same
 */

int _strncmp(char *s1, char *s2, unsigned int b)
{
	unsigned int i;
	for (i = 0; i <= b && *s1 == *s2 && *s1 != '\0' && *s2 != '\0'; i++)
	{
		s1++;
		s2++;
	}
	return (i - b);
}

/**
 * _strstr - locates a substring
 * @haystack: the longer string to search
 * @needle: substring to search
 * Return: pointer to string with result of search
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int len;

	len = 0;
	while (needle[len] != '\0')
		len++;

	while (*haystack != '\0')
	{
		if (_strncmp(haystack, needle, len) == 0)
			return (haystack);
		haystack++;
	}
	return (NULL);
}

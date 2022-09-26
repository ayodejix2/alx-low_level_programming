#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals of a square
 * matrix of integers
 * @a: the name of the array
 * @size: the size of the array
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int i, sumx, sumy;

	sumx = sumy = 0;
	for (i = 0; i < (size * size); i += size + 1)
		sumx += a[i];
	for (i = size - 1; i < (size * size - 1); i += size - 1)
		sumy += a[i];
	printf("%d, %d\n", sumx, sumy);
}

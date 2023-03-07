#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - check code that prints the sums of the two
 * diagonals of a square matrix
 * @a: check the pointer to start of matrix
 * @size:check  width of matrix column
 * Return: void or nothing at all
 */
void print_diagsums(int *a, int size)
{
	int i, j, p, l = 0, r = 0;

	for (i = 0; i < size; i++)
	{
		p = (i * size) + i;
		l += *(a + p);
	}
	for (j = 0; j < size; j++)
	{
		p = (j * size) + (size - 1 - j);
		r += *(a + p);
	}
	printf("%i, %i\n", l, r);
}

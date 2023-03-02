#include "main.h"
/**
 * reverse_array - check code and reverse array
 * @a:check array
 * @n:check the integer
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
int i, c;

for (i = 0; (i < (n - 1) / 2); i++)
	{
	c = a[i];
	a[i] = a[n - 1 - i];
	a[n - 1 - i] = c;
	}
}

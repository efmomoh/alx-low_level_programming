#include <stdio.h>
/**
 * main - A C Program that prints all possible combinations of
 * two-digit numbers
 * Return: 0 (success)
 *
 */
int main(void)
{
	int c = 0;
	int n;
	int m;

	int c2;
	int n2;
	int m2;

	while (c <= 98)
	{
		n = (c / 10 + '0');
		m = (c % 10 + '0');

		if (c < c2)
		{
			putchar(n);
			putchar(m);
			putchar(' ');
			putchar(n2);
			putchar(m2);

			if (c != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
		c2++;
	}
	c++;
	putchar('\n');
	return (0);
}

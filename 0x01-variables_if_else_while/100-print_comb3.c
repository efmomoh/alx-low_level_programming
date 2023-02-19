#include <stdio.h>
#include <stdlib.h>
/**
 * main - Writing a program that prints all possible different combinations
 * of two digits
 * Return: 0 (success)
 *
 */
int main(void)
{
	int c;
	int n = 0;

	while (n < 98)
	{
		c = 0;
		while (c < 98)
		{
			if (n != c && n < c)
			{
				putchar(c + '0');
				putchar(n + '0');

				if (c + n != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}

			c++;
		}
		n++;
	}
	putchar('\n');
	return (0);
}

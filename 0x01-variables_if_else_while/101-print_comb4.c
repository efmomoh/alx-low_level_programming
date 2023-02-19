#include <stdio.h>
#include <stdlib.h>
/**
 * main - A C program that prints all possible different
 * combinations of three digits
 * Return: 0 (success)
 *
 */
int main(void)
{
	int c;
	int n;
	int m = 0;

	while (m < 100)
	{
		n = 0;
		while (n < 100)
		{
			c = 0;
			while (c < 100)
			{
				if (c != m && m != n && m < n && n < c)
				{
					putchar('0' + c);
					putchar('0' + n);
					putchar('0' + m);

					if (c + n + m != 9 + 8 + 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
				c++;
			}
			n++;
		}
		m++;
	}
	putchar('\n');
	return (0);
}

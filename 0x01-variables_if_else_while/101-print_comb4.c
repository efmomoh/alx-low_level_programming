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
	int c, n, m;

	for (c = 48; c < 58; c++)
	{
		for (n = 49; n < 58; n++)
		{
			for (m = 50; m < 58; m++)
			{
				if (m > n && n > c)
				{
					putchar(c);
					putchar(n);
					putchar(m);
					if (c != 55 || n != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

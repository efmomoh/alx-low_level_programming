#include <stdio.h>
/**
 * main - Writing a program that prints all possible different combinations
 * of two digits
 * Return: 0 (success)
 *
 */
int main(void)
{
	int c, n;

	for (c = 48; c <= 56; c++)
	{
		for (n = 49; n <= 57; n++)
		{
			if (n > c)
			{
				putchar(c);
				putchar(n);
				if (c != 56 || n != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
/**
 * main - A C program that prints all combination of single digits
 * Return: 0 (success)
 */
int main(void)
{
	int c = 0;

	while (c < 0)
	{
		putchar(48 + c);
		if (c != 9)
		{
			putchar(',');
			putchar(' ');
		}
		c++;
	}
	putchar('\n');
	return (0);
}

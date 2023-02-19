#include <stdio.h>
/**
 * main - A C program that prints all combination of single number of base 10
 * starting from 0 followed by a new line
 * Return: 0 (success)
 */
int main(void)
{
	int c = 0;

	while (c <= 9)
	{
		putchar(c + '0');
		if (c == 9)
			break;

		putchar(',');
		putchar(' ');
		c++;
	}
	putchar('\n');
	return (0);
}

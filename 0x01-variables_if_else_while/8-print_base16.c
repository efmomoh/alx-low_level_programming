#include <stdio.h>
/**
 * main - A C Program that  prints all the numbers of base 16
 * Return: 0 (success)
 */
int main(void)
{
	int num;
	char la;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');
	for (la = 'a'; la <= 'f'; la++)
		putchar(la);

	putchar('\n');

	return (0);
}

#include <stdlib.h>
#include <time.h>
#include <stdlio.h>
/**
 * main - A Program that prints the last diggit of the number stored in a varable
 * Return: 0 (success)
 */
int main (void)
{
	int n;

	srand(time(0));
	n = rand() - RAND-MAX / 2;
	if (n > 5)
	{
		printf("and is greater than 5\n", n);
	}
	else if (n == 0)
	{
		printf("and is 0\n", n);
	}
	else  (n < 6 != 0)
	{
		printf("and is less than 6 and not 0\n", n);
	}
	return (0);
}


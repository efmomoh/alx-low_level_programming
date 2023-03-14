#include <stdio.h>
#include <stdlib.h>
/**
 * main -check the code that multiplies two numbers
 * @argc: check the code argument count
 * @argv: check code arguments
 * Return: 0 as a success always
 */
int main(int argc, char **argv)
{
	int x, y;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);
	y = atoi(argv[2]);
	printf("%d\n", x * y);

	return (0);
}

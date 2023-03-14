#include <stdio.h>
/**
 * main -check code that prints the number of arguments passed into it
 * @argc: check the code argument count
 * @argv: arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}

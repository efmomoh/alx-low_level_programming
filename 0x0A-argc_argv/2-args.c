#include <stdio.h>
/**
 * main -check the code that prints all arguments it receives  into it
 * @argc: check the argument count
 * @argv: check the arguments
 * Return: 0 as success always
 */
int main(int argc, char **argv)
{
	int j;

	for (j = 0; j < argc; j++)
		printf("%s\n", argv[j]);

	return (0);
}

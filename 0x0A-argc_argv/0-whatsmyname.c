#include <stdio.h>
/**
 * main - check the code that prints its name, followed by a new line.
 * @argc: check the argument count
 * @argv: check the code arguments
 * Return: 0 as success
 */
int main(int argc, char **argv)
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}

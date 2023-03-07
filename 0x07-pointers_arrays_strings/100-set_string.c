#include "main.h"
/**
 * set_string -check sets the value of a pointer to a char
 * @s: check the pointer to change
 * @to: check the string to change pointer to
 * Return: void or nothing at all
 */
void set_string(char **s, char *to)
{
	*s = to;
}

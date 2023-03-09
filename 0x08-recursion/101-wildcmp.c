#include "main.h"
/**
 * str_checker - check the code if two strings are identical
 * @s1: check the string_1 base address
 * @s2: check the string_2 base address
 * @i: check the cod's left index
 * @j: check the code's special index (joker/fun)
 * Return: 1 if s is a palindrome or 0 otherwise
 */
int str_checker(char *s1, char *s2, int i, int j)
{
	if (s1[i] == '\0' && s2[j] == '\0')
		return (1);
	if (s1[i] == s2[j])
		return (str_checker(s1, s2, i + 1, j + 1));
	if (s1[i] == '\0' && s2[j] == '*')
		return (str_checker(s1, s2, i, j + 1));
	if (s2[j] == '*')
		return (str_checker(s1, s2, i + 1, j) || str_checker(s1, s2, i, j + 1));
	return (0);
}
/**
 * wildcmp - check the code if strings could be considered identical
 * @s1: check the base address for string
 * @s2: check the base address for string
 * Return: 1 if are considered identical
 */
int wildcmp(char *s1, char *s2)
{
	return (str_checker(s1, s2, 0, 0));
}

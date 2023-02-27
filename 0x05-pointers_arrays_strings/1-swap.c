#include "main.h"
/**
 * swap_int - check swap int a, b pointers
 * @a: check for a pointer and swap with b
 * @b: check for b pointer and swap with a
 * Return nothing
 */
void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}

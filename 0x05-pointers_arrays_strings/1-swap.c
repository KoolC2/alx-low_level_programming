#include <stdio.h>

/**
 * swap_int - swap values of integer
 * @a: first interge
 * @b: second integer
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;

}


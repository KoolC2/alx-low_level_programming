#include <stdio.h>

/**
 * largest_number - causes an infinite loop
 * Return: 0
 */

int largest_number(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 0;

/*
 * while (i < 10)
 * {
 * putchar(i);
 * }
*/
	printf("Infinite loop avoided! \\o/\n");

	return (0);
}

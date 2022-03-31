#include <stdio.h>
#include "main.h"

/**
 * _sqrt - returns sqrt
 * @n: int parameters
 * @i: value to be tested
 *
 * Description: Returns natural square root of a number.
 * Return: Always (0)
 */

int _sqrt(int n, int i)
{
	if (n < 0)
		return (-1);
	if ((i * i) > n)
		return (-1);
	if ((i * i) == n)
		return (i);

	return (_sqrt(n, i + 1));
}
/**
 * _sqrt_recursion - returns square root
 *
 * @n: number to find sqrt
 *
 * Return: sqrt, (-1) no natural sqrt 
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}	}

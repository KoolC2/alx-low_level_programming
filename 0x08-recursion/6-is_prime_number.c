#include <stdio.h>
#include "main.h"
/**
 *_prime - return 1 if prime no
 *@a: input 1
 *@b: input 2
 *
 * Description: Print 1 if prime no
 * Return: print 1 if prime, print 0 if else
 */

int _prime(int a, int b)
{
	if (b < 2 || b % a == 0)

		return (0);

	else if (a > b / 2)

		return (1);
	else
		return (_prime(a + 1, b));
}

/**
 * is_prime_number - prints prime number
 * @n: input integers
 *
 * Description: Prints 1 if prime number, 0 if otherwise.
 * Return: Always 1 0r 0
 */

int is_prime_number(int n)
{
	if (n == 2)
		return (1);

	return (_prime(2, n));
}

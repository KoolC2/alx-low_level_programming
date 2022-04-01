#include <stdio.h>
#include "main.h"

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


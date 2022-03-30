#include <stdio.h>
#include "main.h"

/**
 * factorial - the function prints string
 * @ n: inputs string
 *
 * Description: Prints a string folowed by a new line.
 * Return: Always (0)
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n <= 1)
	{
		return (1);
	}
}
return (n * factorial(n-1));
}


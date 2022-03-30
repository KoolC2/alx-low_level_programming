#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - raise x to power of y
 * @x: inputs the value of x
 * @y: inputs the value of y
 *
 * Description: Prints a string folowed by a new line.
 * Return: Always (0)
 */

int_pow_recursion(int x, int y)
{
	if (y < 0)

		return (-1);

	else if (y == 0)

		return (1);

return (x * _pow_recursion(x, y - 1));

}

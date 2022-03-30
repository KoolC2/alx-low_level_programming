#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - the function prints string
 * @s: inputs string
 *
 * Description: Prints a string folowed by a new line.
 * Return: Always (0)
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}

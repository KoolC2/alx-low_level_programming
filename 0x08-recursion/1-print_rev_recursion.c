#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - the function prints strin in reverseg
 * @s: inputs string
 *
 * Description: Prints a string in reverse.
 * Return: Always (0)
*/
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

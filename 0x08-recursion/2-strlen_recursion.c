#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - prints lenght string
 * @s: inputs string
 *
 * Description: returns lenght of a string
 * Return: return string lenght
 */

int _strlen_recursion(char *s)

{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}

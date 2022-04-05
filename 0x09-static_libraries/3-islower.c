#include "main.h"
#include <stdio.h>

/**
 * _islower - 0 prints  1 or 0
 * @c: first parameter
 * Description : checks lowercase chatacters
 * Return: Always 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

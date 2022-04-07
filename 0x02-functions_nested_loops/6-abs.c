#include "main.h"
#include <stdio.h>

/*
 * _abs - computes value of integer
 *
 * @n: number
 * Descriptin: Comoutes integer
 * Return: computes  value
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}

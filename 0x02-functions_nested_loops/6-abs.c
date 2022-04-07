#include "main.h"
#include <stdio.h>

/*
 * _abs - it computes value of integer
 * @n: number
 * Description: computes integer
 * Return: absolute value
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

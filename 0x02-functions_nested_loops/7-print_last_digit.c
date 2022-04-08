#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - Print the last digit of a number
 * @l: An integer input
 * Description: This function prints the last digit of a number
 * Return: last digit of number
 */
int print_last_digit(int l)
{
	int n;

	if (l < 0)
	{
		n = -1 * (l % 10);
	}
	else
	{
		n = l % 10;
		_putchar((n % 10) + '0');
	}

	return (n % 10);
}

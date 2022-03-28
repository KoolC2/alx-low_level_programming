#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - prints all alphabets in lowercase
 *
 * Description: Sorted
 * Return: Always 0
 */

void print_alphabet(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}

#include "main.h"

/**
 * main - entry point
 *
 * Description: prints princess followed by a newline
 *
 * Return: returns 0
 *
 */

int main(void)

{

	char princess[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
{
	_putchar(princess[i]);
}
	_putchar('\n');
return (0);
}

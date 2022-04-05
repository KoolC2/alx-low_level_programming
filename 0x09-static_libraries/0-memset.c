#include <stdio.h>
#include "main.h"
/**
 *_memset - fills memory
 *@s: input string
 *@b: input char
 *@n: input size
 *
 * Description: fill memory with a constant byte
 * Return: returns pointer to memory areas
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

return (s);
}

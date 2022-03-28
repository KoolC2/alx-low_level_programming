#include <stdio.h>
#include "main.h"
/**
 * _strchr - fills memory
 *@s: input string
 *@c: input char
 *
 * Description: fill memory with a constant byte
 * Return: returns pointer to memory areas
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (c == *s)
		{
			return (s);
		}
		s++;
	}
	if (!c)
	{
		return (s);
	}
	return (NULL);
}

#include <stdio.h>
#include "main.h"
/**
 *_strpbrk - search a string
 *@s: input string
 *@accept: accept string
 *
 * Description: search string for any of a set of byte
 * Return: returns pointer to the byte s
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j, len, present = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		continue;
	}
	len = i;
	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (accept[i] == s[j])
			{
				if (j <= len)
				{
					len = j;
					present = 1;
				}
			}
		}
	}
	if (present == 1)
	{
		return (&s[len]);
	}
	else
	{
		return (NULL);
	}
return (0);
}

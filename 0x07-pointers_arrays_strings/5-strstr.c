#include <stdio.h>
#include "main.h"
/**
 *_strstr - locates a substring
 *@needle: input string
 *@haystack: input needles
 *
 * Description: locates a substring
 * Return: returns a pointer the
 * beginging of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
	char *first, *compare;

	while (*haystack)
	{
		first = haystack;
		compare = needle;
		while (*haystack && *compare && *haystack == *compare)
		{
			haystack++;
			compare++;
		}
		if (!*compare)
		{
			return (first);
		}
		else
		{
			haystack = first + 1;
		}
	}
return (NULL);
}

#include "main.h"
#include <stdio.h>

/**
* _strncpy - copies a string
* @dest: first input character
* @src: seconnd input charater
* @n: numbers of bytes
* Description: function copies a string
* Return: dest
*/
char *_strncpy(char *dest, char *src, int n)

{
	int i;

	i = 0;
	for (; i < n && src[i] != '\0'; ++i)
{
	dest[i] = src[i];
}
while (i < n)
{
	dest[i] = '\0';
	++i;

}

return (dest);
}





#include <stdio.h>
#include "main.h"
/**
 *_memcpyt - copies memory area
 *@dest: destination
 *@src: source
 *@n: number of bytese
 *
 * Description: copies memory area
 * Return: returns pointer to pointer to dests
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
return (dest);
}

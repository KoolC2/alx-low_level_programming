#include <stdio.h>

/**
* _strncat - concatenates two string
* @dest: destination
* @src: source
* @n: no. of bytes
*
* Return:pointer to dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int i, length, g;

	for (i = 0; dest[i] != '\0'; i++)
{
	length++;
}
for (g = 0; src[g] != '\0' && g < n; g++)
{
	dest[i + g] = src[g];

}
dest[i + g] = '\0';

return (dest);
}





#include <stdio.h>

/**
* _strcat - concatenates two string
* @dest: first input string
* @src: second input string
*
* Description: appends the src string to the dest string
* Return: dest
*/

char *_strcat(char *dest, char *src)
{
	int i, peg;

	peg = 0;
	while (dest[peg] != '\0')
{
	++len;
}
for (i = 0; src[i] != '\0'; ++i, ++peg)
{
	dest[peg] = src[i];

}
dest[peg] = '\0';

return (dest);
}





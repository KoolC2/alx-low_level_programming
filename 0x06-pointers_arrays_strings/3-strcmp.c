#include <stdio.h>

/**
* _strcmp - compares two string
* @s1: first char input
* @s2: second char input
*
* Description: function compares two string
* Return: character count
*/
int _strcmp(char *s1, char *s2)

{
	int i, diff;

	for (i = 0; s1[i] != '\0'; ++i)
{
	if (s1[i] > s2[i])
	{
		diff = s1[i] - s2[i];
		return (diff);
	}

	else if
		(s1[i] < s2[i])
	{
		diff = s1[i] < s2[i];
		return (diff);
			}
			}

return (0);
}





#include <stdio.h>

/**
* string_toupper - changes sring to uppercase
* @u: input string
* Description: changes all lowercase letters of a string
* Return: alawys (0)
*/

char *string_toupper(char *u)
{
	int i;

	for (i = 0; u[i] != '\0'; ++i)
	{
		if (u[i] >= 'a' && u[i] <= 'z')
		{
			u[i] = u[i] - 32;
	}
}

return (u);
}





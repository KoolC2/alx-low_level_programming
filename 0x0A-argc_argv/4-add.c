#include "main.h"

/**
 * main - adds two positive numbers
 * @argc: number of argument
 * @argv: array of pointers
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])

	int sum = 0, a, b;
	
	for (a = 1; a < argc; a++)

	if (checker(argv[a]))
		sum += atoi(argv[a]);
	else
		printf("Error\n");
	return (1);

	printf("%d\n", sum);
	return (0);
}

/**
 * checker - check if it is a letter
 * @c: checker character
 *
 * Return: 0 if found in range 1 if not
 */

int checker(char *c)
{
	while (*c)
	{
		if ((*c >= 65 && *c <= 90) || (*c >= 97 && *c <= 122))
			return (0);
		c++;
	}
	return (1);
	{

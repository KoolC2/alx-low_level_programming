#include "main.h"

/**
 * main - prints all arguments received
 * @argc: number of arguments
 * @argv: array of pointer
 * Return: 0
 */

int main(int argc, char **argv)
{
	int j = 0;

	for (; j < argc; j++)
	{
		printf("%s\n", argv[j]);
	}
	return (0);
}

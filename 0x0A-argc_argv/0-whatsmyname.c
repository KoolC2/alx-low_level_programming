#include "main.h"

/**
 * main - prints program name
 * @argc: number of argument
 * @argv: array of pointer
 * Return: Always 0
 */

int main(int argc __attribute__((unused)), char **argv)
{
	printf("%s\n", *(argv + 0));
	return (0);
}

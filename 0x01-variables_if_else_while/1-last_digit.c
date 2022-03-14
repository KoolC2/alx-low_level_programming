#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *  main - Entry point
 *
 *  Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int L;
	char string[] = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	L = n % 10;

	if (L > 5)
		printf("%s %d is %d and is greater 5\n", string, n, L);
	else if (L==0)
		printf("%s %d is %d and is 0\n", string, n, L);
	else
		printf("%s %d is %d and is less than 6 not 0\n", string, n, L);

	return (0);
}

#include <stdio.h>

/**
 * reverse_array - reverses content of an array
* @a: first input string
* @n: number of element
*
* Description: he funcion reverse the cponent of an array integers
* Return: (0)
*/

void reverse_array(int *a, int n)
{
	int left, right, tmp;

	left = 0;
	right = n - 1;

	while (left < right)
	{
		tmp = a[left];
		a[left] = a[right];
			a[right] = tmp;
		left++;
		right--;
}


}





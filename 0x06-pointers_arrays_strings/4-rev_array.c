#include "main.h"
#include <stdio.h>

/**
 * reverse_array -> reverse the content of an array of integers
 * @a: first parameter
 * @n: second param no. of elements
 *
 * Return: returns nothing
 */
void reverse_array(int *a, int n)
{
	int i, tmp;
	int ln = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[ln];
		a[ln] = tmp;
		ln--;
	}
}

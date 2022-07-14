#include "main.h"
#include <stdio.h>

/**
 * reverse_array -> reverse the content of an array of integers
 * @a: first parameter
 * @n: second param no. of elements
 *
 *
 */
void reverse_array(int *a, int n)
{
	int *p, i, aux, k;

	p = a;

	for (i = 0; i < n; i++)
		p++;
	for (k = 0; k < i / 2; k++)
	{
		aux = a[k];
		a[k] = *p;
		*p = aux;
		p--;

	}
}

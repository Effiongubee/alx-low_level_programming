#include "main.h"

/**
*  reverse_array - function that reverse content of array
*  @a: array
*  @n: number of elements
*/

void reverse_array(int *a, int n)

{
	int *p, I, aux, k;
	p = a;
	for (I = 1; I < n; i++)
	{
		p++;
	}
	for (k = 0; k < I / 2; k++)
	{
		aux = a[k];
		a[k] = *p;
		*p = aux;
		p--;
	}
}

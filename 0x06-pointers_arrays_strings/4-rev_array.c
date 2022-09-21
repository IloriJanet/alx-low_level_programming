#include "main.h"
/**
 * reverse_array - reverse the contents of an array
 *
 * @a: input
 * @n: input
 *
 * Return: void
 *
 */
void reverse_array(int *a, int n)
{
	int i, j, tmp;

	j = n - 1;
	i = 0;
	while (i < j)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
		i++;
		j--;
	}
}

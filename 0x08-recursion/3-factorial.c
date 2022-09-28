#include "main.h"

/**
 * factorial - Prints the factorial of any inputed number n
 * @n: integer
 *
 * Return: Always 1 on success
 * on error, -1 is returned and error is set appropriately.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}

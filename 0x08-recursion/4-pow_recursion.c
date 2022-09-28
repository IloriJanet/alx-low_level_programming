#include "main.h"

/**
 * _pow_recursion - prints the powers of two inputed number.
 * @x: Number integer
 * @y: Power
 *
 * Return: Always 1 on success
 * on error, -1 is returned and error is set appropriately.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}

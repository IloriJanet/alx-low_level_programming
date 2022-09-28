#include "main.h"

/**
 * _strlen_recursion - prints the length of a string.
 * @s: string
 *
 * Return: Always 1 on success.
 * on error, -1 is returned and error no is set appropraitely.
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}

#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the name of the file it is compiled from
 * followed by a new line.
 *
 *
 * Return: Always return 0
 */

int main(void)
{
	printf("%s\n", _FILE_);
	return (0);
}

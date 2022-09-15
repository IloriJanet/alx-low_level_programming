#include"main.h"

/**
 * main - print numbers 1 - 100 followed by a new line
 * numbers that are multiples of 3 print fizz
 * numbers that are multiples of 5 print buzz
 * numbers that are multiples of 3 n 5 print fizbuzz
 * each number and word to be separated by space
 *
 * Return: Always return 0
 */

int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (x % 3 == 0 || x % 5 == 0)
		{
			if (x % 3 == 0)
			{
				printf("Fizz");
			}
			if (x % 5 == 0)
			{
				printf("Buzz");
			}
		}
		else
		{
			printf("%d", x);
		}
		if (x != 100)
		{
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

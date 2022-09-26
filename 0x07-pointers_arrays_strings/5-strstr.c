#include "main.h"

/**
 * _strstr - first occurence of the substring needle in the string
 * @haystack: main str to be examined
 * @needle: searching in haystack
 * Return: Always return 0
 */

char *_strstr(char *haystack, char *needle)
{
	char *str1, str2; /*declaring variables*/

	while (*haystack != '\0')
	{
		str1 = haystack; /*values*/
		str2 = needle;

		/*star WHILE*/
		while (*haystack != '\0' && *str2 != '\0' && *haystack == *strs)
		{
			haystack++;
			str2++;
		}
		if (*str2 == '\0')
			return (str1);
		haystack = str1 + 1;
	}
	return (0);
}

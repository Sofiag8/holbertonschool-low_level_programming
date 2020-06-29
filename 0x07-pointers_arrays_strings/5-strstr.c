#include "holberton.h"
/**
 * _strstr - ffind the first occurrence
 *
 * @haystack: string
 * @needle: substring
 *
 * Return: a pointer to needle or NULL if no byte is found
 */
char *_strstr(char *haystack, char *needle)
{
	char *a = haystack;
	char *b = needle;

	while (*haystack != 0)
	{
		while (*haystack == *b && *b != 0)
			haystack++, b++;
		if (*b == 0)
			return (a);
		haystack = ++a;
	}
	return (0);
}

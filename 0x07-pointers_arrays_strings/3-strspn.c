#include "holberton.h"
/**
 * _strspn - get the length of a prefix substring
 *
 * @accept: pointer to a char to check
 * @s: pointer to a char to check
 *
 * Return: 0 is success
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0;
	unsigned int b = 0;

	while (s[a] && accept[b])
	{
		a++;
		b++;

		if (s[a] == accept[b])
		{
			break;

			if (!accept[b])
			{
				break;
			}
		}
	}
	return (a);
}

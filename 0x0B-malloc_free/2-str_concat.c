#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - concatenates two strings
 *
 * @s1: the first string
 * @s2: string to concatenate with s1
 *
 * Return: a pointer to a newly allocated sace in memory or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	/* nas = newlly alocated space*/
	char *nas;
	int string1, string2, count = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/*recorro ambos string para tener el tamaño*/
	for (string1 = 0; s1[string1] != '\0'; string1++)
	{
	}
	for (string2 = 0; s2[string2] != '\0'; string2++)
	{
	}
	nas = malloc((string1 + string2 + 1) *  sizeof(char));
	if (nas == NULL)
		return (NULL);
	for (string1 = 0; s1[string1] != '\0'; string1++)
	{
		nas[string1] = s1[string1];
		count++;
	}
	string2 = 0;
	for (string1 = count; s2[string2] != '\0'; string1++)
	{
		nas[string1] = s2[string2];
		string2++;
	}
	nas[string1] = '\0';
	return (nas);
}

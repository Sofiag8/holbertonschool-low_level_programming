#include "holberton.h"
/**
 * _isalpha - checks for alphabetic character
 *
 * @c: character to check
 *
 * Return: 1 is c is a leter, lowercase or uppercase
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

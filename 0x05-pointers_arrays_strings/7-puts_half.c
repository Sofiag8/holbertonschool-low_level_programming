#include "holberton.h"
/**
 * puts_half - prints half of a string
 *
 * @str: char to check
 *
 * Return: 0 is success
 */
void puts_half(char *str)
{
	int string;

	for (string = 0; str[string + 5] != '\0'; string++)
		_putchar(str[string + 5]);
	_putchar('\n');
}

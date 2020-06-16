#include "holberton.h"
/**
 * print_sign - print the sign of a number
 *
 * @n: character to check
 *
 * Description: print sign of a number if is greater or less than zero
 * Return: 0 is success
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
}
else if (n < 0)
{
	_putchar(45);
	return (1);
}
else
{
	_putchar(48);
	return (0);
}
}

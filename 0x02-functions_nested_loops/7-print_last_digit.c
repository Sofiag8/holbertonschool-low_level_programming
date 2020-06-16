#include "holberton.h"
/**
 *print_last_digit - print last digit of a number
 *
 * @n: character to evaluate
 * Description: I want to print the last digit of a number
 * Return: value lastdigit to success
 */
int print_last_digit(int n)
{
	int lastdigit;

	if (n >= 0)
	{
		lastdigit = n % 10;
		_putchar(lastdigit + '0');
		return (lastdigit);
	}
	else
	{
		lastdigit = -1 * (n % 10);
		_putchar(lastdigit + '0');
		return (lastdigit);
	}
}

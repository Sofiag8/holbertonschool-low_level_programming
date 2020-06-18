#include "holberton.h"
/**
 * print_numbers - prints the numbers from 0 to 9
 *
 * @: character to print
 *
 * Return: void
 */
void print_numbers(void)
{
	char a;

	for (a = '0'; a <= '9'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}

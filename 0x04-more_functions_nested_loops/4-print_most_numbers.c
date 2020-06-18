#include "holberton.h"
/**
 * print_most_numbers - Prints the numbers from 0 to 9
 * _putchar - Print characters one by one
 * @void: Description of a empty parameter
 *
 * Description: This prints the numbers from 0 to 9 not included 2 and 4
 * Return: 0 Value if it works
 */
void print_most_numbers(void)
{
	char a;

	for (a = '0'; a <= '9'; a++)
	{
		if (a != '2' && a != '4')
			_putchar(a);
	}
	_putchar('\n');
}

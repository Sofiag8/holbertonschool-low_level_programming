#include "holberton.h"
/**
 * more_numbers - Prints the numbers from 0 to 14, ten times
 * _putchar - Print characters one by one
 * @void: Description of a empty parameter
 *
 * Description: This prints the numbers from 0 to 14, ten times
 * Return: 0 Value if it works
 */
void more_numbers(void)
{
	int a, b;

	for (b = 1; b <= 10; b++)
	{
		for (a = 0; a <= 14; a++)
		{
			if (a > 9)
			{
				_putchar((a / 10) + '0');
			}
			_putchar((a % 10) + '0');
		}
		_putchar('\n');
	}
}

#include "holberton.h"
/**
 * times_table - print the nine table
 *
 * @void: will be evaluated
 *
 * Description: 9 times tables starting with 0
 * Return: to cero success
 */
void times_table(void)
{
	int x, y, operation;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			operation = x * y;
			if (y == 0 && operation < 10)
			{
				_putchar((operation) + '0');
			}
			else if (x == 0 && x != 0)
			{
				_putchar(' ');
				_putchar((operation) + '0');
			}
			else if (operation < 10)
			{
				_putchar(' ');
				_putchar((operation) + '0');
			}
			else
			{
				_putchar(((operation) / 10) + '0');
				_putchar(((operation) % 10) + '0');
			}
			if (y < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

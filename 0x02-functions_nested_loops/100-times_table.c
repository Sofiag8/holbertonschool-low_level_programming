#include "holberton.h"
/**
 * print_times_table - Prints the times table, starting with 0
 * @n: The evaluated input
 *
 * Description: Prints the table
 * Return: 0 Value
 */
void print_times_table(int n)
{
	int x, y, mult;

	if (n >= 0 && n < 15)
	{
		for (x = 0; x <= n; x++)
		{
			for (y = 0; y <= n; y++)
			{
				mult = x * y;
				if (y == 0)
					_putchar('0');
				else
				{
					_putchar(',');
					_putchar(' ');
				}
				if (y != 0 && mult >= 0 && mult < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(mult + '0');
				}
				if (mult >= 10 && mult < 100)
				{
					_putchar(' ');
					_putchar(mult / 10 + '0');
					_putchar(mult % 10 + '0');
				}
				if (mult >= 100)
				{
					_putchar(mult / 100 + '0');
					_putchar((mult / 10) % 10 + '0');
					_putchar(mult % 10 + '0');
				}
			}
			_putchar('\n');
		}
	}
	else
		return;
}

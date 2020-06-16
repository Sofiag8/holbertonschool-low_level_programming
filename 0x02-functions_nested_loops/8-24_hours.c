#include "holberton.h"
/**
 * jack_bauer - print every minute
 * @void: will be evaluated
 *
 * Description: printing the minutes and hours of Jack Bauer day
 * Return: void if is true
 */
void jack_bauer(void)
{
	int h, m;

	for (h = 0; h <= 23; h++)
	{
		for (m = 0; m <= 59; m++)
		{
			_putchar(h / 10 + '0');
			_putchar(h % 10 + '0');
			_putchar(':');
			_putchar(m / 10 + '0');
			_putchar(m % 10 + '0');
			_putchar('\n');
		}
	}
}

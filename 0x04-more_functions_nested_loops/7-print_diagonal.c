#include "holberton.h"
/**
 * print_diagonal - draw a diagonal line on the terminal
 * _putchar - Print characters one by one
 * @n: number of times \ must be printed
 *
 * Description: This draws a diagonal line on the terminal
 * Return: 0 Value if it works
 */
void print_diagonal(int n)
{
int y, z;

	for (y = 0; y < n; y++)
	{
		for (z = 0; z < y; z++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
	if (n < 1)
		_putchar('\n');
}

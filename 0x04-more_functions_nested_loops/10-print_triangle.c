#include "holberton.h"
/**
 * print_triangle - Draws a triangle line in the terminal
 * _putchar - Prints characters one by one
 * @size: Parameter of size
 *
 * Description: Draws a triangle
 * Return: 0 Value
 */
void print_triangle(int size)
{
	int y, z;

	if (size > 0)
	{
		for (z = 1; z <= size; z++)
		{
			for (y = 1; y <= size; y++)
			{
				if (y <= size - z)
					_putchar(' ');
				else
					_putchar('#');

			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}

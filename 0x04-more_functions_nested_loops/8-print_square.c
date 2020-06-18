#include "holberton.h"
/**
 * print_square - Draws a square
 * _putchar - Prints characters one by one
 * @size: Parameter of size
 *
 * Description: Draws a square
 * Return: 0 Value
 */
void print_square(int size)
{
	int y, z;

	for (y = 0; y < size; y++)
	{
		for (z = 0; z < size; z++)
			_putchar('#');
		_putchar('\n');
	}
	if (size < 1)
		_putchar('\n');
}

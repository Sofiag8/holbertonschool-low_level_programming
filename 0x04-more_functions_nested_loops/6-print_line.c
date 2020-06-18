#include "holberton.h"
/**
 * print_line - draw line in the terminal
 * _putchar - Print characters one by one
 * @n: number of times character must be printed
 *
 * Description: This draws a straight line in the terminal
 * Return: 0 Value if it works
 */
void print_line(int n)
{
	char a = '_';
	int  b;

	for (b = 0; b <= n; b++)
	{
		if (b != 0)
			_putchar(a);
	}
	_putchar('\n');
}

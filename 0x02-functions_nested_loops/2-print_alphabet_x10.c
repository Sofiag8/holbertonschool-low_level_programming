#include "holberton.h"
/**
* print_alphabet_x10 - print the alphabet 10 times in a row in lowercase
*
* Description_ Print the alphabet 10 times
*/
void print_alphabet_x10(void)
{
	char a, b;

	for (a = 1; a <= 10; a++)
	{
		for (b = 'a'; b <= 'z'; b++)
		{
			_putchar(b);
		}
		_putchar('\n');
	}
}

#include "holberton.h"
#include <stdio.h>
/**
 * main - This print all multiples of 5 and 3 of 1024
 * @void: The evaluated input
 *
 * Description: computes & prints the sum of all the multiples
 * Return: 0 Value
 */
int main(void)
{
	int y, x = 1024;

	for (x = 0; x < 1024; x++)
	{
		if (x % 3 == 0 || x % 5 == 0)
			y += x;
	}
	printf("%d\n", y);
	return (0);
}

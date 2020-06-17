#include <stdio.h>
/**
 * main - This print fibonacci numbers
 * @void: The evaluated input
 *
 * Description: computes & prints
 * Return: 0 Value
 */
int main(void)
{
	long int x = 0, y = 1, z, w;

	for (w = 0; w < 50; w++)
	{
		z = x + y;
		x = y;
		y = z;
		if (w < 49)
			printf("%li, ", z);
		else
			printf("%li\n", z);
	}
	return (0);
}

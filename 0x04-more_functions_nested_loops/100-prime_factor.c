#include <stdio.h>
/**
 * main - prints the largest prime factor
 * printf - prints the largest prime factor
 *
 * Description: Printing the prime factors
 * Return: 0 when is success
 */
int main(void)
{
	long int a, n = 612852475143;

	for (a = 2; a < n; a++)
		if (n % a == 0)
		{
			n = n / a;
		}
	printf("%ld\n", a);
	return (0);
}

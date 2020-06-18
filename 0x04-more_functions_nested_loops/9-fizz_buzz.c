#include <stdio.h>
/**
 * main - test
 * @void: Parameter of times
 * Description test as an interviews to filter candidates
 * Return: 0 is success
 */
int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 3 == 0)
			printf("Fizz");
		if (a % 5 == 0)
			printf("Buzz");
		if (a % 3 != 0 && a % 5 != 0)
			printf("%d", a);
		if (a != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}

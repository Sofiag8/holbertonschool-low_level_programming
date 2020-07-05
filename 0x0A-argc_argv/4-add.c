#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>
/**
 * main - program that prints its name
 *
 * @argc: the variable for the number or arguments
 * @argv: an array varible containing the program arguments
 * Return: 0 is success
 */
int main(int argc, char *argv[])
{
	int s, x = 0;
	char *a;
	int b;

	if (argc <= 2)
	{
		printf("0\n");
		return (0);
	}
	for (s = 1; s < argc; s++)
	{
		a = argv[s];
		for (b = 0; a[b] != '\0'; b++)
			if (a[b] > '9' || a[b] < '0')
			{
				printf("Error\n");
				return (1);
			}
		x += atoi(argv[s]);
	}
	printf("%d\n", x);
	return (0);
}

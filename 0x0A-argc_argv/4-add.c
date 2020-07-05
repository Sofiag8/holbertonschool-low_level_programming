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
	int s, x;

	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}
	for (s = 1; s < argc; s++)
	{
		x += atoi(argv[s]);
	}
	if (x != '0')
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", x);
	return (0);
}

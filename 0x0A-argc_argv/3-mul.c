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
	int a, b, multiply;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	multiply = a * b;
	{
		printf("%d\n", multiply);
		return (0);
	}
}

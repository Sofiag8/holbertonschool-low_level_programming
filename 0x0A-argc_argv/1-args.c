#include <stdio.h>
#include "holberton.h"
/**
 * main - program that prints its name
 *
 * @argc: the variable for the number or arguments
 * @argv: an array varible containing the program arguments
 * Return: 0 is success
 */
int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		if (*argv[a])
		{
			printf("%d\n", a);
		}
	}
	return (argc);
}

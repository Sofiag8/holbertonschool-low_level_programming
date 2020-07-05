#include <stdio.h>
#include "holberton.h"
/**
 * main - program that prints its name
 *
 * @argc: the variable for the number or arguments
 * @argv: an array varible containing the program arguments
 * Return: 0 is success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}

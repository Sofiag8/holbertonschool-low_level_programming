#include <stdio.h>
#include "holberton.h"
/**
 * main - program that prints its name
 *
 * @argc: the variable for the number or arguments unused
 * @envp: enviroment path variable
 * Return: 0 is success
 */
int main(int argc __attribute__((unused)), char *envp[])
{
	while (*envp)
	{
		printf("%s\n", *envp++);
	}
	return (0);
}

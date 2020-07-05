#include <stdio.h>
/**
 * main - program that prints its name
 *
 * @argc: int variable to check
 *
 * Return: 0 is success
 */
int main (int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

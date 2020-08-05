#include "holberton.h"
/**
 * main - check the code for Holberton School students.
 * @ac: number of arguments
 * @av: file to copy
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	/* if is not the correct number of arguments */
	if (ac != 3)
	{
		/* task condition. on the POSIX STANDAR ERROR = STDERR_FILENO*/
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	/* call the copy function */
	copy_file(av[1], av[2]);
	return (0);
}
/**
 * copy_file - copies the content of a file to another file
 * @file_to: where im going to copy
 * @file_from: file to copy
 * Return: void
 */
void copy_file(char *file_from, char *file_to)
{
	int fd1, fd2;
	char buffer[SIZE];
	/* create the file to copy if it exists truncate */
	/* Permissions of the created file: rw-rw-r-- */
	fd1 = open(file_to, O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	fd2 = open(file_from, O_RDONLY);
	/* task condition */
	if ((!file_from) | file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			file_from);
		exit(98);
	}
	while ((read(fd2, buffer, 1024)) != 0)
	{
		if (fd2 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
			exit(98);
		}
		write(fd1, buffer, fd2);
	}
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	if (close(fd1) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", fd1);
	exit(100);
	if (close(fd2) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", fd2);
	exit(100);
}

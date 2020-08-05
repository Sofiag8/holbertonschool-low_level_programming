#include "holberton.h"
/**
 * Betty - dont bother betty
 * @file_from: string
*/
void Betty(char *file_from)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
	exit(98);
}
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
	int fd2, fd1, r_w, r_r;
	char buffer[1024];

	fd2 = open(file_from, O_RDONLY);
	if ((file_from == NULL) | (fd2 == -1))
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			file_from);
		exit(98);
	}
	/* create the file to copy if it exists truncate */
	/* Permissions of the created file: rw-rw-r-- */
	fd1 = open(file_to, O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	r_r = read(fd2, buffer, 1024);
	while (r_r > 0)
	{
		if (r_r == -1)
		{
			Betty(file_from);
		}
		r_w = write(fd1, buffer, r_r);
	}
	if (r_w == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	if (close(fd2) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", file_to);
	exit(100);
	if (close(fd1) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", file_from);
	exit(100);
}

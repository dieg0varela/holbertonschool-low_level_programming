#include "holberton.h"
#include <stdio.h>
/**
* close_fd - Entry point
* @fd1: File descriptor
* @fd2: File descriptor
*
* Description: Close file descritors
* Return: Nothing
*/
void close_fd(int fd1, int fd2)
{
	if ((close(fd1) == -1))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd1);
		exit(100);
	}

	if ((close(fd2) == -1))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd2);
		exit(100);
	}
}

/**
* main - Entry point
* @argc: argument count
* @argv: argument vector
*
* Description: Copy a file
* Return: 0 Success
*/
int main(int argc, char *argv[])
{
	int orig = 0, new = 0, size = 0;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	orig = open(argv[1], O_RDONLY);
	new = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	buf = malloc(sizeof(char) * 1024);
	if (!buf)
		return (1);
	size = read(orig, buf, 1024);
	if ((orig == -1) || (size == -1))
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	while (size != 0)
	{
		if ((write(new, buf, size)) == -1 || new == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buf);
			exit(99);
		}
		size = read(orig, buf, 1024);
	}
	close_fd(orig, new);
	free(buf);

	return (0);
}

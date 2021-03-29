#include "holberton.h"
/**
* read_textfile - Entry point
* @filename: Pointer to file
* @letters: Amount of letters to print
*
* Description: Print the content of a textfile
* Return: The amount of letters printed or 0 if fail
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int let_r = 0, let_w = 0, fd = 0;
	char *buf;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);
	let_r = read(fd, buf, letters);
	let_w = write(STDOUT_FILENO, buf, let_r);
	if ((let_w == -1) || (let_w < let_r))
		return (0);
	free(buf);
	close(fd);
	return (let_w);
}

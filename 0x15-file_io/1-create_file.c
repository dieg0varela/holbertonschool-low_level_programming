#include "holberton.h"
/**
* create_file - Entry point
* @filename: Pointer to file
* @text_content: Content to insert in the file
*
* Description: Create a new file with the given content
* Return: 1 Success or -1 Fail
*/
int create_file(const char *filename, char *text_content)
{
	int fd = 0, pichu = 0;

	if (!filename)
		return (-1);
	if (!text_content)
		text_content = "";

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	while (text_content[pichu] != '\0')
	{
		pichu++;
	}
	if ((write(fd, text_content, pichu)) == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}

#include "holberton.h"
/**
* append_text_to_file - Entry point
* @filename: Pointer to file
* @text_content: Content to insert in the file
*
* Description: Append text to a file
* Return: 1 Success or -1 Fail
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd = 0, pichu = 0;

	if (!filename)
		return (-1);
	if (!text_content)
		return (1);

	fd = open(filename, O_APPEND | O_WRONLY);
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

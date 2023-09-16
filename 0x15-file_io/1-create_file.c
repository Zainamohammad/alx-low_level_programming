#include "main.h"
#include <string.h>
/**
 * create_file - a function that creates a file
 *
 * @filename: the file to be created
 * @text_content: the string to be written into the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len;
	ssize_t write_check;

	if (filename == NULL)
		return (-1);
	fd = creat(filename, 0600);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	if (text_content != NULL)
	{
		len = strlen(text_content);
		write_check = write(fd, text_content, len);
		if (write_check == -1)
			return (-1);
	}
	return (1);
}

#include "main.h"
/**
 * read_textfile - a function that reads a text file and
 * prints it to the POSIX standard output
 *
 * @filename: the file to be read
 * @letters: the number of letters it should read and print
 *
 * Return: returns the actual number of letters it
 * could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t read_char, printed_char;
	void *str;
	int fd;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	str = malloc(sizeof(char) * letters);
	if (str == NULL)
		return (0);
	read_char = read(fd, str, letters);
	if (read_char == -1)
		return (0);
	printed_char = write(STDOUT_FILENO, str, read_char);
	if (printed_char != read_char)
		return (0);
	close(fd);
	return (printed_char);
}

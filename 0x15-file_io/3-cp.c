#include "main.h"
/**
 * main - a program to copy the content of a file
 * into another file
 *
 * @argc: number of arguments
 * @argv: an array of the arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int fd, fd2;
	ssize_t rcheck, wcheck;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd = open(argv[1], O_RDWR);
	if (fd == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	rcheck = read(fd, buffer, sizeof(buffer));
	if (rcheck == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd2 = creat(argv[2], 0664);
	if (fd2 == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	wcheck = write(fd2, buffer, rcheck);
	if (wcheck == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	close(fd);
	if (close(fd2) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
	return (0);
}

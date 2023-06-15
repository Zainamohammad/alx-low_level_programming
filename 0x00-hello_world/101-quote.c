#include <unistd.h>
#include <string.h>

/**
 * main - entry point
 *
 * Description: displaying a string to the standard output
 * without using printf or puts
 *
 * Return: 1
 */

int main(void)
{
	char q[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, q, strlen(q));
	return (1);
}

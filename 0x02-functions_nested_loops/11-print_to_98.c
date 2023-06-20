#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - function that prints the numbers from n to 98
 * @n: the number from which the program starts to count till 98
 * Return: 0
 */
void print_to_98(int n)
{
	int counter;

	if (n > 98)
	{
		for (counter = n; counter >= 98; --counter)
		{
			printf("%d", counter);
			if (counter != 98)
				printf(", ");
		}
	}
	else if (n == 98)
		printf("%d", n);
	else
	{
		for (counter = n; counter <= 98; ++counter)
		{
			printf("%d", counter);
			if (counter != 98)
				printf(", ");
		}
	}
	printf("\n");
}

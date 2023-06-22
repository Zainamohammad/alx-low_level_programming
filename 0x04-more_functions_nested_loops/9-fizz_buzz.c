#include <stdio.h>
/**
 * main - entry point
 *
 * Description - a program that prints the numbers from
 * 1 to 100 and replacing some of the numbers with the
 * words fizz and buzz
 *
 * Return - 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz");
		if ((i % 3 == 0) && (i % 5 != 0))
			printf("Fizz");
		if ((i % 5 == 0) && (i % 3 != 0))
			printf("Buzz");
		if ((i % 5 != 0) && (i % 3 != 0))
			printf("%d", i);
		if (i != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}

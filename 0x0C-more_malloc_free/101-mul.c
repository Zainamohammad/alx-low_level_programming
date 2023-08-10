#include "main.h"
/**
 * _strlen - a function that prints the length of
 * a string
 *
 * @s: the string the length of which is to be calculated
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i, count = 0;

	for (i = 0; *s != '\0'; ++i)
	{
		++s;
		++count;
	}
	return (count);
}
/**
 * _isdigit - a function to determine whether the character
 * is a digit or not
 *
 * @i: a variable with the input type int
 *
 * Return: returns 1 if i is a digit and 0 if else
 */
int _isdigit(int i)
{
	if ((i >= 48) && (i <= 57))
		return (1);
	else
		return (0);
	return (0);
}
/**
 * main - a program that multiplies two positive numbers
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int k = 0, temp = 0, mul;
	unsigned int i, j, len1, len2, sum;
	char *result;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 1; i < 3; ++i)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			_isdigit(argv[i][j]);
			if (!_isdigit(argv[i][j]))
			{
				++k;
				break;
			}
			++j;
		}
	}
	if (k != 0)
	{
		printf("Error\n");
		exit(98);
	}
	len1 = _strlen(argv[1]);
	len2 = _strlen(argv[2]);
	sum = len1 + len2;
	result = malloc(sum + 1);
	if (result == NULL)
		return ('\0');
	for (i = 0; i < len2; ++i)
	{
		for (j = 0; j < len1; ++j)
		{
			mul = argv[2][j] * argv[1][i];
			result[sum - (j + i)] = temp + mul % 10;
			temp = mul / 10;
		}

	}
	return (0);
}

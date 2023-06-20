#include "main.h"
/**
 * _abs - a function to determine the absolute value
 * of an integer
 * @num: the variable of type int in which the numbers are stored
 * Return: 0
 */
int _abs(int num)
{
	int abs = -num;

	if (num >= 0)
		return (num);
	else
		return (abs);
}

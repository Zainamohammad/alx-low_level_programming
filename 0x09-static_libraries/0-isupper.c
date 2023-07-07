#include "main.h"
/**
 * _isupper - a function to determine whether the character
 * is an uppercase or not
 *
 * @alpha: a variable with the input type int
 *
 * Return: returns 1 if alpha is uppercase and 0 if else
 */
int _isupper(int alpha)
{
	if ((alpha >= 65) && (alpha <= 90))
		return (1);
	else
		return (0);
	return (0);
}


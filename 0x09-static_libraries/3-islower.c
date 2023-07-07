#include "main.h"
/**
 * _islower - a function to determine whether the character
 * is a lowercase or not
 *
 * @alpha: a variable with the input type int
 *
 * Return: returns 1 if alpha is a lower case and 0 if else
 */
int _islower(int alpha)
{
	if ((alpha >= 97) && (alpha <= 122))
		return (1);
	else
		return (0);
	return (0);
}

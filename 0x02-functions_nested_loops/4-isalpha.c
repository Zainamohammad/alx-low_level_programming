#include "main.h"
/**
 * _isalpha - function to determine the letters
 * @alpha: the variable of type int
 *
 * Return: returns 1 if alpha is a letter and 0 if else
 */
int _isalpha(int alpha)
{
	if ((alpha >= 65) && (alpha <= 122))
		return (1);
	else
		return (0);
}

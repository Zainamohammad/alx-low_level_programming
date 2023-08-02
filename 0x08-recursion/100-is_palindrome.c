#include "main.h"
/**
 * _strlen_recursion - s function that returns
 * the length of a string
 *
 * @s: the string whose length is to be returned
 *
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
/**
 * palindrome - a function that checks if a string
 * is a palindrome or not
 *
 * @s: the string to be checked
 * @i: the iteration throughthe string
 *
 * Return: 1 if it is, 0 if it is not
 */
int palindrome(char *s, int i)
{
	int x = _strlen_recursion(s);

	if (s[i] != s[x - 1 - i])
		return (0);
	if (x % 2 != 0 && i == 1 + x / 2)
		return (1);
	if (x % 2 == 0 && i == x / 2)
		return (1);
	return (palindrome(s, i + 1));
}
/**
 * is_palindrome - a function that checks if a string
 * is a palindrome or not
 *
 * @s: the string to be checked
 *
 * Return: 1 if it is, 0 if it is not
 */
int is_palindrome(char *s)
{
	return (palindrome(s, 0));
}


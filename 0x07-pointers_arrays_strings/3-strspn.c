/**
 * _strspn - a function that gets the length of
 * a prefix substring
 *
 * @s: a pointer to the string
 * @accept: a pointer to the
 * @n: number of bytes of memory area to be copied
 *
 * Return: a pointer to the memory area (dest)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count = 0;

	for (i = 0; s[i] != ' '; ++i)
	{
		for (j = 0; accept[j] != '\0'; ++j)
		{
			if (s[i] == accept[j])
				++count;
		}
	}
	return (count);
}


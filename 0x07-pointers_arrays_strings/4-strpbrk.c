/**
 * _strpbrk - function that searches a string for any
 * of a set of bytes
 *
 * @s: a pointer to the string to be searched
 * @accept: a pointer to the other string
 *
 * Return: a pointer to the first occurence of any
 * byte of accept in s
 */
char *_strpbrk(char *s, char *accept)
{
	int j;

	for (; *s != '\0'; ++s)
	{
		for (j = 0; accept[j] != '\0'; ++j)
		{
			if (*s == accept[j])
				break;
		}
		if (*s == accept[j])
			break;
	}
	if (*s == accept[j])
		return (s);
	return ('\0');
}



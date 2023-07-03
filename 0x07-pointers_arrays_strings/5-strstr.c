/**
 * _strstr - a function that locates a substring
 *
 * @haystack: the string in which the substring
 * is located or not
 * @needle: the sunbstring to be located
 *
 * Return: a pointer to the beginning of the located
 * substring, or NULL if it is not located
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, x, count = 0;

	for (i = 0; needle[i] != '\0'; ++i)
		++count;
	for (i = 0; haystack[i] != '\0'; ++i)
	{
		if (haystack[i] == *needle)
		{
			x = i;
			for (j = 0; j < count; ++j)
			{
				if (haystack[i] != needle[j])
					break;
				++i;
			}
		}
		if (j == count)
			return (haystack + x);
	}
	return ('\0');
}

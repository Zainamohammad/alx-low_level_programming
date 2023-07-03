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
	char *needle2, *haystack2;

	needle2 = needle;
	haystack2 = haystack;

	for (; *haystack != '\0'; ++haystack)
	{
		if (*haystack == *needle)
		{
			for (; *needle2 != '\0'; ++needle2)
			{
				if (*haystack2 != *needle2)
				{
					break;
				}
			}
		}
		if (*needle2 == '\0')
			return (haystack);
	}
	return ('\0');
}

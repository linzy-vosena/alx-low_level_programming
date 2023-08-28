#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *c = haystack;
		char *t = needle;

		while (*c == *t && *t != '\0')
		{
			c++;
			t++;
		}

		if (*t == '\0')
			return (haystack);
	}
	return (0);
}

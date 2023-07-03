#include "main.h"

/**
*_strstr - entry point
*
*@haystack: input
*@needle: input
*
*Return: 0
*/
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *h = haystack;
		char *n = needle;

		while (*h == *n && *n != '\0')
		{
			h++;
			n++;
		}
		if (*h == '\0')
			return (haystack);
	}
	return (0);
}

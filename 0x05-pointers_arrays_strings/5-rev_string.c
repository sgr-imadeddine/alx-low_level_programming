#include "main.h"
/**
*rev_string - function that reverses a string.
*
*@s: input string
*
*Return: reversed  string
*/
void rev_string(char *s)
{
	char r = s[0];
	int l = 0;
	int n;

	while (s[l] != '\0')
		l++;
	for (n = 0; n < l; n++)
	{
		l--;
		r = s[n];
		s[n] = s[l];
		s[l] = r;
	}
}

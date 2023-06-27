#include "main.h"
/**
*puts2 - function that prints every other character of a string,
*starting with the first character
*
*@str: input string
*/
void puts2(char *str)
{
	int n;
	int m = 0;

	while (str[m] != '\0')
	{
		m++;
	}
	for (n = 0; n < m; n += 2)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}

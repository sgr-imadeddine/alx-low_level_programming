#include "main.h"
/**
*puts_half - function that prints half of a string
*
*@str: input string
*
*Return: half the string
*/
void puts_half(char *str)
{
	int n = 0;
	int m;

	while (str[n] != '\0')
	{
		n++;
	}
	if (n % 2 == 1)
	{
		m = (n - 1) / 2;
		m += 1;
	}
	else
	{
		m = n / 2;
	}
	for (; m < n; m++)
	{
		_putchar(str[m]);
	}
	_putchar('\n');
}

#include "main.h"
/**
*_isalpha - function that checks for alphabetic character
*@c: ASCII code character
* Return: 1 if it is a letter, lowercase or uppercase, 0 if not
*/
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

#include "main.h"
/**
*_islower - function that checks for lowercase character
*@c: ASCII code character
* Return: 1 if true 0 if not
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

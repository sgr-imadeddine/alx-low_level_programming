#include "main.h"
/**
*print_sign - function that prints the sign of a number
*@n: integer input
* Return: 0 if i=0, 1 if i>0, -1 if i<0
*/
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}

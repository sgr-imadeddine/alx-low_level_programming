#include "main.h"

/**
*print_diagonal - function that draws a diagonal line
*@c: number of times to print diagonal lines
*Return: empty
*/

void print_diagonal(int n)
{
	int d, l;

	if ( n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (d = 0; d < n; d++)
		{
			for (l = 0; l < d; l++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}

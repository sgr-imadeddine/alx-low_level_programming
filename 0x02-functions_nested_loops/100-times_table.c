#include "main.h"
/**
*print_times_table - function that prints the n times table, starting with 0
*@n: times table to be printed
*/
void print_times_table(int n)
{
	int nn, m, p;

	if (n >= 0 && n <= 15)
	{
		for (nn = 0; nn <= n; nn++)
		{
			_putchar(48);
			for (m = 1; m <= n; m++)
			{
				_putchar(',');
				_putchar(' ');
				p = nn * m;
				if (p <= 99)
					_putchar(' ');
				if (p <= 9)
					_putchar(' ');
				if (p >= 100)
				{
					_putchar((p / 100) + 48);
					_putchar(((p / 10) % 10) + 48);
				}
				else if (p <= 99 && p >= 10)
				{
					_putchar((p / 10) + 48);
				}
				_putchar((p % 10) + 48);
			}
			_putchar('\n');
		}
	}
}

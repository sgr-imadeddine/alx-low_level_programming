#include "main.h"
/**
*print_alphabet_x10 - function that prints 10 times the alphabet
* Return: void
*/
void print_alphabet_x10(void)
{
	int l;
	int a;

	for (l = 1; l <= 10; l++)
	{
		for (a = 97; a <= 122; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}

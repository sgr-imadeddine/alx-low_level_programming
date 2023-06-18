#include <stdio.h>
/**
*main - starting point
*description:  the alphabet -(e,q)
* Return: 0
*/
int main(void)
{
	char a, e, q;

	e = 'e';
	q = 'q';
	for (a = 'a'; a <= 'z'; a++)
	{
		if (a != e && a != q)
			putchar(a);
	}
	putchar('\n');
	return (0);
}

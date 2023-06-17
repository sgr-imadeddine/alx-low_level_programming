#include <stdio.h>
/**
*main - starting point
*description:  the alphabet in lowercase, and then in uppercase
* Return: 0
*/
int main(void)
{
	int a = 97;
	int b = 65;

	while (a <= 122)
	{
		putchar(a);
	}
	while (b <= 90)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}

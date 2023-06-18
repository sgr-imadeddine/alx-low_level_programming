#include <stdio.h>
/**
*main - starting point
*description:  the the numbers of base 16
* Return: 0
*/
int main(void)
{
	int n;
	char a;

	for (n = '0'; n <= '9'; n++)
		putchar(n);
	for (a = 'a'; a <= 'f'; a++)
		putchar(a);
	putchar('\n');
	return (0);
}

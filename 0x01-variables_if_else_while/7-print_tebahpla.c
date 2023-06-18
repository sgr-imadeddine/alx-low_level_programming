#include <stdio.h>
/**
*main - starting point
*description:  the alphabet in reverse
* Return: 0
*/
int main(void)
{
	char z;

	for (z = 'z'; z >= 'a'; z--)
		putchar(z);
	putchar('\n');
	return (0);
}

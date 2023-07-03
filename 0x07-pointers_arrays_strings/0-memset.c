#include "main.h"
/**
*_memset - function that fills the block of memory with a specific value
*
*@s: starting adress
*@b: desired value
*@n: number of bytes to be changed
*
*Return: changed array
*/
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

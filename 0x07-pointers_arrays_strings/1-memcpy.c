#include "main.h"

/**
*_memcpy - copies bytes from memory area to memory area
*
*@dest: stored memory
*@src: copied memory
*@n: number of bytes
*
*Return: copied memory with n bytes changed
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x = 0;
	int i = n;

	for (; x < i; x++)
	{
		dest[x] = src[x];
		n--;
	}
	return (dest);
}

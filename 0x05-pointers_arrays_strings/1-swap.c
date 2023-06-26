#include "main.h"

/**
*swap_int - function that swaps the values of two integers
*
*@a: input integer
*@b: input integer
*
*Return: empty
*/
void swap_int(int *a, int *b)
{
	int n = *a;
	*a = *b;
	*b = n;
}

#include "main.h"
/**
*_abs - function that computes the absolute value of an integer
*@i: integer input
* Return: absolute value
*/
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}

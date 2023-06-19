#include <stdio.h>
/**
*main - starting point
*description: combinations of three digits
* Return: 0
*/
int main(void)
{
int n, m, p;

for (n = '0'; n < '8'; n++)
{
for (m = n + 1; m <= '8'; m++)
{
for (p = m + 1; p <= '9'; p++)
{
if (m != n && m != p && n != p)
{
putchar(n);
putchar(m);
putchar(p);
if (n == '7' && m == '8' && p == '9')
continue;
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}


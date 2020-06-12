#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int x, y;
for (x = '0'; x <= '8'; x++)
{
for (y = '1'; y <= '9'; y++)
{
if (!(x == y) && x < y)
{
putchar(x);
putchar(y);
}

if (!(x == '8' && y == '9') && !(x == y) && (x < y))
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}

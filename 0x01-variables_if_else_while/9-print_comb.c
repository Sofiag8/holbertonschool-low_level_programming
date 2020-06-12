#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int s = '0';

while (s <= '9')
{
putchar(s);
if (s != '9')
{putchar(',');
putchar(' ');
}
s++;
}

putchar('\n');
return (0);
}

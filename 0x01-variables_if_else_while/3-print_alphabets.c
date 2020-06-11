#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
char alphabet = 'a';
char ALPHABET = 'A';

while (alphabet <= 'z')
putchar (alphabet++);

while (ALPHABET <= 'Z')
putchar (ALPHABET++);

putchar ('\n');
return (0);
}

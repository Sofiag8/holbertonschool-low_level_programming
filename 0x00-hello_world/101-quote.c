#include <unistd.h>
/*
 * main - Entry point
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
char *quote = "and the piece of art is useful\" - Dora Korpar, 2015-10-19\n";

write(2, quote, 59);
return (1);
}

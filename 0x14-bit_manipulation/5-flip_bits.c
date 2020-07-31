#include "holberton.h"
/**
 * flip_bits - tells the number of bits to flip to
 * get from one number to another
 * @n: the first given number
 * @m: the number to flip
 * Return: an unsigned int (numebr of bits)
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int numbits = 0;
		numbits = (countsetbits(n ^ m));
	/* Return count of set bits in */
	/* n XOR m */
		return (numbits);
}
/**
 * countsetbits - count set bits
 * @n: the given number
 * Description: function that count set bits
 * Return: an integer
 */
unsigned int countsetbits(unsigned int a)
{
	unsigned int count;

	count = 0;
	while (a > 0)
	{
		count++;
		a &= (a - 1);
	}
	return (count);
}

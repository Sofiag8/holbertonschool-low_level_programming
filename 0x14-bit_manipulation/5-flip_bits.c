#include "holberton.h"
unsigned int countsetbits(unsigned int n);
/**
 * flip_bits - tells the number of bits to flip to
 * get from one number to another
 * @n: the first given number
 * @m: the number to flip
 * Return: an unsigned int (numebr of bits)
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	/* Return count of set bits in */
	/* n XOR m */
	return (counsetbits(n ^ m));
}
/**
 * countsetbits - count set bits
 * @n: the given number
 * Description: function that count set bits
 * Return: an integer
 */
unsigned int countsetbits(unsigned int n)
{
	unsigned int count;

	count = 0;
	while (n > 0)
	{
		count++;
		n &= (n - 1);
	}
	return (count);
}

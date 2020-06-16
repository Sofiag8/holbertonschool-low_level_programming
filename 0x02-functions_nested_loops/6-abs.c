#include "holberton.h"
/**
 * _abs - computes the absolute value of the integer argument
 *
 * Description: computing the values
 *
 * @s: character to evaluate
 * Return: value 0 runs
 */
int _abs(int s)
{
	if (s >= 0)
		return (s);
	else
		return (s * -1);
}

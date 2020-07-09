#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * array_range - create an array of integers from 0 to 10
 *
 * @min: integer with 0 according to the main
 * @max: integer with 10 according to the main
 *
 * Return: a pointer to the new array or NULL if it fail
 */
int *array_range(int min, int max)
{
	/* create an int pointer variable for malloc */
	/* variable to know the size of the range so I can use sizeof */
	/* variable to run the positions and set them to the new pointer */
	int *newarray;
	int positions;
	int runner;
	/* set one of the task condition */
	if (min > max)
		return (NULL);
	/* find the range size */
	/* the array contains 0,1,2,3,4,5,6,7,8,9,10, with 11 total elements */
	/* so I need to set the size 11 elements to my variable */
	/* 10 - 0 + 1 = 11 */
	positions = max - min + 1;
	/* now memory allocation */
	newarray = malloc(positions * sizeof(int));
	if (newarray == NULL)
		return (NULL);
	/* I must run the elements between 0 and 10 to set them in *newarray */
	/* runner = min number in any case my program receives */
	/* e.g if min = 2 then runner = 2 if max = 5 then 2,3,4,5 */
	/* runner ascend in the same measure that min keeps ascending */
	for (runner = 0; runner <= max; runner++, min++)
		newarray[runner] = min;
	return (newarray);
}

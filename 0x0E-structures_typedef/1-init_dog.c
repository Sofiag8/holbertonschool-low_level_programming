#include <stdio.h>
#include "dog.h"
/**
 * init_dog - initialize a variable of type struct dog
 *
 * @d: pointer to the variable struct dog
 * @name: a pointer to the variable char type
 * @age: variable float type
 * @owner: a pointer to a type char variable
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

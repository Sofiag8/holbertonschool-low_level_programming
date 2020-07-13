#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - a new type
 *
 * @name: the name of the dog (Django)
 * @age: the age of the dog (3.5)
 * @owner: the name of the owner (Jay)
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}
	dog;
#endif /* DOG */

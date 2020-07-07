#include "holberton.h"
#include <stdlib.h>
/**
 * _strdup - gives a pointer to a newly allocated space in memory
 *
 * @str: string to duplicate
 *
 * Return: ptr or NULL if str is equal to NULL
 */
char *_strdup(char *str)
{
	char *ptr;
	int size;

	if (str == NULL)
		return (NULL);
	/* recorro con size str para saber su tamaño */
	for (size = 0; str[size] != '\0'; size++)
		/* agrego un espacio de memoria para el valor de ptr */
		ptr = malloc((size + 1) * sizeof(char));
	/* size + 1 así me agregua en la memoria espacio tambien para '\0' */
	/* condición que me compruebe que el espacio de memoria fue agregado */
	if (ptr == NULL)
		return (NULL);
	/*utilizo de nuevo size para agregar el contenido de str en ptr */
	for (size = 0; str[size] != '\0'; size++)
		ptr[size] = str[size];
	return (ptr);
}

#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - makes a dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: Pointer to dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int i;
	char *ptr;

	if (name == 0 || owner == 0)
		return (NULL);
	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	for (i = 1, ptr = name; *ptr; i++)
		ptr++;
	d->name = malloc(i);
	if (d->name == 0)
	{
		free(d);
		return (NULL);
	}
}

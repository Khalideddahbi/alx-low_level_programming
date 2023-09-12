#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog with the given name, age, and owner.
 * @name: The name
 * @age: The age
 * @owner: The owner
 *
 * Return: Pointer to the newly created dog_t structure, or NULL on failure.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog_ptr;
	char *name_copy;
	char *owner_copy;

	new_dog_ptr = malloc(sizeof(dog_t));
	if (new_dog_ptr == NULL)
		return (NULL);

	name_copy = strdup(name);
	owner_copy = strdup(owner);

	if (name_copy == NULL || owner_copy == NULL)
	{
		free(owner_copy);
		free(new_dog_ptr);
		return (NULL);
	}

	new_dog_ptr->name = name_copy;
	new_dog_ptr->age = age;
	new_dog_ptr->owner = owner_copy;

	return (new_dog_ptr);
}

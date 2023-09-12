#include "dog.h"

/**
 * init_dog - Initialize a variable of type struct dog
 * @d: Pointer to the struct dog to initialize
 * @name: Pointer to the name
 * @age: Age
 * @owner: Pointer to the owner
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

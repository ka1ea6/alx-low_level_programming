#include "dog.h"
/**
 * init_dog - initializes the dog struct with the passed values
 *
 * @d: pointer to the struct dog to be affected
 * @name: name to be used in initialization.
 * @age: age to be used in initialization
 * @owner: owner to be used in initialization.
 * Return: Nothing
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

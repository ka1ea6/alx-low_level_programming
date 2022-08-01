#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prints the data about the dog
 * struct passed.
 * @d: pointer to the dog Struct
 *
 * Return: Nothing.
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: ");
		d->name == NULL ? printf("(nil)\n") : printf("%s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: ");
		d->owner == NULL ? printf("(nil)\n") : printf("%s\n", d->owner);
	}
}

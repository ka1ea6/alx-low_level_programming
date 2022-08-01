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
	printf("Name: %s\n", d->name);
	printf("Age: %.1f\n", d->age);
	printf("Owner: %s\n", d->owner);
}

#include "dog.h"
#include <stdio.h>

int _strlen(*char word)
{
	int i;

	while (word[i] != 
/* new_dog - creates a new dog struct
 *
 * @name: name of new dog struct
 * @age: age of new dog struct
 * @owner: owner of new dog struct
 *
 * Return: dog_t if successful, NULL otherwise
 */

dog_t new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;

	if (!name || age < 0 || !owner)
		return (NULL);

	newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
		return (NULL);


	newDog->name = name;
	newDog->age = age;
	newDog->owner = owner;
	if (newDog == NULL)
		return (NULL);
	return (&newDog);
}

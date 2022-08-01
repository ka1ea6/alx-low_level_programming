#include "dog.h"
#include <stdio.h>

/**
 * _strlen - a function that gets a length of string
 *
 * @word: the string to get the length
 *
 * Return: length of @word
*/

int _strlen(*char word)
{
	int i;

	while (word[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * _strcpy - a function that returns @dest with a copy of a string from @src
 *
 * @src: string to copy
 * @dest: copy string to here
 *
 * Return: @dest
*/

char *_strcpy(*dest, *src)
{
	int i;
	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}
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
	newDog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*newDog).name == NULL)
		{
			free((*newDog).name);
			free(newDog);
			return (NULL);
		}
	
	newDog->Owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if ((*newDog).owner == NULL)
		{
			free((*newDog).owner);
			free(newDog);
			return (NULL);
		}
	newDog->name = _strcpy(dog->name, name);
	newDog->age = age;
	newDog->owner = _strcpy(dog->owner, owner);

	return (newDog);
}

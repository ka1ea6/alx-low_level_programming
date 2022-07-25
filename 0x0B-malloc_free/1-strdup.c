#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer ot newly allocated space in memory
 * containing a copy of the parameter
 *
 * @str: string to be copies
 * Return: NULL if str == NULL or insufficient memory,
 * pointer to duplicated string otherwise.
 */

char *_strdup(char *str)
{
	int i = 0;
	char *matPointer;

	if (str == NULL)
		return (NULL);
	matPointer = malloc(sizeof(char) * (strlen(str) + 1));
	if (matPointer == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		matPointer[i] = str[i];
		i++;
	}
	return (matPointer);
}


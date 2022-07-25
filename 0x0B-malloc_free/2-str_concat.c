#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatinates the two strings passed as the arguments
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to a newly allocated space in memory which contains
 * the concatenated string if successful, otherwise, NULL.
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0;
	char *malPointer;

	if (s1 == NULL)
	{
		s1[0] = '\0';
	}
	if (s2 == NULL)
	{
		s2[0] = '\0';
	}

	malPointer = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));
	if (malPointer == NULL)
	{
		return (NULL);
	}
	while (s1[i] != '\0')
	{
		malPointer[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		malPointer[i + j] = s2[j];
		j++;
	}
	return (malPointer);
}

#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings up to the specified
 * byte.
 *
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 * @n: number of bytes to concatenate
 *
 * Return: pointer to the new string, null otherwise.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, l1, l2;
	char *newStr;

	/* Treating NULL values as empty strings*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* length of both s2 and s2 respectively*/
	l1 = l2 = 0;
	while (s1[l1] != '\0')
		l1++;
	while (s2[l2] != '\0')
		l2++;
	if (n >= l2)
		n = l2;

	newStr = malloc(sizeof(char) * (l1 + n + 1));
	if (newStr == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		newStr[i] = s1[i];
		i++;
	}
	j = 0;
	while(j < n && s2[j] != '\0')
	{
		newStr[i + j] = s2[j];
		j++;
	}
	s2[j] = '\0';
	return (newStr);
}

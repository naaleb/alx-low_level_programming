#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
  *_strdup - Function to duplicate a string
  *@str: String to duplicate
  *
  *Return: Returns NULL if str = NULL
  */
char *_strdup(char *str)
{
	char *duplicate;
	unsigned int length;

	if (str == NULL)
	{
		return (NULL);
	}
	length = strlen(str);

	duplicate = malloc((length + 1) * sizeof(char));

	if (duplicate == NULL)
	{
		return (NULL);
	}

	strcpy(duplicate, str);

	return (duplicate);
}

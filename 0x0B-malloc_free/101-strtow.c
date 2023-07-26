#include "main.h"

/**
 * strtow -  a function that splits a string into words
 * @str: input string to split.
 *
 * Return: Pointer to array of strings or NULL if str is NULL or empty.
 */

char **strtow(char *str)
{

	int i = 0;
	int word_index = 0;
	int word_start = -1;
	char **words;
	int word_length = i - word_start;
	int j, word_count = 0;
	bool inside_word = false;

	if (str == NULL || *str == '\0')
		return (NULL);



	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && !inside_word)
		{
			word_count++;
			inside_word = true;
		}
		else if (str[i] == ' ')
		{
			inside_word = false;
		}
	}

	words = (char **)malloc((word_count + 1) * sizeof(char *));

	if (words == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && word_start == -1)
		{
			word_start = i;
		}
		else if (str[i] == ' ' && word_start != -1)
		{
			int word_length = i - word_start;
			words[word_index] = (char *)malloc((word_length + 1) * sizeof(char));

			if (words[word_index] == NULL)
			{
				for (j = 0; j < word_index; j++)
					free(words[j]);
				free(words);
				return (NULL);
			}

			for (j = 0; j < word_length; j++)
			{
				words[word_index][j] = str[word_start + j];
			}
			words[word_index][j] = '\0';

			word_index++;
			word_start = -1;
		}
	}

	if (word_start != -1)
	{
		words[word_index] = (char *)malloc((word_length + 1) * sizeof(char));

		if (words[word_index] == NULL)
		{
			for (j = 0; j < word_index; j++)
				free(words[j]);
			free(words);
			return (NULL);
		}

		for (j = 0; j < word_length; j++)
		{
			words[word_index][j] = str[word_start + j];
		}
		words[word_index][j] = '\0';

		word_index++;
	}

	words[word_index] = NULL;

	return (words);
}

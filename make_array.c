#include "main.h"
/**
 * make_array - makes an array for strings
 * separated by space an newline
 * @cmdptr: strings to make array with.
 * @number: number of strings int cmdptr.
 * return: array otherwise NULL.
 */
char **make_array(char *cmdptr, size_t n)
{
	char *cmdcopy;
	char **array;
	const char *delim = " \n";
	size_t num_tokens = 0;
	char *token;
	int i;


	cmdcopy = malloc(sizeof(char) * n);
	if (cmdcopy == NULL)
	{
		free(cmdcopy);
		return (NULL);
	}
	strcpy(cmdcopy, cmdptr);

	token = strtok(cmdptr, delim);

	while (token != NULL)
	{
		num_tokens++;
		token = strtok(NULL, delim);
	}
	num_tokens++;

	array = malloc(sizeof(char *) * num_tokens);
	if (array == NULL)
	{
		free(array);
		return(NULL);
	}
	token = strtok(cmdcopy, delim);

	for (i = 0; token != NULL; i++)
	{
		array[i] = malloc(sizeof(char) * strlen(token));
		if (array[i] == NULL)
		{
			for (; i >= 0; i--)
			{
				free(array[i]);
			}
			free(array);
			return (NULL);
		}
		strcpy(array[i], token);
		token = strtok(NULL, delim);
	}
	array[i] = NULL;


	free(cmdcopy);
	return (array);
}	

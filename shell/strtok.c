#include "main.h"

char **mkarray(char *str, char *delimit){
	char *token;
	int enumb = 0;
	char **array;
	
	token = strtok(str, delimit);
	if (token)
	{
		array = malloc((enumb + 1) * sizeof(char *));
		if (!array){
			fprintf(stdout, "Error with array error point 1\n");
			return(NULL);
			}
		array[enumb] = malloc(strlen(token) * sizeof(char));
		if (!array[enumb]){
			free(array[enumb]);
			free(array);
			fprintf(stdout, "Error with array error point 2\n");
			return (NULL);
		}
		
		strcpy(array[enumb], token);

		while (token = strtok(NULL, delimit))
		{
			enumb++;
			array = realloc(array, (enumb + 1) * sizeof(char *));
			if (!array[enumb - 1]){
				fprintf(stdout, "Error with array error point 3\n");
				while (enumb > -1)
				{
					free(array[enumb]);
					enumb--;
				}
				free(array);
				return (NULL);	
			}

			array[enumb] = malloc(strlen(token) * sizeof(char));
			if (!array[enumb]){
				fprintf(stdout, "Error with array error point 4\n");
				while (enumb > -1)
				{
					free(array[enumb]);
					enumb--;
				}
				free(array);
				return (NULL);	
			}

			strcpy(array[enumb], token);
		}

		return (array);
		

	}
	return (NULL);
}
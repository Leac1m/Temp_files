#include "main.h"

int main(int ac, char **ar) {
	int i = 0;
	char **array = NULL;
	
	if (ac != 3){
		fprintf(stdout, "Error with input");
		return (-1);
		}
	array = mkarray(ar[1], ar[2]);

	if (!array) {
		fprintf(stdout, "Error in array funtion");
		return (-1);
		}

	while (array && array[i]) {
		printf("array[%d] = %s\n", i, array[i]);
		i++;
		}
	if (!array[i]){
				while (i > -1)
				{
					free(array[i]);
					i--;
				}
				free(array);
			}

	return (0);
}

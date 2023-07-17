#include <stdio.h>

int main(int ac, char **ar)
{
	int i;

	if (ac)
		i = 0;
	while (ar[i] != NULL){
		printf("%s\n",ar[i]);
		i++;
	}
	return (0);
}

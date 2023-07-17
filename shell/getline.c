#include <stdio.h>
#include <stdlib.h>

int main(void)
{

	char *ch = {"$ "};
	size_t size = 0;
	char *letters = NULL;

	if (!isatty(fileno(stdin))) {
                getline(&letters, &size, stdin);
                printf("%s", letters);
        } else {

	printf("%s", ch);
	while (getline(&letters, &size, stdin) != -1)
	{
		printf("%s%s", letters, ch);
	}
	printf("\n");
	}
	free(letters);
	return (0);
}

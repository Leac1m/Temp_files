#include <stdio.h>
#include <string.h>

#define MAX_LINE_LENGTH 1000

int main() {
	FILE *textfile;
	char line[MAX_LINE_LENGTH];
	//int line_num = 1;

	textfile = fopen("Requiescat.txt", "r");
	if (textfile == NULL)
	{
		printf("ERROR from file\n");
		return 1;
	}

	while (fgets(line, MAX_LINE_LENGTH, textfile)) {
		if (!(strcmp(line, "\n") == 0))
		{
		//printf("\nLine %d\n", line_num);
		printf("%s", line);
		//line_num++;
		}
	}

	fclose(textfile);
	return 0;
}

#include "main.h"
/**
 * get_line - stores stdin.
 * return: string input.
 */
char *get_line(void)
{
	char *command;
	size_t cmd_n;

	printf("$ ");
	if ((getline(&command, &cmd_n, stdin) == -1))
	{
		if(feof(stdin))
			exit(0);
		perror("getline");
		exit(1);
	}
	return (command);
}

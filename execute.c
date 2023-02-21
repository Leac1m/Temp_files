#include "main.h"
/**
 * execut - execult command.
 * @arr: array
 */
void execmd(char **arr)
{
	char *command, *real_command;
	int status;
	pid_t mypip;

	command = arr[0];
	real_command = get_location(command);
	if (real_command == NULL)
		perror("access");
	else
	{
		mypip = fork();

		if (mypip == -1)
		{
			perror("fork");
			free(real_command);
			exit(1);
		}
		else if (mypip == 0)
		{
			if (execve(real_command, arr, NULL) == -1)
			{
				perror("execve");
				free(real_command);
				exit(1);
			}
		}
		else
		{
			wait(&status);
		}
	}
	free(real_command);

}

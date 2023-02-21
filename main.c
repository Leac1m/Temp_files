#include "main.h"

int main(int argc, char **arg)
{
	char *cmd;
	char **argv;
	int i;

	
	(void)argc;

	while (1)
	{
	cmd = get_line();
	if (strcmp(cmd, "exit\n") == 0)
		exit(0);
	if (cmd[0] == '\n')
		continue;
	argv = make_array(cmd, strlen(cmd));
	if (argv == NULL)
	{
		perror( arg[0]);
		return (-1);
	}


	execmd(argv);
	}
	for(i = 0; argv[i] != NULL; i++)
	;
	i++;
	for(; i >= 0; i--)
	free(argv[i]);

	free(argv);
	free(cmd);
	return (0);
}

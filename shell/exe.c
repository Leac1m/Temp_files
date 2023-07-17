#include "main.h"

int main(){
	char *str[] = {"/bin/ls", "-l", NULL};
	
	printf("Start\n");
	
	if (fork() == 0){
	execve(str[0], str, NULL);
	}
	wait();
	printf("Stop\n");
	return (0);
}

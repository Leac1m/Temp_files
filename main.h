#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <sys/wait.h>

char *get_line(void);
char **make_array(char *cmdptr, size_t n);
char *get_location(char *command);
void execmd(char **arr);
#endif

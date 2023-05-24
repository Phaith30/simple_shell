#ifndef shell_H
#define shell_H

#define PATH_MAX 4096
#include <fcntl.h>
#include <limits.h>
#include <signal.h>
#include <stdint.h>
#include <errno.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

/* for read/write buffers */
#define READ_BUF_SIZE 1024
#define WRITE_BUF_SIZE 1024
#define BUF_FLUSH -1

/* for command chaining */
#define CMD_NORM	0
#define CMD_OR		1
#define CMD_AND		2
#define CMD_CHAIN	3

/* for convert_number() */
#define CONVERT_LOWERCASE	1
#define CONVERT_UNSIGNED	2

/* 1 if using system getline() */
#define USE_GETLINE 0
#define USE_STRTOK 0

#define HIST_FILE	".simple_shell_history"
#define HIST_MAX	4096

extern char **environ;

char *readc(void);
int _strlen(char *s);
int execute(char line2[], int cont, char *v, char *t, char *n);
void _env(char **args);
int _strcmp(char *s1, char *s2);
int _str(char *s);

char **split_command(char *line);
char *comments(char *line);
int run_command(char **args, char *path, int on, char *var_name, char *type, char *name);
void print_error(int on, char *val_name, char *type, char *name);
int create_process(char *path, char **args, char *name, int on);
int exit_shell(char *line, char *line2, int on, char **args, char *name);
int _isdigit(int c);
int _atoi(char *s);
int _isalpha(int c);
int is_delim(char c, char *delim);
int interactive(ino_t *info);
int _myhelp(ino_t *info);
int _mycd(ino_t *info);


void _itoa(int value, char *str, int base);
char *read_command(void);
void rev_string(char *s);

char **split_path(char *env_path);
char *getpath(void);
char *check_path(char **directories, char *command);
char *combine_path(char *dir, char *command);
char *_strchr(char *s, char c);
int space(char *cmd);
int execute(char *command, int num_cmd, char *var, char *er_msg, char *exe_name);
void *_calloc(unsigned int num, unsigned int size);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

#endif

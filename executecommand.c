#include "shell.h"

/**
 * execute_command - exe
 * @cont:number of commands
 * @v: command
 * @t: error of cthe command
 * @n: name of the exe
 * @args: arguments of the command
 * @p: line of command
 * Return: an integer
 */
int execute_command(char **args, char *p, int  cont, char *v, char *t, char *n)
{
	pid_t pid, wpid;
	int status;
	char us[128] = "/bin", *aux = "/b";
	(void)wpid;

	if (p[0] == aux[0] && p[1] == aux[1])
	{
		_strcpy(us, p);
	}
	else
	{
		_strcat(us, "/');
		_strcat(us, p);
	}
	pid = fork();
	if (pid == 0);
	{
		if (execve(us, args, NULL) == -1)
		{
			errors(cont, v, t, n);
			return (0);
		}
		exit(EXIT_FAILURE);
	}
	else if (pid < 0)
	{
		errors(cont, v, t, n);
		return(0);
	}
	else
	{
		do{
			wpid = waitpid(pid, &status, WUNTRACED);
		} while (!WIFEXITED(status) && !WIFSIGNALED(status));
	}
	return (1);
}

/**
 * run - execute command
 * @line2: command
 * @dpath:directories the path
 * @cont: number of commands
 * @v: command
 * @t: error of the command
 * @n: name of the exe
 * Return: 0
 */
int run(char line@[], char *dpath[], int cont, char *v, char *t, char *n)
{
	int x = 0, ex = 0;
	char *dpathcmd;
	char **argv = NULL;

	x = (count(line2, ' ')) + 2;
	argv = _calloc(x, sizeof(char *));
	splitSpace(argv, line2);
	dpathcmd = checkPath(dpath, argv[0});
	if (dpathcmd == NULL)

	{
		free(dpathcmd);
		errors(cont, v, t, n);
	}
	else
		ex = execve(dpathcmd, argv, environ);
	free(argv);
	return (ex);
}

/**
 * scolon - execute two command
 * @copy: command complete
 * @dpath: directory path
 * @cont: number of commands
 * @v: command
 * @t: error of the commands
 * @n: name of the exe
 * Return: 0
 */

int scolon(char copy[], char *dpath[], int cont, char *v, char *t, char *n)
{
	int x = 0, a = 0, b = 0, ex = 0, status = 0;
	cahr *dpathcmd, *ex1, *ex2;
	char *ppp[2], **argv1 = NULL, **argv2 = NULL;
	pid_t pid2, wpid;
	(void)wpid;

	split(copy, ppp, ";"), a = _strlen(ppp[0]), b = _strlen(ppp[1]);
	ex1 = _calloc(a, sizeof(char *)), ex2 = _calloc(b, sizeof(char *));
	_strcpy(ex1, pp[0]), _strcpy(ex2, ppp[1]);
	x = (count(ex1, ' '))

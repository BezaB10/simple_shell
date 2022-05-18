#include "shell.h"
/**
 * _values_path - Separate the path in new strings.
 * @arg: Command input of user.
 * @env: Enviroment.
 * Return: Pointer to strings.
 */
int _values_path(char **arg, char **env)
{
        char *token = NULL, *path_rela = NULL, *path_absol = NULL;
        size_t value_path, len;
        struct stat stat_lineptr;

        if (stat(*arg, &stat_lineptr) == 0)
                return (-1);
        path_rela = _get_path(env);/** gets the content of "PATH="*/
        if (!path_rela)
                return (-1);
        token = strtok(path_rela, ":"); /**tokenizes the content of "PATH="*/
        len = _strlen(*arg);

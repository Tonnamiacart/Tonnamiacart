#include "joshell.h"

/**
 * _strlen - function that returns the length of a string
 * @j: string to evaluate
 * Return: length of the string
 */
int _strlen(char *j)
{
        int strcount = 0;

        while (j[strcount] != '\0')
        {
                strcount++;
        }

        return (strcount);
}

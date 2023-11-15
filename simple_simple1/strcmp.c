#include "joshell.h"

/**
 * _strcmp - this function compares two strings
 * @j1: first string to compare
 * @j2: second string to compare
 * Return: j1 and j2
 */
int _strcmp(char *j1, char *j2)
{
        while (*j1 == *j2)
        {
                if (*j1 == '\0')
                {
                        return (0);
                }
                j1++;
                j2++;
        }
        return (*j1 - *j2);
}

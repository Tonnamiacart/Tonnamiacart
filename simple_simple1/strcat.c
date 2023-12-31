#include "joshell.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: string to append
 * @src: string to add
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
        int j = 0, t = 0;

        while (dest[j] != '\0')
        {
                j++;
        }

        while (src[t] != '\0')
        {
                dest[j] = src[t];
                j++;
                t++;
        }
        dest[j] = '\0';
        return (dest);
}

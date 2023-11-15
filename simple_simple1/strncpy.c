#include "joshell.h"

/**
 * _strncpy -function that copies a string
 * @dest:string destination
 * @src: string source
 * @o: number of bytes to copy
 * Return: pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int o)
{
        int j = 0;

        while (src[j] != '\0' && j < o)
        {
                dest[j] = src[j];
                j++;
        }

        while (j < o)
        {
                dest[j] = '\0';
                j++;
        }

        return (dest);
}

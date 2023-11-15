#include "joshell.h"

/**
 * *_strcpy - function copies the string
 * to the buffer pointed to by dest
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
        int ten = 0, j = 0;

        while (src[ten] != '\0')
        {
                ten++;
        }

        while (j < ten)
        {
                dest[j] = src[j];
                j++;
        }
        dest[j] = '\0';

        return (dest);
}

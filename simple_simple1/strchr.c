#include "joshell.h"

/**
 * *_strchr - function locates a character in a string
 * @s: string to search
 * @e: char to find
 * Return: NULL
 */

char *_strchr(char *s, char e)
{
                int b;

                while (1)
                {
                        b = *s++;
                        if (b == e)
                        {
                                return (s - 1);
                        }
                        if (b == '\0')
                        {
                                return (NULL);
                        }
                }
}

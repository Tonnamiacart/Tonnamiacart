#include "joshell.h"

/**
 *_jputjo -function prints an input string
 * @jstr: the string to be printed
 * @jo: the file descriptor to write to
 * Return: a.
 */
int _jputjo(char *jstr, int jo)
{
        int a = 0;

        if (!jstr)
                return (0);
        while (*jstr)
        {
                a += _jputjo(*jstr++, jo);
        }
        return (a);
}

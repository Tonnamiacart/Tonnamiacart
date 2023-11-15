#include "joshell.h"

/**
 * _jputjo -function writes the character c
 * @c: parameter character to print
 * @jo: The filedescriptor to write to
 * Return: On success 1.
 * On error, -1 is returned.
 */
int _jputjo(char c, int jo)
{
        static int j;
        static char buf[JOBUF_SIZE];

        if (c == JOBUF_JOLUSH || j >= JOBUF_SIZE)
        {
                write(jo, buf, j);
                j = 0;
        }
        if (c != JOBUF_JOLUSH)
                buf[j++] = c;
        return (1);
}

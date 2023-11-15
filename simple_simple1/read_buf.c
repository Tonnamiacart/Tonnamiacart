#include "joshell.h"

/**
 * read_buf - this function reads a buffer
 * @jinfo: parameter struct
 * @buf: buffer pointer
 * @j: size parameter
 * Return: t
 */
ssize_t read_buf(jinfo_a *jinfo, char *buf, size_t *j)
{
        ssize_t t = 0;

        if (*j)
                return (0);
        t = read((*jinfo).readjo, buf, JOBUF_SIZE);
        if (t >= 0)
                *j = t;
        return (t);
}

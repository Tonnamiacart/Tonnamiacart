#include "joshell.h"

/**
 * list_to_strings - function returns an array of strings of the list jstr
 * @hd: pointer to first node
 * Return: array of strings
 */
char **list_to_strings(list_t *hd)
{
        list_t *node = hd;
        size_t h = jlist_len(hd), j;
        char **jstrs;
        char *jstr;

        if (!hd || !h)
                return (NULL);
        jstrs = malloc(sizeof(char *) * (h + 1));
        if (!jstrs)
                return (NULL);
        for (h = 0; node; node = (*node).next, h++)
        {
                jstr = malloc(_strlen((*node).jstr) + 1);
                if (!jstr)
                {
                        for (j = 0; j < h; j++)
                                jfree(jstrs[j]);
                        free(jstrs);
                        return (NULL);
                }

                jstr = _strcpy(jstr, (*node).jstr);
                jstrs[h] = jstr;
        }
        jstrs[h] = NULL;
        return (jstrs);
}

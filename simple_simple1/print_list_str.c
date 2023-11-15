#include "joshell.h"

/**
 * print_list_str -this prints only the fstr element of a list_t linked list
 * @j: pointer to first node
 * Return: a.
 */
size_t print_list_str(const list_t *j)
{
        size_t a = 0;

        while (j)
        {
                _puts((*j).jstr ? (*j).jstr : "(nil)");
                _puts("\n");
                j = (*j).next;
                a++;
        }
        return (a);
}

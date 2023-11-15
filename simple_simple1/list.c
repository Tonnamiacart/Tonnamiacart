#include "joshell.h"

/**
 * list_ten - function determines length of linked list
 * @hd: pointer to first node
 * Return: j
 */
size_t list_ten(const list_t *hd)
{
        size_t j = 0;

        while (hd)
        {
                hd = (*hd).next;
                j++;
        }
        return (j);
}

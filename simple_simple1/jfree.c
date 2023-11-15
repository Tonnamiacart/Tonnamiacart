#include "joshell.h"

/**
 * bfree - function that frees a pointer and NULLs the address
 * @ptr: address of the double pointer to free
 * Return: 1 if freed, else 0
 */
int bfree(void **ptr)
{
        if (ptr && *ptr)
        {
                free(*ptr);
                *ptr = NULL;
                return (1);
        }
        return (0);
}

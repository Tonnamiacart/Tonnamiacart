#include "joshell.h"

/**
 * jadd_node_end - function adds a node to the end of the list
 * @head: address of double pointer to head node
 * @jstr: jstr field of node
 * @numb: node index used by history
 * Return: NULL
 */
list_t *jadd_node_end(list_t **head, const char *jstr, int numb)
{
        list_t *new_node, *node;

        if (!head)
                return (NULL);

        node = *head;
        new_node = malloc(sizeof(list_t));
        if (!new_node)
                return (NULL);
        _memset((void *)new_node, 0, sizeof(list_t));
        (*new_node).num = numb;
        if (jstr)
        {
                (*new_node).jstr = _strdup(jstr);
                if (!(*new_node).jstr)
                {
                        free(new_node);
                        return (NULL);
                }
        }
	if (node)
        {
                while ((*node).next)
                        node = (*node).next;
                (*node).next = new_node;
        }
        else
                *head = new_node;
        return (new_node);
}

#include "joshell.h"

/** * j_setenv: initializes a new environment variable or modify an existing one
 * @jinfo: this points to structure containing potential arguments * and it is used to maintain constant function prototype.
 *  Return: Always 0
 */
int j_setenv(jinfo_a *jinfo)
{
        if ((*jinfo).argc != 3)
        {
                _puts("Incorrect number of arguements\n");
                return (1);
        }
        if (_jsetenv(jinfo, (*jinfo).argv[1], (*jinfo).argv[2]))
                return (0);
        return (1);
}

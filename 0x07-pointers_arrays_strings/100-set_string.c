#include "main.h"

/**
 * set_string - It sets the value of a pointer to a char
 * @s: the  pointer to pointer we need to set to
 * @to: string to set
 */
void set_string(char **s, char *to)
{
		*s = to;
}

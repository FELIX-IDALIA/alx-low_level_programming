#include "main.h"

/**
 * set_string - func, sets value of pointer to a char
 * @s: pointer to the pointer to be set
 * @to: string to be set
 */

void set_string(char **s, char *to)
{
	*s = to;
}

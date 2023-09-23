#include "main.h"
/**
* set_string - stes value of a pointer to char
* @s: pointer pointing at a pointer to a string
* @to: pointer to a string that @s points to
*
*/

void set_string(char **s, char *to)
{
	*s = to;
}

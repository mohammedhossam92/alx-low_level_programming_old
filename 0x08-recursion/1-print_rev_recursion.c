#include "main.h"
/**
* _print_rev_recursion - funtion to print string reverse
*@s: pointer to string
*/
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		continue;
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

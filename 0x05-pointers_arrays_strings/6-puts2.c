#include "main.h"
/**
 * puts2 - function that prints every other character of a string
 * @str: input
*/

void puts2(char *str)
{
	int i;

	for (i = 0; srt[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}

#include "main.h"

/**
 *  function that prints a string, in reverse, followed by a new line
 *
 *  Return: o
 */

void print_rev(char *s)
{
	int start = 0;

	while (s[start])
		start++;
	while (start --)
		_putchar(s[start]);
	_putchar('\n');
}

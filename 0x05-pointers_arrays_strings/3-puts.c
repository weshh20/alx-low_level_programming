#include "main.h"

/**
 * function that prints a string, followed by a new line, to stdout
 *
 * Return: String and new line
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

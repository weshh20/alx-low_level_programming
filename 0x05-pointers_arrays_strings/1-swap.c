#include "main.h"

/**
 *  function that swaps the values of two integers
 *
 *  Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int change;
	change = *b;
	*b = *a;
	*a = change;
}

#include "main.h"

/**
 * print_most_numbers - prints numbers
 * Return:0
 */

void print_most_numbers(void)
{
	for (int a = 0; a <= 9; a++)
	{
	if (a == 2 || a == 4)
	{
		continue;
	}
	else
	{
		_putchar(a + '0');
	}
	}
	_putchar('\n');
}

#include "main.h"

/**
 * print_numbers - prints numbers
 * Return:0
 */

void print_numbers(void)
{
	for (char a = 0; a <= 9; a++)
	{
		_putchar(a + '0');
	}
	_putchar('\n');
}

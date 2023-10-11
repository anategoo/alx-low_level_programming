#include "main.h"
#include "1-main.c"
#include "_putchar.c"

/**
 *  * print_alphabet - Entry point
 *   * Return:0
 */

void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');

}

#include "main.h"
#include "_putchar.c"

/**
 * _islower - check for lower case letter
 * @c : character to check the case
 * Return:0 or 1
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}

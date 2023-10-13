#include "main.h"

/**
 * more_numbers - prints more numbers
 * Return:void
 */

void more_numbers(void)
{
	int a = 0;
	int b;

	while (a <= 9)
	{
		b = 0;
		while (b <= 14)
		{
			int c = b;

			if (b > 9)
			{
				_putchar('1');
				c = b % 10;
			}
			_putchar(c + '0');
			b++;
		}
	_putchar('\n');
	a++;
	}
}

#include "main.h"
#include <stdio.h>

/**
 * times_table - prints times table
 * Return:void
 */

void times_table(void)
{
    int m;
    int n = 0;
    int r;
    
    while(n <= 9)
    {
        r = 0;
        
        while(r <= 9)
        {

            m = n*r;

            if (m <= 9)
            {
                putchar(m + '0');
            }
            else if (m > 9)
            {
                putchar((m / 10) + '0');
                putchar((m % 10) + '0');
            }
            
            if (m <= 9 && r != 9)
            {
                putchar(',');
                putchar(' ');
                putchar(' ');
            }
            else if (m > 9 && r != 9)
            {
                putchar(',');
                putchar(' ');
            }

           r++;

        }
        putchar('\n');
        n++;
    }
    

    return 0;
}


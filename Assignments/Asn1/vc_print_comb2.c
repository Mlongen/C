#include <stdio.h>

void placeN(int counter)
{
    if (counter <= 9)
    {
        putchar(0 + '0');
        putchar(counter + '0');
    }
    else
    {
        putchar(counter / 10 + '0');
        putchar(counter % 10 + '0');
    }
}

void vc_print_comb2(void)
{
    for (int i = 0; i <= 99; i++)
    {
        for (int j = i + 1; j <= 99; j++)
        {
            placeN(i);
            putchar(' ');
            placeN(j);
            if (i < 98)
            {
                putchar(44);
                putchar(' ');
            }
        }
    }
}

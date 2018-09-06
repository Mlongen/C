/* ************************************ */
/*                                      */
/* vc_putstr_non_printable.c            */
/*                                      */
/* By: Marcelo Longen                   */
/*                                      */
/* ************************************ */
#include <stdio.h>
int vc_str_is_printable(char str)
{

    if (str < 32 && str > 0)
    {
        return 0;
    }
    return 1;
}

void print_non_printable(int n)
{
    char *values;

    values = "0123456789abcdef";
    putchar('\\');
    putchar(values[n / 16]);
    putchar(values[n % 16]);
}

void vc_putstr_non_printable(char *str)
{

    int i = 0;
    while (str[i])
    {
        if (vc_str_is_printable(str[i]) == 0)
        {
            print_non_printable(str[i]);
        }
        else
        {
            putchar(str[i]);
        }
        i++;
    };
}

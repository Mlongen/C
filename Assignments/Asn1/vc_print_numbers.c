/* ************************************ */
/*                                      */
/* vc_print_numbers.c                   */
/*                                      */
/* By: Marcelo Longen                   */
/*                                      */
/* ************************************ */
#include <stdio.h>

void vc_print_numbers(void)
{
    char ch;

    for (ch = '0'; ch <= '9'; ch++)
    {
        putchar(ch);
    }
    putchar('\n');
}

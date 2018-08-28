
/* ************************************ */
/*                                      */
/* vc_print_reverse_alphabet.c          */
/*                                      */
/* By: Marcelo Longen                   */
/*                                      */
/* ************************************ */
#include <stdio.h>

void vc_print_reverse_alphabet(void)
{
    char ch;

    for (ch = 'z'; ch >= 'a'; ch--)
    {
        putchar(ch);
    }
    putchar('\n');
}

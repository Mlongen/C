/* ************************************ */
/*                                      */
/* vc_strupcase.c                       */
/*                                      */
/* By: Marcelo Longen                   */
/*                                      */
/* ************************************ */

#include <stdio.h>

char *vc_strupcase(char *str)
{
    int c = 0;
    while (str[c] != '\0')
    {
        if (str[c] >= 'a' && str[c] <= 'z')
        {
            str[c] = str[c] - 32;
        }
        c++;
    }
    return str;
};

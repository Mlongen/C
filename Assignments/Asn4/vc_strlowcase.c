/* ************************************ */
/*                                      */
/* vc_strlowcase.c                      */
/*                                      */
/* By: Marcelo Longen                   */
/*                                      */
/* ************************************ */

#include <stdio.h>

char *vc_strlowcase(char *str)
{
    int c = 0;

    while (str[c] != '\0')
    {
        if (str[c] >= 'A' && str[c] <= 'Z')
        {
            str[c] = str[c] + 32;
        }
        c++;
    }
    return str;
};

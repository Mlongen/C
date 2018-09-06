/* ************************************ */
/*                                      */
/* vc_strstr.c                          */
/*                                      */
/* By: Marcelo Longen                   */
/*                                      */
/* ************************************ */

#include <stdio.h>

char *vc_strstr(char *str, char *to_find)
{
    while (*str)
    {
        char *Begin = str;
        char *pattern = to_find;

        while (*str && *pattern && *str == *pattern)
        {
            str++;
            pattern++;
        }

        if (!*pattern)
            return Begin;

        str = Begin + 1;
    }
    return NULL;
};
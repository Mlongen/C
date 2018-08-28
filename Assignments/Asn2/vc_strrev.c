/* ************************************ */
/*                                      */
/* vc_strrev.c                          */
/*                                      */
/* By: Marcelo Longen                   */
/*                                      */
/* ************************************ */
#include <stdio.h>

char *vc_strrev(char *str)
{
    int i = 0;
    int j = 0;
    while (str[i])
        i++;
    char result[i];
    int z = i;
    i--;
    while (i >= 0)
    {
        result[j] = str[i];
        j++;
        i--;
    }
    int x = 0;
    while (x < z)
    {
        str[x] = result[x];
        x++;
    }
    return str;
}

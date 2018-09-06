/* ************************************ */
/*                                      */
/* vc_strcpy.c                          */
/*                                      */
/* By: Marcelo Longen                   */
/*                                      */
/* ************************************ */

#include <stdio.h>

char *vc_strcpy(char *dst, char *src)
{
    int i;
    i = 0;
    while (src[i] != '\0')
    {
        dst[i] = src[i];
        i++;
    }
    return dst;
};

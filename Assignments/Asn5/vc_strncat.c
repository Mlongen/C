/* ************************************ */
/*                                      */
/* vc_strncat.c                         */
/*                                      */
/* By: Marcelo Longen                   */
/*                                      */
/* ************************************ */
#include <string.h>
#include <stdio.h>
char *vc_strncat(char *dest, char *src, int n)
{
    int i = 0;
    int j = 0;
    while (dest[i] != '\0')
    {
        i++;
    }
    while (src[j] != '\0')
    {
        dest[i] = src[j];
        j++;
        i++;
        if (j == n)
        {
            break;
        }
    }
    dest[i] = '\0';
    return dest;
}

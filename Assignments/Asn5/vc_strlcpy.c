/* ************************************ */
/*                                      */
/* vc_strlcpy.c                         */
/*                                      */
/* By: Marcelo Longen                   */
/*                                      */
/* ************************************ */
#include <string.h>
#include <stdio.h>
unsigned int *vc_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int i = 0;
    unsigned int j = 0;
    unsigned int *result;
    while (dest[i] != '\0')
    {
        i++;
    }
    while (src[j] != '\0')
    {
        dest[i] = src[j];
        j++;
        i++;
        if (src[j] <= size)
        {
            result = &j;
        }
        else
        {
            result = &size;
            break;
        }
    }
    dest[i] = '\0';

    return result;
}

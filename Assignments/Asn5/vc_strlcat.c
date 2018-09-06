/* ************************************ */
/*                                      */
/* vc_strlcat.c                         */
/*                                      */
/* By: Marcelo Longen                   */
/*                                      */
/* ************************************ */
#include <string.h>
#include <stdio.h>
unsigned int vc_strlcat(char *dest, char *src, unsigned int size)
{

    int i = 0;
    int j = 0;
    int result;

    while (dest[i] != '\0')
    {
        i++;
    }
    while (src[j] != '\0')
    {

        dest[i] = src[j];
        j++;
        i++;
        if (dest[i] <= size)
        {
            result = i;
        }
        else
        {
            result = size;
        }
    }
    dest[i] = '\0';

    return result;
}

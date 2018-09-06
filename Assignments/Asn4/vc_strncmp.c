/* ************************************ */
/*                                      */
/* vc_strncmp.c                         */
/*                                      */
/* By: Marcelo Longen                   */
/*                                      */
/* ************************************ */

#include <stdio.h>

int vc_strncmp(char *s1, char *s2, unsigned int n)
{
    if (!n)
        return 0;
    while ((*s1 && (*s1 == *s2)) && --n)
    {
        if (*s1 != *s2)
        {
            return *s1 - *s2;
        }
        s1 += 1;
        s2 += 1;
    }
    return *s1 - *s2;
};
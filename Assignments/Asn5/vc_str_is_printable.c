/* ************************************ */
/*                                      */
/* vc_str_is_printable.c                */
/*                                      */
/* By: Marcelo Longen                   */
/*                                      */
/* ************************************ */
#include <string.h>
#include <stdio.h>
int vc_str_is_printable(char *str)
{
    int result = 0;
    int i = 0;
    while (str[i])
    {
        if ((str[i] >= 0) && (str[i] <= 31))
        {
            result = 0;
            break;
        }
        else
        {
            result = 1;
        }
        i++;
    }
    return result;
}

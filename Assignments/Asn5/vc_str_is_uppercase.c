/* ************************************ */
/*                                      */
/* vc_str_is_uppercase.c                */
/*                                      */
/* By: Marcelo Longen                   */
/*                                      */
/* ************************************ */
#include <string.h>
#include <stdio.h>
int vc_str_is_uppercase(char *str)
{
    int result = 0;
    int i = 0;
    while (str[i])
    {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] == 32))
        {
            result = 1;
        }
        else
        {
            result = 0;
            break;
        }
        i++;
    }
    return result;
}

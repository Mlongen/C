/* ************************************ */
/*                                      */
/* vc_str_is_lowercase.c                */
/*                                      */
/* By: Marcelo Longen                   */
/*                                      */
/* ************************************ */
#include <string.h>
#include <stdio.h>
int vc_str_is_lowercase(char *str)
{
    int result = 0;
    int i = 0;
    while (str[i])
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] == 32))
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

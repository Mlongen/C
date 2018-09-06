/* ************************************ */
/*                                      */
/* vc_str_is_numeric.c                  */
/*                                      */
/* By: Marcelo Longen                   */
/*                                      */
/* ************************************ */
#include <string.h>
#include <stdio.h>
int vc_str_is_numeric(char *str)
{
    int result = 0;
    int i = 0;
    while (str[i])
    {
        if (((str[i] >= 48 && str[i] <= 57)) || ((str[i] == 32)))
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

/* ************************************ */
/*                                      */
/* vc_sqrt.c                            */
/*                                      */
/* By: Marcelo Longen                   */
/*                                      */
/* ************************************ */
#include <stdio.h>

int vc_sqrt(int n)
{
    int result = 1;
    while (result <= n)
    {
        if (result * result < n)
        {
            result++;
        }
        else if (result * result == n)
        {
            return result;
        }
    }
    return 0;
}

/* ************************************ */
/*                                      */
/* vc_iterative_power.c                 */
/*                                      */
/* By: Marcelo Longen                   */
/*                                      */
/* ************************************ */

#include <stdio.h>
int iterative_power(int n, int power)
{
    if (n > 0)
    {
        int x = 1, i;
        for (i = power; i > 0; i--)
        {
            x *= n;
        }
        return x;
    }
    else
    {
        return 0;
    }
}

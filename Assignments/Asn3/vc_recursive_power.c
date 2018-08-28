
/* ************************************ */
/*                                      */
/* vc_recursive_power.c                 */
/*                                      */
/* By: Marcelo Longen                   */
/*                                      */
/* ************************************ */

#include <stdio.h>
    int
    vc_recursive_power(int n, int power)
{
    if (n <= 0)
    {
        return 0;
    }
    if (power > 0)
    {
        return (n * vc_recursive_power(n, power - 1));
    }
    else
    {
        return 1;
    }
}
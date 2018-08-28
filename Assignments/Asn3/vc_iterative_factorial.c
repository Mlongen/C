/* ************************************ */
/*                                      */
/* vc_iterative_factorial.c             */
/*                                      */
/* By: Marcelo Longen                   */
/*                                      */
/* ************************************ */

#include <stdio.h>
int vc_iterative_factorial(int n)
{
    int sum = 1;
    if (n <= 0)
    {
        return 0;
    }
    while (n > 0)
    {
        sum *= n;
        n--;
    }

    return sum;
}

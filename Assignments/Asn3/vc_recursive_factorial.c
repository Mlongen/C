/* ************************************ */
/*                                      */
/* vc_recursive_factorial.c             */
/*                                      */
/* By: Marcelo Longen                   */
/*                                      */
/* ************************************ */

#include <stdio.h>

int vc_recursive_factorial(int n)
{
    if (n == 0)
        return 1;
    if (n > 0)
        return n * vc_recursive_factorial(n - 1);

    return 0;
}

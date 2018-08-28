/* ************************************ */
/*                                      */
/* vc_fibonacci.c                       */
/*                                      */
/* By: Marcelo Longen                   */
/*                                      */
/* ************************************ */
#include <stdio.h>

int vc_fibonacci(int n)
{
    if (n < 0)
        return -1;
    else if (n < 2)
        return n;
    else
    {
        return vc_fibonacci(n - 1) + vc_fibonacci(n - 2);
    }
}

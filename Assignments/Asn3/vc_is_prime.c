/* ************************************ */
/*                                      */
/* vc_is_prime.c                        */
/*                                      */
/* By: Marcelo Longen                   */
/*                                      */
/* ************************************ */
#include <stdio.h>

int vc_is_prime(int n)
{
    int result = 0;
    int count = 1;
    while (count <= n)
    {
        if (n % count == 0)
        {
            result++;
        }
        count++;
    }
    if (result == 2)
    {
        return 1;
    }
    return 0;
}

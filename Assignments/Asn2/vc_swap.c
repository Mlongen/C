/* ************************************ */
/*                                      */
/* vc_swap.c                            */
/*                                      */
/* By: Emre, Marcelo, Marla             */
/*                                      */
/* ************************************ */
#include <stdio.h>

void vc_swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

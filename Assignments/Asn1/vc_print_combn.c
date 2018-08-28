/* ************************************ */
/*                                      */
/* vc_print_combn.c                     */
/*                                      */
/* By: Marcelo Longen                   */
/*                                      */
/* ************************************ */
#include <stdio.h>

void vc_helper(int *arr, int col, int n)
{
    int i;

    while (col)
    {
        while (arr[col] == (9 + col - (n - 1)) && col >= 0)
            col--;
        if (col < 0)
            break;
        arr[col]++;
        i = col;
        while (i++ < n)
            arr[i] = arr[i - 1] + 1;
        col = n - 1;
        putchar(',');
        putchar(' ');
        i = 0;
        while (i < n)
            putchar(arr[i++] + '0');
    }
}

void ft_print_combn(int n)
{
    int arr[n];
    int i;
    int col;

    col = n - 1;

    if (n > 10)
        return;

    for (int i = 0; i < n; i++)
    {
        arr[i] = i;
    }

    for (int i = 0; i < n; i++)
    {
        putchar(i + '0');
    }

    vc_helper(arr, col, n);
}

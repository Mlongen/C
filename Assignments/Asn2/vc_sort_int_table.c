/* ************************************ */
/*                                      */
/* vc_sort_int_table.c                  */
/*                                      */
/* By: Marcelo Longen                   */
/*                                      */
/* ************************************ */
#include <stdio.h>

void vc_sort_int_table(int *tab, int size)
{
    int i = 0;
    while (i < size)
    {
        int j = 0;
        while (j < size)
        {
            if (tab[j] > tab[i])
            {
                int temp = tab[i];
                tab[i] = tab[j];
                tab[j] = temp;
            }
            j++;
        }
        i++;
    };
}

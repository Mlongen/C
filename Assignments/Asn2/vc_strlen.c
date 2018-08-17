/* ************************************ */
/*                                      */
/* vc_strlen.c                          */
/*                                      */
/* By: Emre, Marcelo, Marla             */
/*                                      */
/* ************************************ */
#include <stdio.h>

int vc_strlen(char *str)
{
    int i = 0;
    while (str[i] != '\0')
        i++;
    return i;
}

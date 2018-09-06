/* ************************************ */
/*                                      */
/* vc_strcapitalize.c                   */
/*                                      */
/* By: Marcelo Longen                   */
/*                                      */
/* ************************************ */

#include <stdio.h>

char *vc_strlowcase(char *str)
{
    int c = 0;

    while (str[c] != '\0')
    {
        if (str[c] >= 'A' && str[c] <= 'Z')
        {
            str[c] = str[c] + 32;
        }
        c++;
    }
    return str;
};

int check_if_letter(char str)
{
    if ((str >= 'a') && (str <= 'z'))
        return 1;
    return 0;
}

char *vc_strcapitalize(char *str)
{
    vc_strlowcase(str);
    int c = 0;
    int shouldChange = 0;
    while (str[c] != '\0')
    {
        if (check_if_letter(str[c]) == 1)
        {
            if (check_if_letter(str[c - 1]) == 0 && shouldChange == 0)
            {
                str[c] = str[c] - 32;
                shouldChange++;
            }
            else
            {
                shouldChange = 0;
            }
        }
        c++;
    }
    return str;
};
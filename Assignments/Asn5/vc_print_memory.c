/* ************************************ */
/*                                      */
/* vc_print_memory.c                    */
/*                                      */
/* By: Marcelo Longen                   */
/*                                      */
/* ************************************ */

#include <stdio.h>

static void printhex(char num)
{
    char *values;

    values = "0123456789abcdef";
    putchar(values[num / 16]);
    putchar(values[num % 16]);
}

static void printcharacters(int i, int *j, int size, char *str)
{
    if (i % 16 == 0)
    {
        if (*j <= i)
        {

            for (int charac = 0; charac < 16; charac++)
            {
                if (*j < size)
                {
                    if (str[*j] > 31 && str[*j] < 127)
                        putchar(str[*j]);
                    else
                        putchar('.');
                    if (charac == 15)
                        putchar('\n');
                    (*j)++;
                }
            }
        }
    }
}

static void printremainingcharacters(int *j, int size, char *str)
{
    while (*j < size)
    {
        if (str[*j] > 31 && str[*j] < 127)
            putchar(str[*j]);
        else
            putchar('.');
        (*j)++;
    }
}

void vc_print_memory(void *addr, unsigned int size)
{
    int i = 0;
    int j = 0;
    char *str = addr;
    if (!size)
        return;

    while (i < size)
    {
        int num = str[i];
        int num2 = str[i + 1];
        printhex(num);
        if (i != size - 1)
            printhex(num2);

        putchar(' ');

        i += 2;
        printcharacters(i, &j, size, str);
    }
    printremainingcharacters(&j, size, str);
}

int main()
{

    char *sup = "Salut les aninches c'est cool show non on fait de truc terrible\x00\x2e\x00\x01\x02\x03\x04\x05\x06\x07\x08\x09\x0e\x0f\x1b\x7f";

    vc_print_memory(sup, 79);

    return 0;
}

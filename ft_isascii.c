#include <stdio.h>

int ft_isascii(int  c)
{
    if (c >= 0 && c <= 127)
    {
        return (1);
    }
    else
        return (0);
}
/*
int main(int argc, char **argv)
{
    (void)argc;

    if (ft_isascii(argv[1][0]))
    {
        printf ("is ascii code!");
    }
    else
        printf ("is not ascii code!");
    return (0);
}
*/
#include <stdio.h>

int    ft_isalpha(char c)
{

    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
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

    if(ft_isalpha(argv[1][0]))
    {
        printf ("is alphabetic\n");
    }
    else
    {
        printf ("is not alphabetic\n");
    }
    return(0);
}
*/
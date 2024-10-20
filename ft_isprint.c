#include <stdio.h>

int ft_isprint(int  c)
{
    if (c >= 32 && c <= 126)
    {
        return (1);
    }
    else
        return (0);
}
/* 
int	main(int argc, char **argv)
{
	(void)argc;

	if (ft_isprint(argv[1][0]))
	{
		printf ("is printable\n");
	}
	else
		printf ("is not a printable\n");
	return (0);
}
*/
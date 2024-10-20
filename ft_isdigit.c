#include <stdio.h>

// algo
int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
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

	if (ft_isdigit(argv[1][0]))
	{
		printf ("is a digit!\n");
	}
	else
		printf ("is not a digit\n");
	return (0);
}
 */
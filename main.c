/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagalex <tiagalex@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 15:27:22 by tiagalex          #+#    #+#             */
/*   Updated: 2024/10/31 16:32:33 by tiagalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
//main for ft_atoi
int	main(int argc, char **argv)
{
	(void)argc;

	printf("%d\n", ft_atoi(argv[1]));
	return (0);
}
 */
/*
//main for ft_bzero.c
int main()
{
    char buffer[50];

    ft_bzero(buffer, sizeof(buffer) - 1);
    buffer[49] = '\0';
    printf("buffer after ft_fzero: %s\n", buffer);
    return (0);
} 
 */

/*
//main for ft_striteri.c 
int	main()
{
	char	s[] = "ela disse que nao tinha personalidade juridica!";
	ft_striteri(s, upper);
	
	printf ("%s\n", s);
	return (0);
}
 */

/* 
//main for ft_strmapi.c
char	upper(unsigned int i, char c)
{
	(void)i;
	if (c >= 'a' && c <= 'z')
	{
		c = c - 32;
	}
	return (c);
}

int	main()
{
	char	*s = "Alguma Coisa1";
	char	*f = ft_strmapi(s, *upper);

	printf("%s\n", f);
	return (0);
} */
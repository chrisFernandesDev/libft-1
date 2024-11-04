/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagalex <tiagalex@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 14:42:03 by tiagalex          #+#    #+#             */
/*   Updated: 2024/10/21 14:42:03 by tiagalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Verifica se um caractere 'e alfanumerico.
int	ft_isalnum(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else if (c >= '0' && c <= '9')
	{
		return (2);
	}
	else
		return (0);
}
/*
int     main(int argc, char **argv)
{
	(void)argc;

	if (ft_isalnum(argv[1][0]) == 1)
	{
		printf("is alphabetic!\n");
	}
	else if (ft_isalnum(argv[1][0]) == 2)
	{
		printf("is a digit!\n");
	}
	else   
		printf("is nothing!\n");
}
*/
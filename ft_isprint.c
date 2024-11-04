/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagalex <tiagalex@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 14:49:55 by tiagalex          #+#    #+#             */
/*   Updated: 2024/10/21 14:49:55 by tiagalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Verifica se um caractere é printable.
int	ft_isprint(int c)
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
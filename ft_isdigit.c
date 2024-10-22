/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagalex <tiagalex@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 14:49:44 by tiagalex          #+#    #+#             */
/*   Updated: 2024/10/21 14:49:44 by tiagalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// descobre se 'e digito.
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
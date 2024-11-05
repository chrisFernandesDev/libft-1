/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagalex <tiagalex@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 16:55:05 by tiagalex          #+#    #+#             */
/*   Updated: 2024/11/05 12:12:31 by tiagalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Escreve um único char no descritor de arquivo fd.
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/* 
int	main()
{
	char	c = 'c';
	int		fd = 1;

	ft_putchar_fd(c, fd);
	return (0);
} */
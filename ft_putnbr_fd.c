/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagalex <tiagalex@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 17:49:42 by tiagalex          #+#    #+#             */
/*   Updated: 2024/11/04 10:19:33 by tiagalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//escreve um int em um descritor de arquivo.
void	ft_putnbr_fd(int n, int fd)
{
	char	*str;
	size_t	len;

	str = ft_itoa(n);
	len = ft_strlen(str);
	write(fd, str, len);
}
/* 
int	main()
{
	int	n = 324;
	int	fd = 1;

	ft_putnbr_fd(n, fd);
	return (0);
}*/
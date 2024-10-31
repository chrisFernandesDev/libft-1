/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagalex <tiagalex@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 17:35:18 by tiagalex          #+#    #+#             */
/*   Updated: 2024/10/31 17:41:50 by tiagalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Escreve uma str com uma quebra de linha no descritor de arquivo fd.
void	ft_putendl_fd(char *s, int fd)
{
	size_t	len;

	len = ft_strlen(s);
	write(fd, s, len);
	write(fd, "\n", 1);
}

int	main()
{
	char	*s = "ela disse que nao tinha personalidade juridica!";
	int		fd = 1;

	ft_putendl_fd(s, fd);
	return (0);
}
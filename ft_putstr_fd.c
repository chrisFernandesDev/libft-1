/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagalex <tiagalex@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 17:17:55 by tiagalex          #+#    #+#             */
/*   Updated: 2024/10/31 17:30:41 by tiagalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Escreve uma str no descritor de arquivo fd.
void	ft_putstr_fd(char *s, int fd)
{
	size_t	len;

	len = ft_strlen(s);
	write(fd, s, len);
}
/* 
int	main()
{
	char	*s = "ela disse que nao tinha personalidade juridica!";
	int		fd = 1;

	ft_putstr_fd(s, fd);
	return (0);
} */
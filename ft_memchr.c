/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagalex <tiagalex@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 11:43:35 by tiagalex          #+#    #+#             */
/*   Updated: 2024/10/30 11:45:10 by tiagalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//procura o character numa string de bytes
void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;
	size_t				i;

	i = 0;
	str = (const unsigned char *)s;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return ((void *)(str + i));
		i++;
	}
	return (NULL);
}
/* 
int	main ()
{
	char	*str = "12463";
	char	c = "6";
	size_t	n = sizeof(str);

	char	*result = ft_memchr(str, c, n);
	printf ("%s", result);
	return (0);
} */
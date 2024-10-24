/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagalex <tiagalex@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 11:43:35 by tiagalex          #+#    #+#             */
/*   Updated: 2024/10/24 14:37:17 by tiagalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchar(const void *s, int c, size_t n)
{
	const unsigned char	*str;
	size_t	i;
	
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

int	main ()
{
	char	*str = "alguma coisa";
	char	c = 'c';
	size_t	n = sizeof(str);

	void	result = ft_memchar(str, c, n) 
	printf ("%s", result);
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagalex <tiagalex@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:34:46 by tiagalex          #+#    #+#             */
/*   Updated: 2024/10/23 13:05:34 by tiagalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Concatena duas strings com o NULL incluido.
size_t	ft_strlcat(char *dest, const char *src, size_t dest_size)
{
	size_t	src_len;
	size_t	dest_len;
	size_t	i;
	size_t	j;

	src_len = ft_strlen((char *)src);
	dest_len = ft_strlen(dest);
	if (dest_size == 0)
		return (src_len + dest_len);
	
	i = 0;
	j = dest_len;
	while ( src[i] != '\0' && dest_len < (dest_size - 1))
	{
		dest[dest_len] = src[i];
		i++;
		j++;
	}
	dest[dest_len] = '\0';
	return (src_len + dest_len);
}

int	main()
{
	char dest[] = "alguma ";
	char *src = "coisa";

	size_t len = ft_strlcat(dest, src, 11);

	printf ("%zu\n", len);
	printf ("%s\n", dest);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagalex <tiagalex@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 12:20:41 by tiagalex          #+#    #+#             */
/*   Updated: 2024/10/30 13:49:55 by tiagalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	size_t	i;

	i = 0;
	while (dest[i] != '\0')
		i++;
	while (*src != '\0')
	{
		dest[i] = *src;
		i++;
		src++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*s3;
	size_t	full_len;

	full_len = ft_strlen(s1) + ft_strlen(s2);
	s3 = malloc(sizeof(char) * (full_len + 1));
	if (!s3)
		return (NULL);
	ft_strcat(s3, (char *)s1);
	ft_strcat(s3, (char *)s2);
	return (s3);
}
/* 
int	main ()
{
	char	*s1 = "Ela disse ";
	char	*s2 = "que nao tinha personalidade juridica!";
	char	*s3 = ft_strjoin(s1, s2);

	printf ("%s\n", s3);
	free (s3);
	return (0);
} */
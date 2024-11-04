/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagalex <tiagalex@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 14:32:01 by tiagalex          #+#    #+#             */
/*   Updated: 2024/11/04 12:12:09 by tiagalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Procura uma str dentro de outra e copia até um tamanho específico.
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		if (haystack[i] == needle[0])
		{
			j = 0;
			while ((haystack[i + j] == needle[j]) && (i + j) < len
				&& (needle[j] != '\0'))
				j++;
			if (needle[j] == '\0')
				return ((char *)&haystack[i]);
		}
		i++;
	}
	return (NULL);
}
/* 
int main()
{
	char	*haystack = "Alguma coisas e outra cenas";
	char	*needle = "coisas";
	size_t	len = 13;
	char	*result = ft_strnstr(haystack, needle, len);

	printf ("%s", result);
	return (0);
} */
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagalex <tiagalex@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 17:23:28 by tiagalex          #+#    #+#             */
/*   Updated: 2024/10/30 11:44:30 by tiagalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//funcao que procura a ultima character e retorna o pointer do resto
char	*ft_strrchr(const char *str, int c)
{
	char	*last_c;

	last_c = NULL;
	while (*str)
	{
		if (*str == (char)c)
			last_c = (char *)str;
		str++;
	}
	if (c == '\0')
		return ((char *)str);
	return (last_c);
}
/* 
int	main()
{
	char	*str = "Alguma coisa qualquer caixa ou cao";
	int	c = 'c';
	printf ("%s", ft_strrchr(str, c));
	return (0);
} */
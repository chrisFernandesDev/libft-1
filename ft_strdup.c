/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagalex <tiagalex@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 12:25:43 by tiagalex          #+#    #+#             */
/*   Updated: 2024/10/30 11:50:18 by tiagalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*cpy;
	size_t	i;

	i = 0;
	cpy = (char *)malloc ((ft_strlen(str) + 1) * sizeof(char));
	if (!cpy)
		return (NULL);
	while (str[i] != '\0')
	{
		cpy[i] = str[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}
/* 
int	main()
{
	char	*str = "alguma coisa.";
	char	*cpy = ft_strdup(str);

	printf ("%s", cpy);
	free (cpy);
} */
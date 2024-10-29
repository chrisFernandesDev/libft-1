/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagalex <tiagalex@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 17:49:50 by tiagalex          #+#    #+#             */
/*   Updated: 2024/10/29 19:41:10 by tiagalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sub;
	int	s_len;

	i = 0;
	s_len = ft_strlen(s);
	sub = (char*)malloc((s_len + 1) * sizeof(char));
	if (!sub)
		return (NULL);
	if ((s_len < start) && (s_len < len))
		return (NULL);
	while ((sub[i] <= len) || (s[start] != '\0'))
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}

int	main()
{
	char	*s = "alguma coisa";
	int	start = 7;
	size_t	len = 3;
	char	*sub = ft_substr(s, start, len);

	printf ("%s\n", sub);
	return (0);
}
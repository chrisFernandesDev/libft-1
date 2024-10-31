/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagalex <tiagalex@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 18:06:23 by tiagalex          #+#    #+#             */
/*   Updated: 2024/10/31 22:34:25 by tiagalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_word_counter(char *s, char c)
{
	size_t	i;
	size_t	count;
	int		inside;

	i = 0;
	count = 0;
	inside = 0;
	while ( s[i] != '\0')
	{
		if (s[i] != c && inside == 0)
		{
			inside = 1;
			count++;
		}
		else if (s[i] == c)
			inside = 0;
		i++;
	}
	return (count);
}

char	**ft_split(const char *s, char c)
{
	size_t	i;
	size_t	start;
	size_t	word_counter;
	size_t	index;
	char	**result;

	i = 0;
	start = 0;
	index = 0;
	word_counter = ft_word_counter((char *)s, c);
	result = ft_calloc((word_counter + 1), sizeof(char *));
	if (!result)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] != c && start == i)
			start = i;
		else if (s[i] == c && start != i)
		{
			result[index++] = ft_substr(s, start, i - start);
			start = i + 1;
		}
		i++;
	}
	if (start < i)
		result[index++] = ft_substr(s, start, i - start);
	return (result);
}

int	main()
{
	char	*s = "ela disse que nao tenho personalidade juridica";
	char	c = ' ';
	char	**result = ft_split(s, c);
	int	i = 0;

	while (result[i] != NULL)
	{
		printf("%s\n", result[i]);
		i++;
	}
	return (0);
}
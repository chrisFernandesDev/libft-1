/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagalex <tiagalex@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 17:53:22 by tiagalex          #+#    #+#             */
/*   Updated: 2024/10/30 11:48:07 by tiagalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*calloc(size_t count, size_t size)
{
	void	*temp;

	temp = malloc(count * size);
	if (!temp)
		return (NULL);
	ft_bzero(temp, count * size);
	return (temp);
}
/* 
int main ()
{
	char *result = "bla";
	printf("%s\n", result);
	result = calloc(sizeof(char *), 4);
	printf("%s\n", result);
} */
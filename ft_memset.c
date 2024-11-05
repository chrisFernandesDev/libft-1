/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagalex <tiagalex@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 14:51:58 by tiagalex          #+#    #+#             */
/*   Updated: 2024/10/21 14:51:58 by tiagalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Preenche uma str c/ um valor específico.
void	*ft_memset(void *str, int value, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = str;
	i = 0;
	while (i < n)
	{
		ptr[i] = value;
		i++;
	}
	return (str);
}
/* 
int main()
{
    char buffer[50];

    ft_memset(buffer, 'C', sizeof(buffer) - 1);
    buffer[49] = '\0';
    printf("buffer after ft_menset: %s\n", buffer);

    return (0);
} */
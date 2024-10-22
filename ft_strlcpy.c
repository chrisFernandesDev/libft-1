/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagalex <tiagalex@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 16:04:33 by tiagalex          #+#    #+#             */
/*   Updated: 2024/10/22 16:18:49 by tiagalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Copia uma string para outra com o NULL incluido.
size_t	ft_strlcpy(char *dest, const char *src, size_t dest_size)
{
	size_t	src_len;

	src_len = ft_strlen(src);

	if (dest_size == 0)
		return ()
}
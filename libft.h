/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagalex <tiagalex@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 12:18:50 by tiagalex          #+#    #+#             */
/*   Updated: 2024/10/22 14:04:54 by tiagalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	LIBFT_H
#define	LIBFT_H

#include <stddef.h>
#include <stdio.h>
#include <unistd.h>


//Funcions
int	ft_isalnum(char c);
int	ft_isalpha(char c);
int	ft_isascii(int  c);
int	ft_isdigit(int c);
int	ft_isprint(int  c);
int	ft_strlen(char *str);
void	*ft_bzero(void *str, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t len);
void	*ft_memmove(void *dest, const void *src, size_t len);
void	*ft_memset(void *str, int value, size_t n);
size_t	ft_strlcpy(char *dest, const char *src, size_t dest_size);

#endif
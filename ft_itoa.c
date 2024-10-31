/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagalex <tiagalex@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 10:48:23 by tiagalex          #+#    #+#             */
/*   Updated: 2024/10/31 15:27:07 by tiagalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//contador do int
int	ft_intlen(const int nb)
{
	long	n;
	int		i;

	n = nb;
	i = 0;
	if (n < 0)
	{
		n = n * -1;
		i++;
	}
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

//Converte int para *str.
char	*ft_itoa(int n)
{
	size_t	len;
	char	*str;
	long	nb;

	nb = n;
	len = ft_intlen(nb);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	if (nb == 0)
		str[0] = '0';
	while (nb > 0)
	{
		str[--len] = (nb % 10) + '0';
		nb = nb / 10;
	}
	return (str);
}
/* 
int	main()
{
	int		n = -2451;
	char	*str = ft_itoa(n);

	printf("%s", str);
	free (str);
	return (0);
} */
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 10:11:47 by ncourtoi          #+#    #+#             */
/*   Updated: 2023/05/09 10:11:49 by ncourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nb_len(long n)
{
	int	i;

	i = 1;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n > 9)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static void	putnbr_stock(long n, char *str, int *i)
{
	if (n > 9)
	{
		putnbr_stock(n / 10, str, i);
		putnbr_stock(n % 10, str, i);
	}
	else
		str[(*i)++] = n + '0';
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	long	nbr;

	nbr = n;
	str = malloc(sizeof(char) * (nb_len(nbr) + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	if (nbr < 0)
	{
		str[i++] = '-';
		nbr *= -1;
	}
	putnbr_stock(nbr, str, &i);
	str[i] = '\0';
	return (str);
}

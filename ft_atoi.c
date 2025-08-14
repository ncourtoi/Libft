/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 13:27:04 by ncourtoi          #+#    #+#             */
/*   Updated: 2023/04/26 13:27:05 by ncourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	nb;
	int	sign;

	sign = 0;
	nb = 0;
	i = 0;
	while (*str == ' ' || *str == '\n' || *str == '\t'
		|| *str == '\v' || *str == '\r' || *str == '\f')
		str++;
	if (*str == '-')
		sign = 1;
	if (*str == '-' || *str == '+')
		str++;
	while (str[i] >= 48 && str[i] <= 57)
	{
		nb = (str[i] - 48) + (10 * nb);
		i++;
	}
	if (sign == 1)
		nb = nb * -1;
	return (nb);
}

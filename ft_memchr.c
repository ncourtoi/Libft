/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 14:32:20 by ncourtoi          #+#    #+#             */
/*   Updated: 2023/04/24 14:32:21 by ncourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	sc;
	size_t			i;

	ptr = (unsigned char *) s;
	sc = (unsigned char) c;
	i = 0;
	while (i < n)
	{
		if (*(ptr + i) == sc)
		{
			return (ptr + i);
		}
		i++;
	}
	return (0);
}

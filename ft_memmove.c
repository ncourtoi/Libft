/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 12:56:00 by ncourtoi          #+#    #+#             */
/*   Updated: 2023/04/24 12:56:01 by ncourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*cpy_dst;
	char	*cpy_src;

	if (!src && !dest)
		return (NULL);
	if (src > dest)
		dest = ft_memcpy(dest, src, n);
	else
	{
		cpy_dst = (char *)dest;
		cpy_src = (char *)src;
		while (n--)
			cpy_dst[n] = cpy_src[n];
	}
	return (dest);
}

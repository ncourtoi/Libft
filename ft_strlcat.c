/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 11:36:33 by ncourtoi          #+#    #+#             */
/*   Updated: 2023/04/26 11:36:34 by ncourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	src_len;
	size_t	i;

	src_len = ft_strlen(dest);
	i = 0;
	if (size <= src_len)
		return (ft_strlen(src) + size);
	while (src[i] && (src_len + i) < (size - 1))
	{
		dest[src_len + i] = src[i];
		i++;
	}
	dest[src_len + i] = 0;
	return (ft_strlen(src) + src_len);
}

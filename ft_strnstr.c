/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 13:15:20 by ncourtoi          #+#    #+#             */
/*   Updated: 2023/04/26 13:15:22 by ncourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	n;

	if (*s2 == 0)
		return ((char *)s1);
	n = ft_strlen(s2);
	while (*s1 && n <= len)
	{
		if (*s1 == *s2 && ft_strncmp(s1, s2, n) == 0)
			return ((char *)s1);
		++s1;
		--len;
	}
	return (NULL);
}

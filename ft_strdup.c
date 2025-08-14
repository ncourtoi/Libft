/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 13:48:35 by ncourtoi          #+#    #+#             */
/*   Updated: 2023/04/26 13:48:35 by ncourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*s2;
	size_t	len;

	len = ft_strlen(s) + 1;
	s2 = (char *)malloc(sizeof(*s2) * len);
	if (!s2)
		return (NULL);
	return ((char *)ft_memcpy(s2, s, len));
}

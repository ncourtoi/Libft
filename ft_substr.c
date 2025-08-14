/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 10:28:32 by ncourtoi          #+#    #+#             */
/*   Updated: 2023/05/02 10:28:33 by ncourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*new;

	if (s == NULL)
		return (NULL);
	if (ft_strlen(s) < start)
	{
		new = ft_calloc(1, sizeof(char));
		if (!new)
			return (NULL);
	}
	else
	{
		i = ft_strlen(s + start);
		if (!(i < len))
			i = len;
		new = (char *)malloc((i + 1) * sizeof(char));
		if (!new)
			return (NULL);
		new[i] = 0;
		while (i-- > 0)
			new[i] = s[start + i];
	}
	return (new);
}

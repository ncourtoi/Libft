/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 10:13:39 by ncourtoi          #+#    #+#             */
/*   Updated: 2023/05/09 10:13:40 by ncourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	len;
	char	*new;

	if (s == NULL)
		return (NULL);
	len = ft_strlen(s);
	new = ft_calloc(sizeof(char), (len + 1));
	if ((new) == NULL)
		return (NULL);
	i = 0;
	while (*(s + i))
	{
		*(new + i) = (*f)(i, *(s + i));
		i++;
	}
	*(new + i) = '\0';
	return (new);
}

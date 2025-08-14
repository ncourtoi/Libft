/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 12:42:01 by ncourtoi          #+#    #+#             */
/*   Updated: 2023/05/02 12:42:03 by ncourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ischar(char c, const char *set)
{
	size_t	i;

	i = 0;
	while (*(set + i))
	{
		if (*(set + i) == c)
			return (1);
		i++;
	}
	return (0);
}

static char	*trim(const char *s1, const char *set, size_t *x, size_t i)
{
	size_t	j;
	size_t	len;
	char	*new;

	len = ft_strlen(s1);
	j = 0;
	while (ischar(*(s1 + len - j - 1), set))
		j++;
	new = ft_calloc(sizeof(char), len - (j + i) + 1);
	if (new == NULL)
		return (NULL);
	while (*x < len - (j + i))
	{
		*(new + *x) = *(s1 + i + *x);
		*x += 1;
	}
	return (new);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	x;
	size_t	len;
	char	*new;

	if (s1 == NULL)
		return (NULL);
	i = 0;
	len = ft_strlen(s1);
	while (ischar(*(s1 + i), set))
		i++;
	x = 0;
	if (i == len)
		new = malloc(1);
	else
		new = trim(s1, set, &x, i);
	if (new != NULL)
		*(new + x) = '\0';
	return (new);
}	

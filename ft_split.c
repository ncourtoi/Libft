/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 10:11:27 by ncourtoi          #+#    #+#             */
/*   Updated: 2023/05/19 10:11:28 by ncourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	allocate(char **tab, char const *s, char sep)
{
	char		**tab_t;
	char const	*tmp;

	tmp = s;
	tab_t = tab;
	while (*tmp)
	{
		while (*s == sep)
			++s;
		tmp = s;
		while (*tmp && *tmp != sep)
			++tmp;
		if (*tmp == sep || tmp > s)
		{
			*tab_t = ft_substr(s, 0, tmp - s);
			s = tmp;
			++tab_t;
		}
	}
	*tab_t = NULL;
}

static int	count_words(char const *s, char sep)
{
	int	word;

	word = 0;
	while (*s)
	{
		while (*s == sep)
			++s;
		if (*s)
			++word;
		while (*s && *s != sep)
			++s;
	}
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**new;
	int		size;

	if (!s)
		return (NULL);
	size = count_words(s, c);
	new = (char **)malloc(sizeof(char *) * (size + 1));
	if (!new)
		return (NULL);
	allocate(new, s, c);
	return (new);
}

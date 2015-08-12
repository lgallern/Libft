/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgallern <lgallern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/17 17:10:04 by lgallern          #+#    #+#             */
/*   Updated: 2015/05/27 14:47:17 by lgallern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(char const *s, char c)
{
	size_t i;

	i = 0;
	while (*s != '\0')
	{
		while (*s && *s == c)
			s++;
		if (*s)
			i++;
		while (*s && *s != c)
			s++;
	}
	return (i);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**tab;
	size_t	i;
	size_t	h;
	size_t	len;

	i = 0;
	h = 0;
	len = 0;
	if (!s)
		return (NULL);
	tab = (char **)malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (tab == NULL)
		return (NULL);
	while (s[i] && s[len])
	{
		while (s[i] && s[i] == c)
			i++;
		len = i;
		while (s[len] && s[len] != c)
			len++;
		tab[h++] = ft_strsub(s, i, len - i);
		i = len;
	}
	tab[ft_count_words(s, c)] = 0;
	return (tab);
}

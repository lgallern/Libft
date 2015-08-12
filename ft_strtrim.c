/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgallern <lgallern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/14 19:26:03 by lgallern          #+#    #+#             */
/*   Updated: 2014/11/17 17:09:29 by lgallern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isempty(char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	else
		return (0);
}

char		*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	l;
	char	*str;

	i = 0;
	if (s)
	{
		l = ft_strlen(s) - 1;
		while (s[i] && ft_isempty(s[i]))
			i++;
		while (l > 0 && ft_isempty(s[l]))
			l--;
		l++;
		if (i < l)
		{
			if ((str = ft_strsub(s, i, l - i)))
				return (str);
		}
		else
			return (ft_strnew(0));
	}
	return (NULL);
}

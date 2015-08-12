/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgallern <lgallern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 17:29:20 by lgallern          #+#    #+#             */
/*   Updated: 2014/11/24 18:18:30 by lgallern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	char	a;
	int		i;
	int		l;

	a = c;
	i = 1;
	l = ft_strlen(s);
	if (a == 0)
		return (char *)(s + l);
	while (s[l - i])
	{
		if (s[l - i] == a)
			return (char *)(s + l - i);
		i++;
	}
	return (0);
}

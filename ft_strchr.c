/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgallern <lgallern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 16:07:27 by lgallern          #+#    #+#             */
/*   Updated: 2014/11/26 17:39:50 by lgallern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	char	a;
	int		i;

	a = c;
	i = 0;
	while (s[i])
	{
		if (s[i] == a)
			return (char *)(s + i);
		i++;
	}
	if (a == 0)
		return (char *)(s + i);
	return (0);
}

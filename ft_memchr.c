/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgallern <lgallern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/09 19:15:22 by lgallern          #+#    #+#             */
/*   Updated: 2014/11/26 13:45:36 by lgallern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	char	a;
	char	*st;
	size_t	i;

	a = c;
	st = (char *)s;
	i = 0;
	while (i < n)
	{
		if (st[i] == a)
			return (st + i);
		i++;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgallern <lgallern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 14:52:09 by lgallern          #+#    #+#             */
/*   Updated: 2014/11/26 13:45:02 by lgallern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char			*d;
	const char		*s;
	unsigned char	a;
	size_t			i;

	d = (char *)dst;
	s = (char *)src;
	a = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		if ((unsigned char)d[i] == a)
			return (d + i + 1);
		i++;
	}
	return (0);
}

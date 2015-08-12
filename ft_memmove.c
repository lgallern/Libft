/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgallern <lgallern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/09 15:27:37 by lgallern          #+#    #+#             */
/*   Updated: 2014/11/24 18:22:23 by lgallern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
	char *d;
	char *s;

	d = dst;
	s = (char *)src;
	if (s < d)
		while (len > 0)
		{
			d[len - 1] = s[len - 1];
			len--;
		}
	else
	{
		ft_memcpy(d, s, len);
	}
	return (dst);
}

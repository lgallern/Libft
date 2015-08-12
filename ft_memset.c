/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgallern <lgallern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 11:07:05 by lgallern          #+#    #+#             */
/*   Updated: 2014/11/24 17:56:10 by lgallern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
	unsigned char	a;
	char			*p;

	a = c;
	p = b;
	while (len > 0)
	{
		*p = a;
		p++;
		len--;
	}
	return (b);
}

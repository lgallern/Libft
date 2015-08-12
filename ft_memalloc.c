/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgallern <lgallern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/12 14:52:47 by lgallern          #+#    #+#             */
/*   Updated: 2014/11/26 17:24:55 by lgallern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memalloc(size_t size)
{
	void *r;

	if (size == 0)
		return (NULL);
	if ((r = (void *)malloc(sizeof(void) * size)))
	{
		ft_memset(r, '\0', size);
		return (r);
	}
	else
		return (NULL);
}

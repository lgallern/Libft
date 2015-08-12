/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgallern <lgallern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 15:39:52 by lgallern          #+#    #+#             */
/*   Updated: 2014/11/24 18:19:43 by lgallern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	size_t			o;
	unsigned char	*c_s1;
	unsigned char	*c_s2;

	i = 0;
	c_s1 = (unsigned char *)s1;
	c_s2 = (unsigned char *)s2;
	if (s2 == NULL || *s2 == 0)
		return ((char *)s1);
	if (ft_strlen(s2) > n)
		return (NULL);
	while (c_s1[i] && i < n)
	{
		o = 0;
		while (c_s1[i + o] == c_s2[o] && c_s1[i + o] && c_s2[o] && i + o < n)
			o++;
		if (s2[o] == '\0')
			return (char *)(s1 + i);
		i++;
	}
	return (NULL);
}

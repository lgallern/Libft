/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgallern <lgallern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 12:24:27 by lgallern          #+#    #+#             */
/*   Updated: 2014/11/24 18:16:16 by lgallern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strstr(const char *s1, const char *s2)
{
	size_t			i;
	size_t			o;
	unsigned char	*c_s1;
	unsigned char	*c_s2;

	i = 0;
	o = 0;
	c_s1 = (unsigned char *)s1;
	c_s2 = (unsigned char *)s2;
	if (c_s2[0] == '\0')
		return (char *)(s1);
	while (s1[i])
	{
		o = 0;
		if (c_s1[i] == c_s2[o])
		{
			while (c_s1[i + o] == c_s2[o] && c_s1[i + o] && c_s2[o])
				o++;
			if (o == ft_strlen(s2))
				return (char*)(s1 + i);
		}
		i++;
	}
	return (NULL);
}

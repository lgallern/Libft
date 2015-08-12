/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgallern <lgallern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/14 17:57:28 by lgallern          #+#    #+#             */
/*   Updated: 2014/11/24 18:00:04 by lgallern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *str;

	if (s)
	{
		str = ft_strnew(len);
		if (str == NULL)
			return (NULL);
		str = ft_strncpy(str, &s[start], len);
		return (str);
	}
	else
		return (NULL);
}

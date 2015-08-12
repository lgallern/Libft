/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgallern <lgallern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/14 16:22:46 by lgallern          #+#    #+#             */
/*   Updated: 2014/12/12 15:47:16 by lgallern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	int		len;
	char	*str;

	i = 0;
	len = 0;
	if (s && f)
	{
		if (s[i] != '\0')
		{
			len = ft_strlen (s);
		}
		if ((str = (char *)malloc(sizeof(char) * len + 1)))
		{
			while (i < len)
			{
				str[i] = f(i, s[i]);
				i++;
			}
			str[len] = '\0';
			return (str);
		}
		return (0);
	}
	return (NULL);
}

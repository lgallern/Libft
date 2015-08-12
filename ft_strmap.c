/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgallern <lgallern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/12 19:18:01 by lgallern          #+#    #+#             */
/*   Updated: 2014/12/12 15:46:38 by lgallern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmap(char const *s, char (*f)(char))
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
			len = ft_strlen(s);
		}
		if ((str = (char *)malloc(sizeof(char) * len + 1)))
		{
			while (i < len)
			{
				str[i] = f(s[i]);
				i++;
			}
			str[len] = '\0';
			return (str);
		}
		return (0);
	}
	return (NULL);
}

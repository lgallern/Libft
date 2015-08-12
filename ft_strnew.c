/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgallern <lgallern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/12 15:25:10 by lgallern          #+#    #+#             */
/*   Updated: 2014/12/12 16:05:01 by lgallern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnew(size_t size)
{
	size_t	i;
	char	*str;

	i = 0;
	if ((str = (char *)malloc(sizeof(char) * (size))))
	{
		while (i < size)
		{
			str[i] = '\0';
			i++;
		}
		str[size] = '\0';
		return (str);
	}
	else
		return (NULL);
}

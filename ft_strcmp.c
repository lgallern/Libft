/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgallern <lgallern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 16:16:48 by lgallern          #+#    #+#             */
/*   Updated: 2014/11/26 17:41:11 by lgallern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int i;

	i = 0;
	while (1)
	{
		if (s1[i] != s2[i])
		{
			return (((unsigned char)s1[i]) - ((unsigned char)s2[i]));
		}
		if (s1[i] == '\0')
		{
			return (0);
		}
		i++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgallern <lgallern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 15:28:54 by lgallern          #+#    #+#             */
/*   Updated: 2014/11/16 18:21:57 by lgallern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t i;
	size_t s1_size;

	i = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	s1_size = i;
	i = 0;
	while (s2[i] != '\0' && i < n)
	{
		s1[s1_size + i] = s2[i];
		i++;
	}
	s1[s1_size + i] = '\0';
	return (s1);
}

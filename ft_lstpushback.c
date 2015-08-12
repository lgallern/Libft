/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpushback.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgallern <lgallern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/27 17:26:30 by lgallern          #+#    #+#             */
/*   Updated: 2014/11/27 17:31:42 by lgallern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstpushback(t_list **begin_list, t_list *new)
{
	t_list *string;

	string = *begin_list;
	if (*begin_list)
	{
		while (string->next)
			string = string->next;
		string->next = new;
	}
	else
		*begin_list = new;
}

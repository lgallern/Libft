/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgallern <lgallern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/27 13:51:33 by lgallern          #+#    #+#             */
/*   Updated: 2014/11/27 18:04:35 by lgallern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new;
	t_list *tmp;

	new = NULL;
	tmp = NULL;
	while (lst)
	{
		tmp = ft_lstnew(lst->content, lst->content_size);
		if (tmp == NULL)
			return (NULL);
		ft_lstpushback(&new, f(tmp));
		lst = lst->next;
	}
	return (new);
}

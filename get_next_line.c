/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgallern <lgallern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/24 15:14:23 by lgallern          #+#    #+#             */
/*   Updated: 2015/07/24 15:16:25 by lgallern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_buffer	*get_fd(t_list **list, int const fd)
{
	t_list		*lst;
	t_buffer	*buf;

	lst = *list;
	while (lst != NULL && ((t_buffer*)lst->content)->fd != fd)
		lst = lst->next;
	if (lst == NULL)
	{
		buf = (t_buffer*)malloc(sizeof(t_buffer));
		if (buf == NULL)
			return (free(buf), NULL);
		buf->cursor = 1;
		buf->size = 1;
		buf->fd = fd;
		lst = ft_lstnew(buf, sizeof(t_buffer));
		if (lst == NULL)
			return (free(buf), NULL);
		ft_lstadd(list, lst);
		free(buf);
	}
	return ((t_buffer*)lst->content);
}

int			join_till_backslash_n(char **line, t_buffer **buf)
{
	char	*tmp;

	tmp = *line;
	*line = ft_strjoin(*line, (*buf)->str + (*buf)->cursor);
	free(tmp);
	if (*line == NULL)
		return (-1);
	(*buf)->cursor = (*buf)->size;
	return (1);
}

int			join_b4_bckslash_n(char **line, t_buffer **buf, char **newlinepos)
{
	char	*tmp;

	tmp = *line;
	*line = ft_strnjoin(*line, (*buf)->str + (*buf)->cursor,
		*newlinepos - ((*buf)->str + (*buf)->cursor));
	free(tmp);
	if (*line == NULL)
		return (-1);
	(*buf)->cursor = (*newlinepos + 1) - (*buf)->str;
	return (1);
}

void		read_if_needed(int fd, t_buffer *buf)
{
	if ((ssize_t)buf->cursor >= buf->size)
	{
		buf->size = read(fd, &buf->str, BUF_SIZE);
		buf->str[buf->size] = '\0';
		buf->cursor = 0;
	}
}

int			get_next_line(int const fd, char **line)
{
	t_buffer		*buf;
	char			*newlinepos;
	static t_list	*list;

	buf = get_fd(&list, fd);
	if (buf == NULL || line == NULL)
		return (-1);
	*line = ft_strnew(0);
	while (1)
	{
		read_if_needed(fd, buf);
		if (buf->size == 0 && **line != '\0')
			return (1);
		else if (buf->size <= 0)
			return (buf->size);
		newlinepos = ft_strchr(buf->str + buf->cursor, '\n');
		if (newlinepos == NULL)
		{
			if (join_till_backslash_n(line, &buf) == -1)
				return (-1);
		}
		else
			return (join_b4_bckslash_n(line, &buf, &newlinepos));
	}
}

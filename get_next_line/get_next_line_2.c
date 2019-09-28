/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjosue <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 12:44:11 by mjosue            #+#    #+#             */
/*   Updated: 2019/09/28 13:10:41 by mjosue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static t_data	*ft_lstnew_fd(int fd)
{
	t_data	*list;

	if (!(list = (t_data*)malloc(sizeof(t_data))))
		return (NULL);
	list->fd = fd;
	list->buff_all = NULL;
	list->next = NULL;
	return (list);
}

static t_data	*ft_list_swipe(t_data *list, int fd)
{
	if (list)
	{
		while (fd != list->fd && list->next)
			list = list->next;
		if (!(list->next) && list->fd != fd)
		{
			if (!(list->next = ft_lstnew_fd(fd)))
				return (NULL);
			return (list->next);
		}
	}
	if (!list)
		if (!(list = ft_lstnew_fd(fd)))
			return (NULL);
	return (list);
}

static int		part_1_2(char **line, t_data *data, int count)
{
	char	*tmp;

	if (!(tmp = ft_strsub(data->buff_all, 0, count)))
		return (-1);
	*line = tmp;
	if (count == (int)ft_strlen(data->buff_all))
		count--;
	ft_memmove(&data->buff_all[0], &data->buff_all[count + 1], 
			ft_strlen(data->buff_all) - count - 1);
	ft_bzero(&data->buff_all[ft_strlen(data->buff_all) - count - 1], 
			count + 1);
	return (1);
}

static int		part_1_1(char **line, t_data *data)
{
	char	buff_all[BUFF_SIZE + 1];
	char	*tmp;

	if (!(data->ret = read(data->fd, buff_all, BUFF_SIZE)))
	{
		if (!(data->buff_all) || data->buff_all[0] == '\0')
			return (0);
		else
			return (part_1_2(line, data, ft_strlen(data->buff_all)));
	}
	if (data->ret < 0)
		return (-1);
	buff_all[data->ret] = '\0';
	if (!(tmp = ft_strjoin(data->buff_all, buff_all)))
		return (-1);
	free(data->buff_all);
	data->buff_all = tmp;
	return (2);
}

int					get_next_line(const int fd, char **line)
{
	static t_data	*head;
	t_data			*data;
	char			verif[1];

	if (fd < 0 || !line || read(fd, verif, 0) == -1)
		return (-1);
	if (!(head))
		if (!(head = ft_lstnew_fd(fd)))
			return (-1);
	data = head;
	if (!(data = ft_list_swipe(data, fd)))
		return (-1);
	while (fd > -1)
	{
		data->count = ft_strichr(data->buff_all, '\n');
		if (data->count >= 0)
			if ((data->retur = part_1_2(line, data, data->count)) < 2)
				return (data->retur);
		if (data->count < 0)
			if ((data->retur = part_1_1(line, data)) < 2)
				return (data->retur);
	}
	return (-1);
}

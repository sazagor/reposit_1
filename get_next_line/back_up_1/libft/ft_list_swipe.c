/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_swipe.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjosue <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/27 19:39:48 by mjosue            #+#    #+#             */
/*   Updated: 2019/09/27 19:39:51 by mjosue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

t_data  *ft_list_swipe(t_data *list, int fd)
{
    if (list)
    {
        while (fd != list->fd && list->next)
            list = list->next;
        if (!(list->next) && list->fd != fd)
        {
            if(!(list->next = ft_lstnew_fd(fd)))
                return (NULL);
            return (list->next);
        }
    }
	if (!list)
		if (!(list = ft_lstnew_fd(fd)))
			return (NULL);
	return (list);
}

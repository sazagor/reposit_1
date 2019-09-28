/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjosue <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 12:19:46 by mjosue            #+#    #+#             */
/*   Updated: 2019/09/19 13:18:23 by mjosue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

t_list	*ft_create_elem(void *content, size_t content_size)
{
	t_list *list;

	if (!(list = malloc(sizeof(t_list))))
		return (NULL);
	list->next = NULL;
	list->content = content;
	list->content_size = content_size;
	return (list);
}

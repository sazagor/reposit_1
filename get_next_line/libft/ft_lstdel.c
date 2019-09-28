/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjosue <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 17:36:38 by mjosue            #+#    #+#             */
/*   Updated: 2019/09/18 16:21:02 by mjosue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *list;

	list = *alst;
	if (!*alst || !alst)
		return ;
	while (list)
	{
		del(list->content, list->content_size);
		free(list);
		list = list->next;
	}
	*alst = NULL;
}

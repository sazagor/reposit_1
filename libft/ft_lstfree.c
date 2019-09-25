/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjosue <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 17:36:38 by mjosue            #+#    #+#             */
/*   Updated: 2019/09/18 16:24:00 by mjosue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	ft_lstfree(t_list **alst)
{
	if (!*alst || !alst)
		return ;
	while (*alst)
	{
		free((*alst)->content);
		(*alst)->content = NULL;
		(*alst)->content_size = 0;
		(*alst) = (*alst)->next;
	}
	free(*alst);
	*alst = NULL;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjosue <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 17:36:38 by mjosue            #+#    #+#             */
/*   Updated: 2019/09/18 17:53:23 by mjosue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int	ft_strequ(char const *s1, char const *s2)
{
	if (!s1 || !s2)
		return (0);
	if (!ft_strcmp(s1, s2))
		return (1);
	return (0);
}

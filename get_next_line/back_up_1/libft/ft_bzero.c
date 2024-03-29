/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjosue <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 15:34:34 by mjosue            #+#    #+#             */
/*   Updated: 2019/09/18 15:41:07 by mjosue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	ft_bzero(void *dest, size_t num)
{
	size_t	i;
	char	*str;

	str = dest;
	i = 0;
	while (i < num)
	{
		*(str + i) = 0;
		i++;
	}
}

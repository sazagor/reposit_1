/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjosue <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 17:02:15 by mjosue            #+#    #+#             */
/*   Updated: 2019/09/18 17:04:00 by mjosue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	*ft_memset(void *dest, int c, size_t num)
{
	size_t	i;
	char	*str;

	str = dest;
	i = 0;
	while (i < num)
	{
		*(str + i) = c;
		i++;
	}
	return (dest);
}

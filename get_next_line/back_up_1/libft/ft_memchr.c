/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjosue <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 17:29:29 by mjosue            #+#    #+#             */
/*   Updated: 2019/09/18 16:37:01 by mjosue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	*ft_memchr(const void *arr, int c, size_t num)
{
	size_t			i;
	unsigned char	*str;

	str = (unsigned char*)arr;
	i = 0;
	while (i < num)
	{
		if (*(str + i) == (unsigned char)c)
			return ((void *)(str + i));
		i++;
	}
	return (NULL);
}

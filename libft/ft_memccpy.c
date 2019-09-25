/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjosue <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 17:29:29 by mjosue            #+#    #+#             */
/*   Updated: 2019/09/18 16:33:35 by mjosue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t num)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	*stm;
	unsigned char	b;

	str = (unsigned char*)dest;
	stm = (unsigned char*)src;
	b = (unsigned char)c;
	i = 0;
	while (i < num)
	{
		if (*(stm + i) != b)
		{
			*(str + i) = *(stm + i);
			i++;
		}
		else
		{
			*(str + i) = *(stm + i);
			return ((void*)(str + 1 + i));
		}
	}
	return (NULL);
}

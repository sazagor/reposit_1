/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjosue <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 16:49:18 by mjosue            #+#    #+#             */
/*   Updated: 2019/09/18 16:51:20 by mjosue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t num)
{
	size_t	i;
	char	*str;
	char	*stm;

	if (dest == NULL && src == NULL)
		return (NULL);
	str = dest;
	stm = (char*)src;
	i = 0;
	while (i < num)
	{
		*(str + i) = *(stm + i);
		i++;
	}
	return (dest);
}

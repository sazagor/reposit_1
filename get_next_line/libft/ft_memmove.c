/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjosue <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 16:53:51 by mjosue            #+#    #+#             */
/*   Updated: 2019/09/18 16:56:01 by mjosue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	*ft_memmove(void *dest, const void *src, size_t num)
{
	size_t	i;
	char	*stm;
	char	*temp;

	if (dest == NULL && src == NULL)
		return (NULL);
	stm = (char*)src;
	temp = (char*)dest;
	i = -1;
	if (dest <= src)
	{
		while (++i < num)
			*(temp + i) = *(stm + i);
	}
	if (dest > src)
	{
		while ((int)--num > -1)
			*(temp + (int)num) = *(stm + (int)num);
	}
	return (dest);
}

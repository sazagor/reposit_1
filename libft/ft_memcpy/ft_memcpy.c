/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjosue <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 17:29:29 by mjosue            #+#    #+#             */
/*   Updated: 2019/07/20 17:29:32 by mjosue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>


void *ft_memcpy(void *dest, const void *src, size_t num)
{
	size_t i;
	char *str;
	char *stm;
	
	str = dest;
	stm = (char*)src;
	
	i = 0;
	while (i < num)
	{
		*(str+i )= *(stm+i);
		i++;
	}
	
	return(dest);
}
	
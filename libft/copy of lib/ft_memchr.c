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

#include "libft.h"

void *ft_memchr (const void *arr, int c, size_t num)
{
	size_t i;
	char *str;
	
	str = (char*)arr;
	
	i = 0;
	while (i < num)
	{
		if (*(str+i )== c)
			return(str+i);
		i++;
	}
	return(NULL);
}
	

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

void *ft_memset (void *dest, int c, size_t num)
{
	size_t i;
	char *str;
	
	str = dest;
	
	i = 0;
	while (i < num)
	{
		*(str+i )= c;
		i++;
	}
	return(dest);
}
	
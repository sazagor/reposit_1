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

int ft_memcmp (const void *arr1, const void *arr2, size_t n) 
{
	size_t i;
	unsigned char *str1;
	unsigned char *str2;
	
	str1 = (unsigned char*)arr1;
	str2 = (unsigned char*)arr2;
	
	i = 0;
	while (i < n)
	{
		if (*(str1+i )!= *(str2+i ))
			return(*(str1+i )- *(str2+i ));
		i++;
	}
	return(0);
}
	
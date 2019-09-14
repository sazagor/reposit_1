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


void *ft_memmove(void *dest, const void *src, size_t num)
{
	size_t i;
	char *stm;
	char *temp;
    
    if (dest == NULL && src == NULL)
        return(NULL);
    stm = (char*)src;
    temp = (char*)dest;
    i = -1;
    if (dest <= src)
    {
        while (++i < num)
            *(temp+i)= *(stm+i);
    }
    if (dest > src)
    {
       while ((int)--num > -1)
           *(temp+(int)num)= *(stm+(int)num);
    }
    return(dest);
}

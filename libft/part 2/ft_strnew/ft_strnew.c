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
#include <stdlib.h>

void ft_bzero (void *dest, size_t num)
{
    size_t i;
    char *str;
    
    str = dest;
    
    i = 0;
    while (i < num)
    {
        *(str+i )= 0;
        i++;
    }
}

char * ft_strnew(size_t size)
{
	char *str;
	
    str = (char*)malloc(sizeof(char) * (size+1));
    if (!str)
        return(NULL);
    ft_bzero(str, size+1);
    return (str);
}
	

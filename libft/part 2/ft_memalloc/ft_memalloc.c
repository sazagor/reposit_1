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
#include <libft.h>

void * ft_memalloc(size_t size)
{
	void *str;
	
    str = malloc(size);
    if (!str)
        return(NULL);
    ft_bzero(mem, size);
    return (str);
}
	

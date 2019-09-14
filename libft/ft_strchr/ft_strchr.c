/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjosue <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 17:36:38 by mjosue            #+#    #+#             */
/*   Updated: 2019/07/08 19:16:04 by mjosue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include "libft.h"

char *ft_strchr (const char *str, int ch)
{
    char *strin;
    size_t len;
    
    len = ft_strlen(str)+1;
    strin = (char*)str;
    while (--len+1 >= 1)
    {
        if (*strin == ch)
            return (strin);
        strin++;
    }
    return (NULL);
}


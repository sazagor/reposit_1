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
#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int,char *))
{
	size_t len;
	unsigned int i;
	
    if (!s || !f)
        return;
    i = -1;
	len = ft_strlen (s);
    while (++i < len)
		f(i,(s+i));
}


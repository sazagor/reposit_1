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


char * ft_strmap(char const *s, char (*f)(char))
{
	size_t len;
    size_t i;
	char *str;
    
    if (!s || !f)
        return(NULL);
	len = ft_strlen (s);
	str = ft_strnew (len);
	if (!str)
		return(NULL);
	i = -1;
	while (++i < len)
		*(str+i) = f(*(s+i));
	return(str);
}


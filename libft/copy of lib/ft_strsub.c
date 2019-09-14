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

char * ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *str;
	unsigned int i;
	
    str = NULL;
    if (!s || !*s)
        return(NULL);
    if (!len)
    {
        str = "";
        return(str);
    }
	str = ft_strnew (len);
	if (!str)
		return(NULL);
	i = -1;
	while (++i < len)
		*(str+i) = *(s+i+start);
	return(str);
}

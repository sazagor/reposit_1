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

char * ft_strjoin(char const *s1, char const*s2)

{
	char *str;
	size_t len;
	
    if (!s1 || !s2)
        return(NULL);
	len = ft_strlen (s1) + ft_strlen(s2);
    if (!(str= ft_strnew (len)))
   		return(NULL);
    str = ft_strcat (str,s1);
    str = ft_strcat (str,s2);
	return(str);
}


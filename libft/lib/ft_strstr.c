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

char *ft_strstr(const char *str1, const char *str2)
{
    int c;
    if (*str2 == '\0')
        return ((char*)str1);
    while (*str1 != '\0')
    {
        if (*str1 == *str2)
        {
            c = 0;
            while ((*str1 == *str2) && *str1 != '\0')
            {
                str1++;
                str2++;
                c++;
            }
            if (*str2 == '\0')
                return ((char*)(str1-c));
            else
            {
                str1 = str1 - c;
                str2 = str2 - c;
            }
        }
        str1++;
    }
	return (NULL);
}

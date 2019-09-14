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

char * ft_strtrim(char const *s)
{
	char *str;
	unsigned int start;
	unsigned int end;
	
    if (!s)
        return(NULL);
	start = 0;
	while (*(s+ start) == 9 || *(s + start) == 10 || *(s+ start) == 32)
		start ++;
	end = ft_strlen (s) - 1;
    if (start == end +1)
    {
        str = "";
        return (str);
    }
	while (*(s+ end) == 9 || *(s+ end) == 10 || *(s+ end) == 32)
		end--;
	str = ft_strnew (end - start +1);
	if (!str)
		return (NULL);
	ft_strncpy (str,(s+start),(size_t)(end - start +1));
    return (str);
}


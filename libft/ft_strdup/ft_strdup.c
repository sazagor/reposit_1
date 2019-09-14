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
#include <stdlib.h>

int    ft_strlen(const char *str)
{
    int k;
    
    k = 0;
    while (str[k] != '\0')
        k++;
    return (k);
}

char *ft_strdup(const char *str) 
{
	int k;
	char *copy;
    int     len;
    
    len = ft_strlen(str)+1;
    copy = (char *)(malloc(sizeof(char*)*len));
	if (!copy)
		return(NULL);
	k = -1;
	while (str[++k] != '\0')
		copy[k] = str[k];
	return (copy);
}

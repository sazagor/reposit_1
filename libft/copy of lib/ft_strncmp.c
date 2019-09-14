/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjosue <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 10:40:28 by mjosue            #+#    #+#             */
/*   Updated: 2019/09/04 10:43:11 by mjosue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t i;
    
	i = -1;
	while ((++i < n) && (str1[i] != '\0' || str2[i] != '\0'))
	{
		if (str1[i] != str2[i])
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
	}
	return (0);
}

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

char *ft_strcat (char *dest, const char *src) 
{
	size_t k;
	size_t len;
	
	len = ft_strlen(dest);
	k = -1;
	while (src[++k] != '\0')
		dest[len++] = src[k];
	dest[len] = '\0';
	return (dest);
}

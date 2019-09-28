/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjosue <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 17:36:38 by mjosue            #+#    #+#             */
/*   Updated: 2019/09/18 17:58:58 by mjosue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	k;
	size_t	len;
	size_t	temp;

	len = ft_strlen(dest);
	if (len >= size)
		return (size + ft_strlen(src));
	else
	{
		temp = len;
		k = -1;
		while ((src[++k] != '\0') && (len + 1 < size))
			dest[len++] = src[k];
		dest[len] = '\0';
	}
	return (temp + ft_strlen(src));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjosue <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 17:36:38 by mjosue            #+#    #+#             */
/*   Updated: 2019/09/18 18:10:40 by mjosue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t k;
	size_t len;

	len = ft_strlen(dest);
	k = -1;
	while ((src[++k] != '\0') && (k < n))
		dest[len++] = src[k];
	dest[len] = '\0';
	return (dest);
}

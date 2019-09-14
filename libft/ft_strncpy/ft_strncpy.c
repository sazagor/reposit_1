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

char *ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t i;

	i = -1;
	while ((++i < n) && (src[i] != '\0'))
		dest[i] = src[i];
	while (i++ < n)
		dest[i] = '\0';
	return dest;
}


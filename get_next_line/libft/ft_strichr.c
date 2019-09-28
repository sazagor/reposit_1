/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strichr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjosue <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/27 19:50:13 by mjosue            #+#    #+#             */
/*   Updated: 2019/09/28 12:42:37 by mjosue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int	ft_strichr(const char *str, int ch)
{
	char			*strin;
	size_t			len;
	unsigned int	i;

	if (!str || !*str)
		return (-1);
	len = ft_strlen(str) + 1;
	strin = (char*)str;
	i = -1;
	while (++i < len + 1)
	{
		if (*strin == ch)
			return (i);
		strin++;
	}
	return (-1);
}

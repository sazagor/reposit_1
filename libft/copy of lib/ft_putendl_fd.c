/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjosue <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 11:04:17 by mjosue            #+#    #+#             */
/*   Updated: 2019/07/08 19:13:11 by mjosue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putendl_fd(char const *s, int fd)
{
	int index;

    if (!s || !fd)
        return;
	index = 0;
	while (s[index] != '\0')
	{
		ft_putchar_fd(s[index],fd);
		index++;
	}
	ft_putchar_fd('\n',fd);
}

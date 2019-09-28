/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjosue <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 11:04:17 by mjosue            #+#    #+#             */
/*   Updated: 2019/09/18 17:07:07 by mjosue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	ft_putendl(char const *s)
{
	int index;

	if (!s)
		return ;
	index = 0;
	while (s[index] != '\0')
	{
		ft_putchar(s[index]);
		index++;
	}
	ft_putchar('\n');
}

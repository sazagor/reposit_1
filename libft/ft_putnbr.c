/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjosue <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 11:33:49 by mjosue            #+#    #+#             */
/*   Updated: 2019/09/18 17:21:57 by mjosue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

static void		ft_putnbr_part(long long *del1, int *count, int *flag, int n)
{
	*del1 = 1;
	*flag = 1;
	*count = 0;
	while (((n / (*del1)) != 0) && (++(*count) > 0))
		*del1 = (*del1) * 10;
}

void			ft_putnbr(int n)
{
	long long	del1;
	long long	del2;
	int			count;
	int			flag;

	if (!n)
	{
		ft_putchar(48);
		return ;
	}
	ft_putnbr_part(&del1, &count, &flag, n);
	if (n < 0)
	{
		flag = -1;
		ft_putchar(45);
	}
	del2 = del1 / 10;
	while (count-- > 0)
	{
		ft_putchar(((n % del1) / del2) * flag + 48);
		del1 = del1 / 10;
		del2 = del2 / 10;
	}
}

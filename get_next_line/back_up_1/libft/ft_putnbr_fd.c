/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjosue <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 11:33:49 by mjosue            #+#    #+#             */
/*   Updated: 2019/09/18 17:19:03 by mjosue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

static void	ft_putnbr_part(long long *del1, int *count, int *flag, int n)
{
	*del1 = 1;
	*flag = 1;
	*count = 0;
	while (((n / (*del1)) != 0) && (++(*count) > 0))
		*del1 = (*del1) * 10;
}

void		ft_putnbr_fd(int n, int fd)
{
	long long	del1;
	long long	del2;
	int			count;
	int			flag;

	if (!n)
	{
		ft_putchar_fd(48, fd);
		return ;
	}
	ft_putnbr_part(&del1, &count, &flag, n);
	if (n < 0)
	{
		flag = -1;
		ft_putchar_fd(45, fd);
	}
	del2 = del1 / 10;
	while (count-- > 0)
	{
		ft_putchar_fd(((n % del1) / del2) * flag + 48, fd);
		del1 = del1 / 10;
		del2 = del2 / 10;
	}
}

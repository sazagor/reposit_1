/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjosue <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 11:33:49 by mjosue            #+#    #+#             */
/*   Updated: 2019/09/18 16:05:33 by mjosue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

static char	*ft_itoa_add(int *count, int *flag, int *n, long long *del1)
{
	char *str;

	if (*n == 0)
	{
		*count = *count + 1;
		*del1 = *del1 * 10;
	}
	if (*n < 0)
		*count = *count + 1;
	str = ft_strnew(*count);
	if (!str)
		return (NULL);
	if (*n < 0)
		*(str++) = 45;
	if (*n < 0)
	{
		*count = *count - 1;
		*flag = -1;
	}
	else
		*flag = 1;
	return (str);
}

char		*ft_itoa(int n)
{
	long long	del1;
	int			count;
	int			temp;
	char		*str;
	int			flag;

	del1 = 1;
	count = 0;
	while (((n / del1) != 0) && (++count > 0))
		del1 = del1 * 10;
	str = ft_itoa_add(&count, &flag, &n, &del1);
	temp = count;
	if (n < 0)
		temp++;
	if (!str)
		return (NULL);
	while (count-- > 0)
	{
		*(str++) = (char)((n % del1) / (del1 / 10)) * flag + 48;
		del1 = del1 / 10;
	}
	return ((str - temp));
}

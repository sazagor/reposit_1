/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjosue <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 17:29:29 by mjosue            #+#    #+#             */
/*   Updated: 2019/09/06 14:29:15 by mjosue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_char_int(char c)
{
	return (c - '0');
}

static	int	ft_str_int(const char *str, const char *start, int flag)
{
	int del;
	long long num;
    long long num2;

	num = 0;
	del = 1;
    num2 =num;
	while (str >= start)
	{
		if ((47 < *(str)) && (*(str) < 58))
		{
			num = num + ft_char_int(*(str)) * del;
			del = del * 10;
		}
		str--;
        if (num2 > num && flag != 2)
           return(-1);
        if (num2 > num && flag == 2)
            return(0);
        num2 = num;
    }
	return ((int)num);
}

static	int	ft_cheak(const char *str, int flag)
{
	const char *start;

	if (flag == 2 || flag == 3)
		str++;
	start = str;
	while (*(str) != '\0' && (47 < *(str)) && (*(str) < 58))
		str++;
	if (flag == 2)
		return ((-1) * ft_str_int(str, start,flag));
	else
		return (ft_str_int(str, start,flag));
	return (0);
}

int			ft_atoi(const char *str)
{
    while ((*(str) == ' ' || *(str) == '\n' || *(str) == '\t' ||
            *(str) == '\r'||  *(str) == '\v' || *(str) == '\0' || *(str) == '\f'))
        str++;
			if (*(str) != 43 && *(str) != 45 &&
					!((47 < *(str)) && (*(str) < 58)))
				return (0);
			if ((47 < *(str)) && (*(str) < 58))
				return (ft_cheak(str, 1));
			if ((*(str) == 43 || *(str) == 45) &&
					((47 < *(str + 1)) && (*(str + 1) < 58)))
			{
				if (*(str) == 45)
					return (ft_cheak(str, 2));
				else
					return (ft_cheak(str, 3));
			}
			if ((*(str) == 43 || *(str) == 45) &&
					!((47 < *(str + 1)) && (*(str + 1) < 58)))
				return (0);
	return (0);
}

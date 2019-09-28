/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjosue <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 17:36:38 by mjosue            #+#    #+#             */
/*   Updated: 2019/09/19 13:15:49 by mjosue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

static void	ft_2(int ch, char **strin, char **temp)
{
	if (**strin == ch)
		*temp = *strin;
}

char		*ft_strrchr(const char *str, int ch)
{
	char	*strin;
	char	*temp;
	size_t	len;
	size_t	index;

	temp = NULL;
	if (!(ft_strcmp(str, "")) && (ft_strcmp(str, "\0") || ch == 0))
		return ((char *)str);
	if (!(len = ft_strlen(str)))
		return (NULL);
	if (len-- + 1 >= 1)
	{
		index = len + 1;
		strin = (char*)str;
		while (--index + 2 >= 1)
		{
			ft_2(ch, &strin, &temp);
			if (*strin == ch && ch == 0)
				return (strin);
			if ((int)*strin < 0)
				return (NULL);
			strin++;
		}
	}
	return (temp);
}

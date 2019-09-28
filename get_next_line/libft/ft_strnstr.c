/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjosue <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 17:36:38 by mjosue            #+#    #+#             */
/*   Updated: 2019/09/19 12:56:42 by mjosue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

static void		ft_strnstr_part_2(size_t *k, const char **str1,
		const char **str2, int *c)
{
	*str1 = *str1 - *c;
	*str2 = *str2 - *c;
	*k = *k - *c;
}

static void		ft_strnstr_part(size_t *k,
		const char **str1, const char **str2, int *c)
{
	*str1 = *str1 + 1;
	*str2 = *str2 + 1;
	(*c)++;
	(*k)++;
}

char			*ft_strnstr(const char *str1, const char *str2, size_t len)
{
	int		c;
	size_t	k;
	size_t	m;

	if (*str2 == '\0')
		return ((char*)str1);
	k = -1;
	m = ft_strlen(str1);
	while (++k < len && k < m)
	{
		if (*str1 == *str2)
		{
			c = 0;
			while ((*str1 == *str2) && *str1 != '\0' && k < len)
				ft_strnstr_part(&k, &str1, &str2, &c);
			if (*str2 == '\0')
				return ((char*)(str1 - c));
			else
				ft_strnstr_part_2(&k, &str1, &str2, &c);
		}
		str1++;
	}
	return (NULL);
}

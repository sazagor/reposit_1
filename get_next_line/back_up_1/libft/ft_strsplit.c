/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjosue <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 17:36:38 by mjosue            #+#    #+#             */
/*   Updated: 2019/09/18 18:50:21 by mjosue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

static char	**ft_free(char **str, unsigned int i)
{
	while (i + 1 >= 1)
	{
		free(*(str + i));
		*(str + i) = NULL;
		i--;
	}
	free(str);
	str = NULL;
	return (NULL);
}

static char	**ft_arr(char const *s, unsigned int *count_word, char c)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	count_w_len;
	char			**str;

	if (!(str = (char**)(malloc(sizeof(*str) * (int)(*(count_word) + 1)))))
		return (NULL);
	i = -1;
	j = -1;
	while (++i < *count_word)
	{
		count_w_len = 0;
		while (++j < ft_strlen(s))
		{
			if (s[j] != c)
				count_w_len++;
			if (s[j] != c && ((s[j + 1] == c) || s[j + 1] == '\0'))
			{
				if (!(*(str + i) = ft_strnew(count_w_len)))
					return (ft_free(str, i - 1));
				break ;
			}
		}
	}
	return (str);
}

static void	ft_count_len(char const *s, unsigned int *count_c,
		unsigned int *count_word, char c)
{
	*count_c = 0;
	*count_word = 0;
	while (*(s) != '\0')
	{
		if (*s == c)
			*(count_c) = *(count_c) + 1;
		if (*s != c && ((*(s + 1) == c) || *(s + 1) == '\0'))
			*(count_word) = *(count_word) + 1;
		s++;
	}
}

static void	ft_strsplit_2(char **str, char const *s,
		unsigned int count_c, char c)
{
	unsigned int	i;
	unsigned int	j;

	i = -1;
	while (s[++i] != '\0' && i < (unsigned int)ft_strlen(s))
	{
		if (s[i] != c && s[i] != '\0')
		{
			j = 0;
			while (s[i] != c && s[i] != '\0')
				str[count_c][j++] = s[i++];
			str[count_c++][j] = '\0';
			i--;
		}
	}
	str[count_c] = NULL;
}

char		**ft_strsplit(char const *s, char c)
{
	char			**str;
	unsigned int	count_c;
	unsigned int	count_word;

	if (!s)
		return (NULL);
	ft_count_len(s, &count_c, &count_word, c);
	if (!(str = ft_arr(s, &count_word, c)))
		return (NULL);
	count_c = 0;
	ft_strsplit_2(str, s, count_c, c);
	return (str);
}

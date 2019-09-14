/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjosue <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 17:36:38 by mjosue            #+#    #+#             */
/*   Updated: 2019/07/08 19:16:04 by mjosue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>


static char ** ft_arr (char const *s, unsigned int * count_word, char c)
{
	unsigned int i;
	unsigned int j;
    unsigned int count_w_len;
	char **str;
    if (!(str = (char**)(malloc(sizeof(*str)*(int)(*(count_word)+1)))))
		return(NULL);
	i = -1;
	j = -1;
	while (++i < *count_word)
	{
		count_w_len = 0;
		while (++j < ft_strlen(s))
		{
			if (s[j] != c)
                count_w_len++;
			if (s[j] != c && ((s[j+1] == c) || s[j+1] == '\0'))
			{
                if (!(*(str+i) = (char*)(malloc(sizeof(*str)*(int)(count_w_len+1)))))
					return(NULL);
				break ;
			}	
        }
    }
	return (str);	
}
static void ft_count_len (char const *s, unsigned int *count_c, unsigned int * count_word, char c)
{
	while (*(s) != '\0')
    {
        if (*s == c)
            *(count_c) = *(count_c) + 1 ;
        if (*s != c && ((*(s + 1) == c) || *(s + 1) == '\0'))
            *(count_word) = *(count_word) + 1;
        
        s++;
    }
    //printf ("\n *(count_word) = %d    :    *(count_c) = %d  \n",*(count_word), *(count_c)  );
}
char ** ft_strsplit(char const *s, char c)
{
    char **str;
    unsigned int i;
    unsigned int j;
    unsigned int count_c;
    unsigned int count_word;
    
    if (!s)
        return(NULL);
    count_c = 0;
    count_word = 0;
	ft_count_len (s,&count_c,&count_word,c);
    if (!(str = ft_arr (s,&count_word,c)))
        return(NULL);
    i = -1;
    count_c = 0;
    while (s[++i] != '\0' && i < (unsigned int)ft_strlen(s))
    {
        //printf ("\n count_word = %d    :    count_c = %d    :   str[%d] = %c \n",count_word, count_c,count_c,s[count_c]);
        if (s[i] != c && s[i] != '\0')
        {
            j = 0;
            while (s[i] != c && s[i] != '\0')
                str[count_c][j++] = s[i++];
            str[count_c++][j] = '\0';
            i--;
            printf("\n str[%d] = %s \n", count_c, str[count_c-1] );
        }
    }
    printf ("\n TUT \n");
    str[count_c] = NULL;
    
    return(str);
}
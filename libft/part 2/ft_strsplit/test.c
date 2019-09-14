/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjosue <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 15:57:31 by mjosue            #+#    #+#             */
/*   Updated: 2019/07/08 15:57:45 by mjosue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>

size_t ft_strlen (const char *str)
{
    size_t k;
    
    k = 0;
    while (str[k] != '\0')
        k++;
    return (k);
}
static char ** ft_arr (char const *s, unsigned int * count_word, char c)
{
    unsigned int i;
    unsigned int j;
    char **str;
    if (!(str = (char**)(malloc(sizeof(*str)*(int)(*(count_word)+1)))))
        return(NULL);
    i = -1;
    j = -1;
    while (++i < *count_word)
    {
        *(count_word) = 0;
        while (++j < ft_strlen(s))
        {
            if (s[j] != c)
                *(count_word) = *(count_word) + 1;
            if (s[j] != c && ((s[j+1] == c) || s[j+1] == '\0'))
            {
                if (!(*(str+i) = (char*)(malloc(sizeof(*str)*(int)(*(count_word)+1)))))
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
    while (s[++i] != '\0')
    {
        if (s[i] != c && s[i] != '\0')
        {
            j = 0;
            while (s[i] != c && s[i] != '\0')
                str[count_c][j++] = s[i++];
            str[count_c++][j] = '\0';
        }
    }
    str[count_c] = NULL;
    return(str);
}
int main ()
{
    int i=-1;
    char *string = "      split       this for   me  !       ";
    char **expected = ((char*[6]){"split", "this", "for", "me", "!", ((void *)0)});
    char **result = ft_strsplit(string, ' ');
    
    while (++i < 6)
    {
        if (strcmp(expected[i],result[i]) != 0)
        {
            printf("OPIAT KAKYU TO HUYNU NAPISAL");
            return(0);
        }
    }
        printf("RABOTAET CHUVAK");
        return(0);
        
        //Diffs:
        //striter:    |FFFFFFFFFFFFFFFF|
        //ft_striter: |FFFFFFFFFFFFFFF|
    }

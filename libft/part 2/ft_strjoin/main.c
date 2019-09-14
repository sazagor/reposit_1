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

char *ft_strcat (char *dest, const char *src)
{
    size_t k;
    size_t len;
    
    len = ft_strlen(dest);
    k = -1;
    while (src[++k] != '\0')
        dest[len++] = src[k];
    dest[len] = '\0';
    return (dest);
}
size_t ft_strlcat(char * dest, const char * src, size_t size)
{
    size_t k;
    size_t len;
    size_t temp;
    
    len = ft_strlen(dest);
    if (len >= size)
        return (size+ft_strlen(src));
    else
    {
        temp = len;
        k = -1;
        while ((src[++k] != '\0') && (len+1<size))
            dest[len++] = src[k];
        dest[len] = '\0';
    }
    return (temp+ft_strlen(src));
}
void ft_bzero (void *dest, size_t num)
{
    size_t i;
    char *str;
    
    str = dest;
    
    i = 0;
    while (i < num)
    {
        *(str+i )= 0;
        i++;
    }
}
char * ft_strnew(size_t size)
{
    char *str;
    
    str = (char*)malloc(sizeof(char) * (size+1));
    if (!str)
        return(NULL);
    ft_bzero(str, size+1);
    return (str);
}
char * ft_strjoin(char const *s1, char const*s2)

{
    char *str;
    size_t len;
    
    //len = ft_strlen (s1) + ft_strlen(s2);
    len = ft_strlcat((char*)s1,s2));
    if (!(str= ft_strnew (len)))
        return(NULL);
    str = ft_strcat (str,s1);
    return(str);
}

int main()
{
    char *s1 = "my favorite animal is";
    char *s2 = " ";
    char *s3 = "the nyancat";
    char *res = ft_strjoin(ft_strjoin(s1, s2), s3);
    
    if (!strcmp(res, "my favorite animal is the nyancat"))
        printf("ahuenchik");
    else
        printf("huynia tvoia programa");
    return 0;
}
    
    
    
    


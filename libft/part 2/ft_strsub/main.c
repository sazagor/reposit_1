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
char * ft_strsub(char const *s, unsigned int start, size_t len)
{
    char *str;
    unsigned int i;
    
    if (!s || !start || !len)
        return(NULL);
    str = ft_strnew (len);
    if (!str)
        return(NULL);
    i = -1;
    while (++i < len)
        *(str+i) = *(s+i+start);
    return(str);
}
int main ()
{
    char *str = "";
    size_t size = 0;
    char *ret = ft_strsub(str, 5, size);
    
    if (!strncmp(ret, str + 5, size))
    {
        free(ret);
        printf("RABOTAET CHUVAK  ret = %s",ret);
        return(0);
    }
    printf("OPIAT KAKYU TO HUYNU NAPISAL");
    return(0);
    
//Diffs:
//striter:    |FFFFFFFFFFFFFFFF|
//ft_striter: |FFFFFFFFFFFFFFF|
}

    
    
    
    


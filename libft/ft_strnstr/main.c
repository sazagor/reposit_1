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
#include <string.h>

char *ft_strnstr(const char *str1, const char *str2,size_t len);

int main ()
{
    //size_t k;
    char *src1="lorem ipsum dolor sit amet";
    char *src2="dolor";
   
   // lorem ipsum dolor sit amet", "dolor", 15)
    //printf ("ebanaya huynya\n");
    //k = ft_strlen(src1);
    //k = (int)(ft_strlen(src1));
    
    printf ("strchr synbol na pozicii: %s\n", strnstr(src1,src2,0));
    printf ("ft_strchr synbol na pozicii: %s\n", ft_strnstr(src1,src2,0));
    
    return (0);
         
}

    
    
    
    


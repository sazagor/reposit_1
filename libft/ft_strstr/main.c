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

char *ft_strstr(const char *str1, const char *str2);

int main ()
{
    //size_t k;
    char *src1="MZIRIBMZIRIBMZP";
    char *src2="MZIRIBMZP";
   
    
    //printf ("ebanaya huynya\n");
    //k = ft_strlen(src1);
    //k = (int)(ft_strlen(src1));
    
    printf ("strchr synbol na pozicii: %s\n", strstr(src1,src2));
    printf ("ft_strchr synbol na pozicii: %s\n", ft_strstr(src1,src2));
    
    return (0);
         
}

    
    
    
    


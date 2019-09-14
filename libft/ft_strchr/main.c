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


char *ft_strchr (const char *str, int ch);

int main ()
{
    //size_t k;
    char src1[15]="12745\067890";
    //printf ("ebanaya huynya\n");
    //k = ft_strlen(src1);
    //k = (int)(ft_strlen(src1));
    printf ("ft_strchr synbol na pozicii: %s\n", ft_strchr(src1,0));
    printf ("strchr synbol na pozicii: %s\n", strchr(src1,0));
    
    return(0);
    
}

    
    
    
    


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


char *ft_strrchr(const char *str, int ch);

int main ()
{
    char *src = "";
    char *d2 = ft_strrchr(src, '\0');
    char *d1 = strrchr(src, '\0');
    printf ("ft_strchr synbol na pozicii: %s\n", d2);
    printf ("strchr synbol na pozicii: %s\n", d1);
    
    return(0);
    
}

    
    
    
    


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
#include "libft.h"


int main ()
{
    int i=-1;
    
    char *string = "0 0 0 0 0 0 0 0 9";
    
    char **expected = ((char*[9]){"0", "0", "0", "me", "!", ((void *)0)});
    
    char **result = ft_strsplit(string, ' ');
    
    
    while (++i < 5)
    {
        if (strcmp(expected[i],result[i]) != 0)
        {
            printf("\n expected[%d] = %s   :   result[%d]  = %s  \n", i,expected[i],i, result[i] );
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

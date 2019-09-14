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
#include <stdlib.h>
#include <ctype.h>

int ft_tolower (int c);

int main ()
{
    int c;
	// Исходный массив
	//const char src[15]="1234567890";

    c =65;
        printf ("isalpha _____     original:    %d  |   ft_:    %d\n",tolower(c),ft_tolower(c));
	//printf ("POINTERS     dest:    %p  |   src:    %p\n",&src[4],&src[3]);
	//printf ("AFTER _____     dest:    %s  |   src:    %s\n",dest,src);
	
        return(0);
         
}

    
    
    
    


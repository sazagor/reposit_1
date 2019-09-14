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

int ft_isprint (int c);

int main ()
{
    int c;
	// Исходный массив
	//const char src[15]="1234567890";
	//unsigned char dest[15]="";
	//printf ("BEFORE_____     dest:    %s  |   src:    %s\n",dest,src);
//    printf ("original atoi _____   string:    12345      |   int:    %d : %d\n",atoi("12345"),ft_atoi("12345"));
//    printf ("original atoi _____   string:    000012345  |   int:    %d : %d\n",atoi("000012345"),ft_atoi("000012345"));
//    printf ("original atoi _____   string:    +12345     |   int:    %d : %d\n",atoi("+12345"),ft_atoi("+12345"));
//    printf ("original atoi _____   string:    -12345     |   int:    %d : %d\n",atoi("-12345"),ft_atoi("-12345"));
//    printf ("original atoi _____   string:    0000-12345 |   int:    %d : %d\n",atoi("0000-12345"),ft_atoi("0000-12345"));
//    printf ("original atoi _____   string:   -0000012345 |   int:    %d : %d\n",atoi("-0000012345"),ft_atoi("-0000012345"));
//    printf ("original atoi _____   string:    123yu45    |   int:    %d : %d\n",atoi("123yu45"),ft_atoi("123yu45"));
//    printf ("original atoi _____   string:  whitespaces  |   int:    %d : %d\n",atoi("     -0123yu45"),ft_atoi("     -0123yu45"));
    c = 126;
        printf ("isalpha _____     original:    %d  |   ft_:    %d\n",isprint(c),ft_isprint(c));
	//printf ("POINTERS     dest:    %p  |   src:    %p\n",&src[4],&src[3]);
	//printf ("AFTER _____     dest:    %s  |   src:    %s\n",dest,src);
	
        return(0);
         
}

    
    
    
    


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

int ft_atoi (const char *str);

int main ()
{
    size_t      i, j;
    char        str[12] = {0};
	// Исходный массив
	//const char src[35]="-9999999999999999999";
	//unsigned char dest[15]="";
	//printf ("BEFORE_____     dest:    %s  |   src:    %s\n",dest,src);
    /*printf ("original atoi _____   string:    12345      |   int:    %d : %d\n",atoi("12345"),ft_atoi("12345"));
    printf ("original atoi _____   string:    000012345  |   int:    %d : %d\n",atoi("000012345"),ft_atoi("000012345"));
    printf ("original atoi _____   string:    +12345     |   int:    %d : %d\n",atoi("+12345"),ft_atoi("+12345"));
    printf ("original atoi _____   string:    -12345     |   int:    %d : %d\n",atoi("-12345"),ft_atoi("-12345"));
    printf ("original atoi _____   string:    0000-12345 |   int:    %d : %d\n",atoi("0000-12345"),ft_atoi("0000-12345"));
    printf ("original atoi _____   string:   -0000012345 |   int:    %d : %d\n",atoi("-0000012345"),ft_atoi("-0000012345"));
    printf ("original atoi _____   string:    123yu45    |   int:    %d : %d\n",atoi("123yu45"),ft_atoi("123yu45"));
    printf ("original atoi _____   string:  whitespaces  |   int:    %d : %d\n",atoi("\t\v\f\r\n \f-06050"),ft_atoi("\t\v\f\r\n \f-06050"));*/
    i = 0;
    while (i < 512)
    {
        j = 0;
        while (j < 10)
        {
            str[j] = ((char)(rand() % 10) + '0');
            j++;
        }
        str[11] = 0;
        if (atoi(str) != ft_atoi(str))
            printf ("%s \n atoi : %d     ft_atoi : %d\n",str,atoi(str),ft_atoi(str));
        i++;
    }
    
	//printf ("POINTERS     dest:    %p  |   src:    %p\n",&src[4],&src[3]);
	//printf ("AFTER _____     dest:    %s  |   src:    %s\n",dest,src);
	
        return(0);
         
}

    
    
    
    


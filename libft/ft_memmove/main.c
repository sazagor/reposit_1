/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjosue <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 15:57:31 by mjosue            #+#    #+#             */
/*   Updated: 2019/09/06 20:24:12 by mjosue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

int main ()
{
    char *r1;
    char *r2;
	// Исходный массив
	//unsigned char src[15]="01234567890";
	//unsigned char dest[15]="999";
	//printf ("BEFORE_____     dest:    %s  |   src:    %s\n",dest,src);
	// Заполняем массив символом ‘1’
	//ft_memmove (&src[4],&src[3], 5);
    r1 = memmove("", "" -1, 0);
    r2 = ft_memmove("", "" -1, 0);
	//printf ("POINTERS     dest:    %p  |   src:    %p\n",&src[4],&src[3]);
	printf ("memmove:        %s  |   \n",r1);
    printf ("ft_memmove:     %s  |   \n",r2);
	/*while (i <10)
		printf("%c",src[i++]);
	printf("\n");*/
	// Вывод массива src на консоль
	//printf ("chanded src: %s\n",src);
        return(0);
         
}
Process terminating with default action of signal 11 (SIGSEGV): dumping core
Bad permissions for mapped region at address 0x4006C4
at 0x4005CE: ft_memmove (usercode.c:22)
by 0x400606: main (usercode.c:34)

    
    
    
    


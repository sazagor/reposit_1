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

size_t ft_strlcat(char * dst, const char * src, size_t size);

int main ()
{
    size_t t;
    //size_t m;
	// Исходный массив
	char src[15]="67890";
	char dest[15]="12345\0gh";
	printf ("BEFORE_____     dest:    %s  |   src:    %s\n",dest,src);
	// Заполняем массив символом ‘1’
	t = strlcat (dest, src,30);
	//m = strlcat (dest, src, 1)
	// Вывод массива src на консоль
	printf ("AFTER _____     dest:    %s  |   src:    %s\n   t = %ld",dest,src,t);
    return(0);
         
}

    
    
    
    


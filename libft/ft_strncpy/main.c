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
#include<string.h>
char *ft_strncpy(char *dest, const char *src, size_t n);

int main ()
{
	// Исходный массив
	char src[15]="127";
	char dest[15]="464646";
	printf ("BEFORE_____     dest:    %s  |   src:    %s\n",dest,src);
	// Заполняем массив символом ‘1’
	ft_strncpy (dest, src,5);
	
	// Вывод массива src на консоль
	printf ("AFTER _____     dest:    %s  |   src:    %s\n",dest,src);
    return(0);
         
}

    
    
    
    


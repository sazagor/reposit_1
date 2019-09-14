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
char *ft_strcpy (char *dest, const char *src); 

int main ()
{
	// Исходный массив
	char src[15]="1274567890";
	char dest[15]="";
	printf ("BEFORE_____     dest:    %s  |   src:    %s\n",dest,src);
	// Заполняем массив символом ‘1’
	ft_strcpy (dest, src); 
	
	// Вывод массива src на консоль
	printf ("AFTER _____     dest:    %s  |   src:    %s\n",dest,src);
    return(0);
         
}

    
    
    
    


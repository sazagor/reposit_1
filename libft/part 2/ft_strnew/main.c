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
char * ft_strnew(size_t size);

int main ()
{
    char *src=NULL;
	// Исходный массив
	//unsigned char src[15]="1234567890";
	
    src = ft_strnew(8);
    printf ("chanded src: %s\n",src);
	// Вывод массива src на консоль
	//printf ("chanded src: %s\n",src);
        return(0);
       
}

    
    
    
    


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
int ft_memcmp (const void *arr1, const void *arr2, size_t n); 

int main ()
{
	// Исходный массив
	unsigned char src1[15]="1274567890";
	unsigned char src2[15]="1234567890";
	//printf ("base src:    %s\n",src);
	// Заполняем массив символом ‘1’
	
	printf ("massivi ne ravni po symboly #: %d\n",ft_memcmp (src1, src2, 9));
	// Вывод массива src на консоль
	//printf ("chanded src: %s\n",src);
        return(0);
         
}

    
    
    
    


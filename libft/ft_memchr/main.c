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
void *ft_memchr (const void *arr, int c, size_t num);

int main ()
{
	// Исходный массив
	unsigned char src[15]="1234567890";
	printf ("base src:    %s\n",src);
	// Заполняем массив символом ‘1’
	
	printf ("iskomiy symbol: %s\n",*(ft_memchr (src, '6', 6)));
	// Вывод массива src на консоль
	printf ("chanded src: %s\n",src);
        return(0);
         
}

    
    
    
    


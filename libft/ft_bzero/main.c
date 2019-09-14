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
void ft_bzero (void *dest, size_t num);

int main ()
{
	int i;
	// Исходный массив
	unsigned char src[15]="1234567890";
	printf ("base src:    %s\n",src);
	// Заполняем массив символом ‘1’
	ft_bzero (src, 5);
	i = 0;
	printf ("chanded src: ");
	while (i <10)
		printf("%c",src[i++]);
	printf("\n");
	// Вывод массива src на консоль
	//printf ("chanded src: %s\n",src);
        return(0);
         
}

    
    
    
    


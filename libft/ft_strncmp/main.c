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
int ft_strncmp(const char *str1, const char *str2, size_t n);

int main ()
{
	// Исходный массив
	char src1[15]="123656789";
	char src2[15]="123456989";
	//printf ("base src:    %s\n",src);
	// Заполняем массив символом ‘1’
	printf ("rodnoy  massivi ne ravni po symboly #: %d\n", strncmp (src1, src2,4));
	printf ("        massivi ne ravni po symboly #: %d\n", ft_strncmp (src1, src2,4));
	// Вывод массива src на консоль
	//printf ("chanded src: %s\n",src);
        return(0);
         
}

    
    
    
    


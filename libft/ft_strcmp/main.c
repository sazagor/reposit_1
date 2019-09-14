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
int ft_strcmp(const char *s1, const char *s2);

int main ()
{
	// Исходный массив
	char src1[15]="123656789";
	char src2[15]="123456989";
	//printf ("base src:    %s\n",src);
	// Заполняем массив символом ‘1’
	printf ("rodnoy  massivi ne ravni po symboly #: %d\n", strcmp (src1, src2));
	printf ("        massivi ne ravni po symboly #: %d\n", ft_strcmp (src1, src2));
	// Вывод массива src на консоль
	//printf ("chanded src: %s\n",src);
        return(0);
         
}

    
    
    
    


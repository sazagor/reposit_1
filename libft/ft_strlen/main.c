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
size_t ft_strlen (const char *str);

int main ()
{
	size_t k;
	char src1[15]="1274567890";
	printf ("ebanaya huynya\n");
	k = ft_strlen(src1);
	//k = (int)(ft_strlen(src1));
	printf ("dlina stroki ravna: %ld\n", k);
	
    return(0);
         
}

    
    
    
    


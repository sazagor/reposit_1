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
#include "libft.h"
#include <time.h>

int main ()
{
    srand(clock());
    int n;
    char *d;
    int res;
    
    //for (int i = 0; i < 20; i++)
    //{
    n = 0;
    d = ft_itoa(n);
    res = atoi (d);
    printf ("res = %d \n",res);
    printf ("d = %s \n",d);
    if (res == n)
        printf(" zaebis\n");
    else
        printf(" huynia tvoia programma\n");
    //}
        

         
}

    
    
    
    


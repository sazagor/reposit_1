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

void ft_striter(char *s, void (*f)(char *));

void *f_f (char *c)
{
    *c = 'F';
    return(c);
}
int main ()
{
    char b[] = "override this !";
    
    printf ("do b = %s\n",b);
    ft_striter(b, f_f);
    printf ("po b = %s\n",b);
    return(0);
    
//Diffs:
//striter:    |FFFFFFFFFFFFFFFF|
//ft_striter: |FFFFFFFFFFFFFFF|
}

    
    
    
    


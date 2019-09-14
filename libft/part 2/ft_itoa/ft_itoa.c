/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjosue <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 11:33:49 by mjosue            #+#    #+#             */
/*   Updated: 2019/07/08 11:34:02 by mjosue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
static char * ft_itoa_add (int *count, int *flag, int *n)
{
    char * str;
    if (*n < 0)
        *count = *count + 1;
    str = ft_strnew (*count); // otsih
    if (!str)
        return(NULL);
    if (*n < 0 )
        *(str++) = 45;
    if (*n < 0)
    {
        *count = *count - 1;
        *flag = -1;
    }
    else
        *flag = 1;
    return (str); // dosih
}
char * ft_itoa(int n)
{
    long long del1;
    int count;
    int temp;
    char * str;
    int flag;
	        
    del1 = 1;
    count =0;
    while ((((n+1) / del1) != 0) && (++count > 0))
	        del1 =del1*10;
    //if (n < 0)
        //count++;
    temp = count;
    if (n < 0)
        temp++;
    str = ft_itoa_add(&count, &flag, &n);
    if (!str)
        return (NULL);
    while (count-- > 0)
    {
        printf("res = %d \n",(int)(((n % del1)/(del1/10))*flag));
        *(str++) = (char)((n % del1)/(del1/10))*flag + 48;
        del1=del1/10;
    }
	return((str-temp));
}



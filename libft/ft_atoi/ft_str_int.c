/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_int.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjosue <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 17:58:13 by mjosue            #+#    #+#             */
/*   Updated: 2019/07/20 17:58:15 by mjosue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int ft_char_int (char c)
{
    return (c -'0');
}

int ft_str_int (char *str, int end)
{
    int i;
    int del;
    int num;
    
    i = end - 4;
    num = 0;
    del = 1;
    while (i >= 0)
    {
        if ((47 < str[i]) && (str[i] < 58))
        {
            num = num + ft_char_int(str[i]) * del;
            del=del * 10;
        }
        i--;
    }
    return (num);
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjosue <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 13:41:18 by mjosue            #+#    #+#             */
/*   Updated: 2019/07/16 14:11:02 by mjosue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

int ft_atoi (const char *str);
void ft_bzero (void *dest, size_t num);
int ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isascii (int c);
int ft_isdigit(int c);
int ft_isprint (int c);
void *ft_memccpy(void *dest, const void *src, int c, size_t num);
void *ft_memchr (const void *arr, int c, size_t num);
int ft_memcmp (const void *arr1, const void *arr2, size_t n);
void *ft_memcpy(void *dest, const void *src, size_t num);
void *ft_memmove(void *dest, const void *src, size_t num);
void *ft_memset (void *dest, int c, size_t num);
char *ft_strcat (char *dest, const char *src);
char *ft_strchr (const char *str, int ch);
int ft_strcmp(const char *s1, const char *s2);
char *ft_strcpy (char *dest, const char *src);
char *ft_strdup(const char *str);
size_t ft_strlcat(char * dst, const char * src, size_t size);
size_t ft_strlen (const char *str);
char *ft_strncat (char *dest, const char *src, size_t n);
int ft_strncmp(const char *str1, const char *str2, size_t n);
char *ft_strncpy(char *dest, const char *src, size_t n);
char *ft_strnstr(const char *str1, const char *str2,size_t len);
char *ft_strrchr(const char *str, int ch);
char *ft_strstr(const char *str1, const char *str2);
int ft_tolower (int c);
int ft_toupper (int c);

#endif

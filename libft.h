/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejasiewi <ejasiewi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 14:37:40 by ejasiewi          #+#    #+#             */
/*   Updated: 2024/12/16 15:06:31 by ejasiewi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H
#include <stdlib.h>
#include <stdio.h>

int		ft_atoi(const char *str);
void	*ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t num, size_t size);
int		ft_isalnum(char c);
int		ft_isalpha(char c);
int		ft_isascii(unsigned char c);
int		ft_isdigit(char c);
int		ft_isprint(char c);
void	*ft_memchr(const void *str, int c, size_t n);
int		ft_memcmp(const void *ptr1, const void *ptr2, size_t num);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *ptr, int value, size_t num);
char	*ft_strchr(const char *str, int c);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
char	*ft_strdup(const char *str);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlen(const char *s);
int		ft_strncmp(const char *str1, const char *str2, size_t n);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_strrchr(const char *str, int c);
int		ft_tolower(int c);
int		ft_toupper(int c);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejasiewi <ejasiewi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 18:22:34 by ejasiewi          #+#    #+#             */
/*   Updated: 2024/12/14 20:55:03 by ejasiewi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	*ft_memchr(const void *str, int c, size_t n)
{
	const char	*s;
	size_t		i;

	i = 0;
	s = (const char *)str;
	while (i < n)
	{
		i++;
		if (s[i] == (char)c)
			return ((void *)(s + i));
	}
	return (NULL);
}

// int main()
// {
//     char s[20] = "hello world";
//     char *result = ft_memchr(s, 'o', 5);
//     printf("%c", *result);
//     return 0;
// }
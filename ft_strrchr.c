/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejasiewi <ejasiewi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 12:47:48 by ejasiewi          #+#    #+#             */
/*   Updated: 2024/12/14 20:43:38 by ejasiewi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stdlib.h>

char	*ft_strrchr(const char *str, int c)
{
	const char	*last;

	last = NULL;
	while (*str != '\0')
	{
		if (*str == (char)c)
			last = str;
		str++;
	}
	return ((char *)last);
}

// int main()
// {
//     int c = 'o';
//     char str[20] = "hello world";
//     char *result = ft_strrchr(str, c);
//     printf("%c", *result);
//     return 0;
// }
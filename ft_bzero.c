/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejasiewi <ejasiewi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 16:25:04 by ejasiewi          #+#    #+#             */
/*   Updated: 2024/12/14 19:42:29 by ejasiewi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_bzero(void *s, size_t n)
{
	unsigned char	*arr;
	size_t			i;

	i = 0;
	arr = (unsigned char *) s;
	while (i < n)
	{
		arr[i] = '0';
		i++;
	}
	return (s);
}

// int main()
// {
//     char arr[20] = "hello world";
//     ft_bzero(arr, 5);
//     printf("%s", arr);
//     return 0;
// }
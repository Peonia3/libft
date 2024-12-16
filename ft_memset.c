/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejasiewi <ejasiewi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 17:06:55 by ejasiewi          #+#    #+#             */
/*   Updated: 2024/12/14 19:36:25 by ejasiewi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *ptr, int value, size_t num)
{
	unsigned char	*arr;
	size_t			i;

	i = 0;
	*arr = (unsigned char *) ptr;
	while (i < num)
	{
		arr[i] = (unsigned char)value;
		i++;
	}
	return (ptr);
}

// int main()
// {
//     char arr[20] = "hello world";
//     ft_memset(arr, 'X', 4);
//     printf("%s\n", arr);
//     return 0;
// }
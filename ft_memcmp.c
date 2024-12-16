/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejasiewi <ejasiewi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 12:53:20 by ejasiewi          #+#    #+#             */
/*   Updated: 2024/12/14 20:58:28 by ejasiewi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t num)
{
	size_t				i;
	const unsigned char	*s1;
	const unsigned char	*s2;

	i = 0;
	s1 = (const unsigned char *)ptr1;
	s2 = (const unsigned char *)ptr2;
	while (i < num)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

// int main()
// {
//     char ptr1[20] = "hello world";
//     char ptr2[20] = "dupa cyce";
//     int result = ft_memcmp(ptr1, ptr2, 5);
//     printf("%d", result);
//     return 0;
// }
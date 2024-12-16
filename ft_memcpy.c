/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejasiewi <ejasiewi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 19:34:46 by ejasiewi          #+#    #+#             */
/*   Updated: 2024/12/14 19:45:40 by ejasiewi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*source;
	size_t				i;

	i = 0;
	d = (unsigned char *)dest;
	source = (const unsigned char *)src;
	while (i < n)
	{
		d[i] = source[i];
		i++;
	}
	return (dest);
}

// int main()
// {
// 	char src[20] = "hello world";
// 	char dest[20];
// 	ft_memcpy(dest, src, 5);
// 	printf("%s", dest);
// 	return 0;
// }
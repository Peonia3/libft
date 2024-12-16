/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejasiewi <ejasiewi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 20:41:56 by ejasiewi          #+#    #+#             */
/*   Updated: 2024/12/14 19:53:23 by ejasiewi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char			*destination;
	const unsigned char		*source;
	size_t					i;

	destination = (unsigned char *)dest;
	source = (const unsigned char *)src;
	i = 0;
	if (destination == source || n == 0)
		return (dest);
	if (destination < source)	{
		while (i < n)	{
			destination[i] = source[i];
			i++;
		}
	}
	else {
		i = n;
		while (i > 0){
			destination[i - 1] = source[i - 1];
			i--;
		}
	}
	return (dest);
}

// int main()
// {
// 	char src[20] = "hello world";
// 	char dest[20] = "";
// 	ft_memmove(dest, src, 5);
// 	printf("%s\n", dest);
// 	return 0;
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejasiewi <ejasiewi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 13:03:48 by ejasiewi          #+#    #+#             */
/*   Updated: 2024/12/14 20:36:27 by ejasiewi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dstlen;
	size_t	srclen;

	dstlen = 0;
	srclen = 0;
	i = 0;
	while (dst[dstlen] != '\0' && dstlen < size)
	{
		dstlen++;
	}
	while (src[srclen] != '\0')
	{
		srclen++;
	}
	if (size <= dstlen)
		return (size + srclen);
	while (src[i] != '\0' && (dstlen + i + 1) < size)
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	dst[dstlen + i] = '\0';
	return (dstlen + srclen);
}

// int main()
// {
// 	char dst[20] = "hello ";
// 	char src[20] = "world";
// 	int result = ft_strlcat(dst, src, 20);
// 	printf("%d", result);
// 	return 0;
// }
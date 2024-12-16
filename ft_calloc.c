/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejasiewi <ejasiewi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 11:12:14 by ejasiewi          #+#    #+#             */
/*   Updated: 2024/12/15 15:25:21 by ejasiewi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stdlib.h>

void	*ft_memset(void *ptr, int value, size_t num)
{
	unsigned char	*arr;
	size_t			i;

	arr = (unsigned char *)ptr;
	i = 0;
	while (i < num)
	{
		arr[i] = value;
		i++;
	}
	return (ptr);
}

void	*ft_calloc(size_t num, size_t size)
{
	void	*ptr;

	ptr = malloc(num * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	ft_memset(ptr, 0, num * size);
	return (ptr);
}

// int main()
// {
//     int *arr = ft_calloc(15, sizeof(int));
//     size_t i = 0;
//     while (i < 15)
//     {
//         printf("%d", arr[i]);
//         i++;
//     }
//     free(arr);
//     return 0;
// }